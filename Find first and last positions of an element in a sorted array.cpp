#include<stdio.h>


void first_last_pos(int a[], int n, int search){
	int c = 0, start_pos = 0, end_pos = 0;
	for(int i=0; i<n; i++){
		if(a[i] == search){
			c++;
			if(c == 1){
			start_pos = i;	
			}
			end_pos = i;
		}	
	}
	
	printf("start_pos = %d,end_pos = %d  ",start_pos,end_pos);
}

int main(){
	int a[] = {1, 3, 5, 5, 5, 5, 7, 123, 125 };
	int n = sizeof(a)/sizeof(a[0]);
	int search = 7;
	
	//printf("\nEnter search element :\n");
	//scanf("%d", &search);
	first_last_pos(a, n, search);
	
}
