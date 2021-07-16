#include<bits/stdc++.h>
using namespace std;

int recursive(int n, int k=1){
	if(n==0 || n==1){
		return k;
	}
	return recursive(n-1, k*n);

}




int main(){
	int n;
	cin>>n;
	cout<<recursive(n);
	return 0;
}