#include<iostream>
using namespace std;

int maxsubarray(int a[], int size)
{ int curr_sum = 0 ,max_sum = 0;

	for(int i=0; i<size ;i++){
		curr_sum = curr_sum + a[i];
		
		if(curr_sum >max_sum){
			max_sum = curr_sum;
		}
		
		if(curr_sum < 0){
			curr_sum = 0;
		}
	}

	return max_sum;
}



int main(){
	int a[] = {-5, 4, 6, -3, 4, -1};
	int size = sizeof(a)/sizeof(a[0]);
	
	int max_sum = maxsubarray(a, size);
	cout << "max sum of sub array = "<<max_sum;
	
}
