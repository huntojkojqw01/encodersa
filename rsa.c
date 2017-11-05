#include "rsa.h"
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
