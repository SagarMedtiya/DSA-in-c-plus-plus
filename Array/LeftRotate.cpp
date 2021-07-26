#include<bits/stdc++.h>
using namespace std;

void rotate(int a[], int size){
	int b = a[0];
	for(int i=0; i<size; i++){
		a[i] = a[i+1];
	}
	a[size-1] = b;
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[]= {0,2,0,0,2};
	int size = 5;
	rotate(a,size);
	return 0;
}