#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[] = "naman", temp;
	int i=0, j= strlen(str);
/*	while(j>i){
		if(str[i++]!=str[j--]){
			cout<<"not polidrome";
			return 1;
		}
	}
	cout<<" polidrome";*/
	
	for(int i=0;i<j/2;i++){
		temp = str[i];
		str[i] = str[j-i-1];
		str[j-i-1]= temp;
	}
	puts(str);
}
