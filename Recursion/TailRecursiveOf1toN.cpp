#include<bits/stdc++.h>
using namespace std;

void recursive(int n, int k=1){
	
	if(n==0){
		return ;
	}
	cout<<k<<endl;
	recursive(n-1,k+1);
}

int main(){
	int n;
	cin>>n;
	recursive(n);
	return 0;
}