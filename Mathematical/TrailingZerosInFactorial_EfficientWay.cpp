#include<bits/stdc++.h>
using namespace std;

int trailing(int a){
	int res =0;
	for(int i= 5;i<=a;i*=5){
		res = res + a/i;
	}
	return res;
}


int main(){
	int a;
	cin>>a;
	int b = trailing(a);
	cout<<b;
	return 0;
}
