#include<bits/stdc++.h>
using namespace std;

int divisor(int n){
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			cout<<i<<endl;
			if(i!=n/i){   //It is used to not print double number like in square root of 25
				cout<<(n/i)<<endl;
			}
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