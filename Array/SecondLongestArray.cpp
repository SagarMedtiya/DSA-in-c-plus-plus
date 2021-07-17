#include<bits/stdc++.h>
using namespace std;

int largestElement(int a[], int size){
	int res = 0;
	for(int i=1;i<size; i++){
		if(a[i] > a[res]){
			res = i;
		}
	}
	return res;
}

int secondLargestElement(int a[],int size){
	int largest = largestElement(a, size);
	int res = -1;
	for(int i =0; i<size; i++){
		if(a[i] != a[largest]){
			if(res==-1){
				res=i;
			}
			else if(a[i] > a[res]){
				res=i;
			}
		}
	}
	return res;
}

int main(){
	int a[]= {69,45,100,52,43};
	int size = 5;
	cout<<secondLargestElement(a,size);
	return 0;
}