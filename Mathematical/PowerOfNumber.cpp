#include<bits/stdc++.h>
using namespace std;

int power(int n, int b){
	int c=1;
	for(int i=1; i<=b;i++){
		c=c*n;
	}
	return c;
}

int main(){
	int n,b;
	cin>>n>>b;
	int c = power(n,b);
	cout<<c;
	return 0;
}