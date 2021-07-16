#include<bits/stdc++.h>
using namespace std;

int divisor(int n){
	int i;
	for(i=1;i*i<=n;i++){
		if(n%i==0){
			cout<<i<<endl;
		}
	}
	for(;i>=1;i--){
		if(n%i==0){
			cout<<n/i<<endl;
		}
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	divisor(n);
	return 0;
}