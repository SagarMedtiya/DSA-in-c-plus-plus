#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
	if(n == 1){
		return 0;
	}
	if(n == 2 || n == 3){
		return 1;
	}
	if (n%2 == 0 || n%3 == 0){
		return 0;
	}
	for(int i= 5; i*i<=n; i=i*6){
		if(n%i == 0 || n*(i+2)==0){
			return 0;
		}
	}
	return 1;
}

int primeFactor(int n){
	if(n == 1){
		cout<<"Not a prime nor composite";
	}
	else{
		for(int i =2;i<n;i++){
		if(isprime(i)){
			int x = i;
			while(n%x == 0){
				cout<<i<<endl;
				x= x*x;
			}
		}
	}
	cout<<"It is a prime number.";
	}
	
	return 0;
}

int main(){
	int n;
	cin>>n;
	int b = primeFactor(n);
	return 0;
}