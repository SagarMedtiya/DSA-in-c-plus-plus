#include<bits/stdc++.h>
using namespace std;

int largestElement(int a[], int size){
	int res =0;
	for(int i=1; i<size; i++){
		if(a[i] >a[res]){
			res = i;
		}
	}
	return res+1;
}

int main(){
	int a[]= {69,45,100,52,43};
	int size = 5;
	cout<<largestElement(a,size);
	return 0;
}