#include<bits/stdc++.h>
using namespace std;

void leftrotate(int a[], int size){
	int temp =a[0];
	for(int i=1; i<size;i++){
		a[i]=a[i+1];
	}
	a[size-1]= temp;
}

void rotate(int a[], int size, int d){
	if(d<size){
		for(int i=1; i<=d;i++){
		leftrotate(a, size);
		}
	}
	
	
}

int main(){
	int a[]= {0,0,0,0,2};
	int size = 5;
	int d=3;
	rotate(a,size,d);
	for(int j=0; j<size;j++){
		cout<<a[j]<<endl;
	}
	return 0;
}