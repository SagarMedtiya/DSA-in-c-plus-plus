#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int low, int high){
	while(low<high){
		swap(a[low], a[high]);
		low++;
		high--;
	}
}

void rotate(int a[], int size, int d){
	reverse(a,0,d-1);
	reverse(a,d,size-1);
	reverse(a,0,size-1);
}


int main(){
	int a[]= {0,0,0,0,2}, size=5, d=2;
	rotate(a,size,d);
	for(int i=0; i<size;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}