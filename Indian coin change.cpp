#include "bits/stdc++.h"
//#include<iostream>
//#include<vector>
using namespace std;

#define vec vector<int> 
#define rep(i,a,b) for(int i=a ;i<b;i++)
/*
void Indian_coin_change(vector<int> deno,int v)
{
//		for( auto value :deno)
//	cout<<value<<' ';

	for

}*/
int main()
{
	int n;
	cout<<"n =";
	cin>>n;
	
	vec deno(n);
	rep(i,0,3)
	cin>>deno[i];
	
	int v ;
	cout<<"v =";
	cin>>v;
	
	sort(deno.begin(), deno.end(), greater<int>());
//	for(const auto &value :deno)
//	cout<<value<<' ';
 //Indian_coin_change(deno,v);	
 vec ans;
 int c=0;
 	for(auto value:deno)
	 {
 		while(v >= value)
		 {
		 	v = v-value;
		 	ans.push_back(value);
		 	c++;
		 }
	 }
 	
 for(int i=0;i<ans.size();i++){
 	cout<<ans[i]<<" ";
 }
 cout<<endl<<c;
}


