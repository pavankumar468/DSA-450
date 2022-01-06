#include<stdio.h>

int perfect_square(int n){
	int c=0;
	for(int i=1 ;i*i<n; i++){
		c++;
	}
	return c;
}

int main(){
	int n = 9;

	printf("perfect_square = %d",perfect_square(n));
	
}
