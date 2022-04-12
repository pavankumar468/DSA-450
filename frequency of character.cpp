#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[] = "pavankum ar";
	int n = strlen(str);
	int visited[n],j,c=0,count_distinct=0;
	for(int i=0;str[i]!='\0';i++){
		c=1;
		if(visited[i]!=1)
		{
			for(j=i+1;j<n;j++){
				if(str[i]==str[j]){
					c++;
					visited[j]=1;
				}
			}
			//cout<<"frequency of"<<str[i]<<" = "<<c<<endl;
			count_distinct++;
			
			if(c==1){
				cout<<"non repeating element = "<<str[i]<<endl;
			}	
			if(c>1){
		 	cout<<"Repeating element = "<<str[i]<<endl;
		 } 	
		}
	}
//	cout<<" no of distinct elements = "<<count_distinct;
}
