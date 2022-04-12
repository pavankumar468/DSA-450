#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[] = "pavan kum ar";
	
	str[0]= toupper(str[0]);
	str[strlen(str)-1]=toupper(str[strlen(str)-1]);
	for(int i=0;str[i]!='\0';i++){
		if(str[i] ==' '  )
		{
			str[i-1] = toupper(str[i-1]);
				str[i+1] = toupper(str[i+1]);
		 
		}
	}
	puts(str);

}
