#include<bits/stdc++.h>
using namespace std;

void zeros(int a[], int size){
	int count = 0;
	for(int i=0; i<size;i++){
		if(a[i]!= 0){
			swap(a[i],a[count]);
			count++;
		}
	}
	for(int i=0; i<size;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[]= {0,2,0,0,2};
	int size = 5;
	zeros(a,size);
	return 0;
}