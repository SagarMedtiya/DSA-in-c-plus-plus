#include<bits/stdc++.h>
using namespace std;

void Nto1(int n){
	int count=1;
	if(n==0){
		return;
	}
	else{
		Nto1(n-1);
		cout<<n<<endl;
	}
}


int main(){
	int n;
	cin>>n;
	Nto1(n);
	return 0;
}