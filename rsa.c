#include <stdio.h>
#include <stdlib.h>
#include "rsa.h"
#include "consant.h"
#include "time.h"
int gcd(int a,int b){
	if(a%b!=0){
		return gcd(b,a%b);
	}
	else return b;
}
int luy_thua_cao(int x,int y,int mod){// tính x mũ y modul mod
	int a,b,tmp;
	if(y==0) return 1%mod;
	else
		if(y==1) return x%mod;
		else {
			a=y/2;
			tmp=(x*x)%mod;
			if(y%2==0)
				return luy_thua_cao(tmp,a,mod);
			else{
				tmp=luy_thua_cao(tmp,a,mod);
				return (tmp*x)%mod;
			}
		}	
}
int* gcd_mo_rong(int n1,int n2){
	register int a1=1,b2=1,a2=0,b1=0,q,r,t;
	int *result;
	result=(int*)malloc(3*sizeof(int));	
	do{
		q=n1/n2,r=n1%n2;
		if(r==0){
			result[0]=n2,result[1]=a2,result[2]=b2;			
			return result;		
		}
		else{
			n1=n2,n2=r,t=a2,a2=a1-q*a2,a1=t,t=b2,b2=b1-q*b2,b1=t;
		}
	}while(r!=0);

}
void init(rsa_params *x){
	srand(time(NULL));
	//vòng lặp để chọn ra p và q:
	do{
		x->p=primes[rand()%50],	x->q=primes[rand()%50];// nếu chọn p, q to quá thì n sẽ to và khi tính Y^d bị lòi
	}while(x->p==x->q);	
	x->n=x->p*x->q,x->m=(x->p-1)*(x->q-1);
	//vòng lặp để chọn ra e:
	do{
		x->e=primes[rand()%1000];
	}while(x->e>x->m-1||x->m%x->e==0);	
	int *tmp;
	tmp=gcd_mo_rong(x->e,x->m);
	if(tmp[1]<0) x->d=tmp[1]+x->m;
	else x->d=tmp[1];	
}