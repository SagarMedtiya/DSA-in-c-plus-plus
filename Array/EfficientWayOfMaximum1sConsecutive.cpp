#include<bits/stdc++.h>
using namespace std;

int consecutive(int a[], int n){
	int res =0, curr=0;
	for(int i=0;i<n;i++){
		if(a[i] ==0){
			curr=0;
		}
		else{
			curr++;
			res = max(res,curr);
		}
	} 
	return res;
}

int main(){
	int a[] ={0,1,1,0,1,1,1,1};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<consecutive(a,size);
	return 0;
}