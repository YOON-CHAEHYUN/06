#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	
	return (a+b);
}

int square(int n){
	
	return (n*n);
}
int get_max(int x, int y){
	if (x>y)
		return x;
	return y;
}

int main(void){
	int a, b, c;
	
	a=sumTwo(3,8);
	b=square(5);
	c=get_max(10,16);
	
	printf("%d, %d, %d",a,b,c);	
	
	
	return 0;
}
