#include<bits/stdc++.h>
using namespace std;

int maximum(int a[], int size){
	int res = a[1] - a[0];
	for(int i=0; i<size-1;i++){
		for(int j=i+1;j<size;j++){
			res = max(res, a[j]-a[i]);
		}
	}
	return res;
}

int main(){
	int a[]= {2,3,10,6,4,8,1};
	int size= sizeof(a)/sizeof(a[0]);
	cout<<maximum(a,size);
	return 0;
}