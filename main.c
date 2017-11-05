#include <stdio.h>
#include "rsa.h"
int main(int argc,char* argv[]){
	int *r;
	if(argc>=3){
		r=gcd_mo_rong(atoi(argv[1]),atoi(argv[2]));
		printf("GCD mo rong n1=%d,n2=%d return %d, %d ,%d\n",atoi(argv[1]),atoi(argv[2]),r[0],r[1],r[2]);
	}else
		puts("No argument!");
	return 0;
}