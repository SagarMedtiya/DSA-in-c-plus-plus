#include<bits/stdc++.h>
using namespace std;

void leaders(int a[], int size){
	int cur_led = a[size-1];
	cout<<cur_led<<endl;
	for(int i=size-2;i>=0;i--){
		if(cur_led <a[i]){
			cout<<a[i]<<endl;
		}
	}
}

int main(){
	int a[]= {7,10,4,10,6,5,2};
	int size= sizeof(a)/sizeof(a[0]);
	leaders(a,size);
	return 0;
}