#include<bits/stdc++.h>
using namespace std;

int evenodd(int a[], int n){
	int res=1, curr=1;
	for(int i=1;i<n;i++){
		if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0) && a[i-1]%2==0){
			curr++;
			res = max(res,curr);
		}
		else{
			curr=1;
		}
	}
	return res;
}

int main(){
	int a[]= {2,3,6,7,8};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<evenodd(a,size);
	return 0;
}