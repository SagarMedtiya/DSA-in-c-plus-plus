#include<bits/stdc++.h>
using namespace std;

bool powerof2(int n){
	if(n==0){
		return false;
	}
	return ((n&(n-1)) == 0);		
}
int main(){
	int a;
	cin>>a;
	cout<<powerof2(a);
	return 0;
}