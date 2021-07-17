#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[], int size){
	int res = 1;
	for(int i=1;i<size;i++){
		if(a[i] != a[res-1]){
			a[res] = a[i];
			res++;
		}
	}
	cout<<res;
	return res;
}

int main(){
	int a[]= {1,2,2,3,5};
	int size = 5;
	size = duplicate(a,size);
	cout<<"After Removal"<<endl;
    for(int i = 0; i < size; i++){
       	cout<<a[i]<<" ";
    }
	return 0;
}