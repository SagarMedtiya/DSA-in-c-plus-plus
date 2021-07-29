#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[], int n){
	int res =a[0], maxending =a[0];
	for(int i=1; i<n;i++){
		maxending =max(maxending+a[i],a[i]);
		res = max(res, maxending);
	}
	return res;

}

int main(){
	int a[] ={1,-2,3,-1,2};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<maxsum(a, size);
	return 0;
}