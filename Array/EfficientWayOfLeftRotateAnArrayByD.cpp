#include<bits/stdc++.h>
using namespace std;

void rotate(int a[], int size, int d){
	int temp[d];
	int n = size;
	for(int i=0; i<d;i++){
		temp[i] = a[i];
	}
	for(int i=d;i<size;i++){
		a[i-d] = a[i];
	}
	for(int i=0; i<size;i++){
		a[n-d+i] = temp[i];
	}
}

int main(){
	int a[]= {0,0,0,0,2}, size=5, d=3;
	rotate(a,size,d);
	for(int i=0; i<size;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}