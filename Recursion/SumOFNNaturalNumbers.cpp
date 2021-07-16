#include<bits/stdc++.h>
using namespace std;

int natural(int n, int k=1){
	if(n==1){
		return k;
	}
	return natural(n-1,k+n);
}

int main(){
	int n;
	cin>>n;
	cout<<natural(n);
	return 0;
}