#include<bits/stdc++.h>
using namespace std;

void Nto1(int n){
	if(n==0){
		return;
	}
	cout<<n<<endl;
	Nto1(--n);
}

int main(){
	int n;
	cin>>n;
	Nto1(n);
	return 0;
}