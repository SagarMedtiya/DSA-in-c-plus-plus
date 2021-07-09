#include<bits/stdc++.h>
using namespace std;

void kthBit(int n, int k){
	if(1 & (n>>(k-1)) !=0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	kthBit(n,k);
	return 0; 
}
