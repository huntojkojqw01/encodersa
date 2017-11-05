#include <stdio.h>
#include <stdlib.h>
#include "rsa.h"
int main(int argc,char* argv[]){	
	rsa_params _rsa;	
	if(argc>=5){
		int x=atoi(argv[4]),y;	
		printf("%d^%d mod %d = %d\n",atoi(argv[1]),atoi(argv[2]),atoi(argv[3]),luy_thua_cao(atoi(argv[1]),atoi(argv[2]),atoi(argv[3])) );	
		init(&_rsa);
		printf("p=%d,q=%d,n=%d,m=%d,e=%d,d=%d\n",_rsa.p,_rsa.q,_rsa.n,_rsa.m,_rsa.e,_rsa.d);
		printf("%d \n",(_rsa.e*_rsa.d)%_rsa.m );
		y=luy_thua_cao(x,_rsa.e,_rsa.n);
		printf("Goc: %d,ma hoa thanh: %d,roi giai ma thanh: %d\n",x,y,luy_thua_cao(y,_rsa.d,_rsa.n));
	}else
		puts("No argument!");
	return 0;
}