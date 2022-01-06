#include<stdio.h>

int perfect_square(int n){
	int c=0;
	for(int i=1 ;i<n; i++){
		if(i*i < n){
		c++;
		}
	}
	return c;
}

int main(){
	int n = 3;

	printf("perfect_square = %d",perfect_square(n));
	
}
