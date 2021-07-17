#include<bits/stdc++.h>
using namespace std;

void zeros(int a[], int size){
	for(int i =0; i<size; i++){
		if(a[i]==0){
			for(int j=i+1; j<size;j++){
				if(a[j] != 0){
					swap(a[j],a[i]);
				}
			}
		}
	}
	for(int i=0; i<size;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[]= {1,2,0,0,2};
	int size = 5;
	zeros(a,size);
	return 0;
}