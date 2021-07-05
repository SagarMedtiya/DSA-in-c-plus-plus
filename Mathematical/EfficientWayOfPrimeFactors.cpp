#include<bits/stdc++.h>
using namespace std;

int primeFactor(int n){
	if(n<=1){
		cout<<"Not a prime nor composite";
	}
	for(int i=2; i*i<=n;i++){
		while(n%i == 0){
			cout<<i<<endl;
			n=n/i;
		}

	}
	if(n>1){
		cout<<n; // to print the last prime number
	}
	
	return 0;
}

int main(){
	int n;
	cin>>n;
	int b = primeFactor(n);
	return 0;
}
