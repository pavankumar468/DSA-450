#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[] = "pavankumar";
	int j;
	for(int i=0;str[i]!='\0';i++){
		if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
			for(j=i; str[j]!='\0';j++){
				str[j]= str[j+1];
			}
		}
	}
	puts(str);
}
