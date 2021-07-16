#include<bits/stdc++.h>
using namespace std;

int isprime(int n){
	if(n==1){
		return 0;
	}
	if(n==2 || n==3){
		return 1;
	}
	if(n%2==0 || n%3==0){
		return 0;
	}
	for(int i=5;i*i<=n;i=i*6){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
	}
	return 1;
}
int sieve(int n){
	vector<bool> isprime(n+1,true);
	for(int i=2; i*i<=n; i++){
		if(isprime[i]){
			for(int j=i*i;j<=n;j=j+i){
				isprime[j] = false;
			}
		}
	}	
	for(int i=2; i<=n; i++){
		if(isprime[i]){
			cout<<i<<endl;
		}
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	sieve(n);
	return 0;
}