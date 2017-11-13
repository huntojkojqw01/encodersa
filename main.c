#include <stdio.h>
#include <stdlib.h>
#include "rsa.h"
int main(int argc,char* argv[]){	
	rsa_params _rsa;
	int x,y;	
	if(argc>=2){		
		init(&_rsa);
		if(argc>=3){
			x=atoi(argv[2]);
			printf("p=%d,q=%d,n=%d,m=%d,e=%d,d=%d\n",_rsa.p,_rsa.q,_rsa.n,_rsa.m,_rsa.e,_rsa.d);			
			y=rsa_encode(x,_rsa);
			printf("Goc: %d,ma hoa thanh: %d,roi giai ma thanh: %d\n",x,y,rsa_decode(y,_rsa));
		}		
		// FILE *f,*f2;
		// f=fopen("text","wb");
		// unsigned int n=1;
		// fwrite(&n,sizeof(int),1,f);
		// n=2;
		// fwrite(&n,sizeof(int),1,f);
		// n=256;
		// fwrite(&n,sizeof(int),1,f);
		// fclose(f);
		ma_hoa(_rsa,argv[1]);	
		//giai_ma(_rsa,"encode");
	}else
		puts("No argument!");	
	return 0;
}