#include<bits/stdc++.h>
using namespace std;

void DtB(int n){
	if(n==0){
		return;
	}
	else{
		DtB(n/2);
		cout<<n%2;
	}
}

int main(){
	int a;
	cin>>a;
	DtB(a);
	return 0;
}