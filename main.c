#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int facto(int n){
	int i, fac=1;
	for(i=1;i<n+1;i++)
		fac=fac*i;
	return fac;
}

int combi(int n, int r){
	int n_fac, n_r_fac, r_fac;
	n_fac = facto(n);
	n_r_fac = facto(n-r);
	r_fac = facto(r);
	printf("%d,%d,%d",n_fac,n_r_fac,r_fac);
	return (n_fac/(n_r_fac*r_fac));
}

int main(void){
	
	int n, r, comb;
	printf("input n, r: ");
	scanf("%d,%d",&n,&r);
	comb=combi(n, r);
	
	printf("combi=%d",comb);
	return 0;
}
