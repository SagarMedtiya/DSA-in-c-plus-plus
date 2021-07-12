#include<bits/stdc++.h>
using namespace std;

int oddOccuring(int a[],int n){
	int res =0;
	for(int i=0; i<n; i++){
		res = res ^ a[i];
	}
	return res;
}


int main(){
	int a[]= {2,3,4,4,2,2,5,5};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<oddOccuring(a, n);
	return 0;
}