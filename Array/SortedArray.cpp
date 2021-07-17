#include<bits/stdc++.h>
using namespace std;

bool isShorted(int a[], int size){
	for(int i =0; i<size; i++){
		if(a[i] >= a[i+1]){
			return false;
		}
	}
	return true;
}

int main(){
	int a[]= {1,2,30,4,40};
	int size = 5;
	cout<<isShorted(a,size);
	return 0;
}