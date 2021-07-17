#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[], int size){
	int temp[size];
	temp[0] = a[0];
	int res =1;
	for(int i=1;i<size;i++){
		if(temp[res-1] != a[i]){
			temp[res] =a[i];
			res++;
		}
	}
	for(int i=0;i<res;i++){
		a[i] = temp[i];
	}
	return res;
}

int main(){
	int a[]= {1,2,2,4,3,40};
	int size = 6;
	size = duplicate(a,size);
	cout<<"After Removal"<<endl;
    for(int i = 0; i < size; i++){
       	cout<<a[i]<<" ";
    }
	return 0;
}