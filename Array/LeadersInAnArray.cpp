#include<bits/stdc++.h>
using namespace std;
//An element is called the leader of an array if there is no element greater than it on the right side.

void leaders(int a[], int size){
	for(int i=0;i<size;i++){
		bool flag = false;
		for(int j=i+1; j<size;j++){
			if(a[i] <= a[j]){
				flag = true;
				break;
			}
		}
		if(flag == false){
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