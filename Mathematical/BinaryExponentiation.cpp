#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
	int res=1;
	while(b>0){
		if(n%2!==0){
			res= res*x;

		}
		x=x*x;
		n=n/2;
	}
	return res;
}

int main(){
	int a,b;
	cin>>a>>b;
	power(a,b);
	return 0;
}