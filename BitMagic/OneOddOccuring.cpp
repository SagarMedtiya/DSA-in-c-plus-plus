#include<bits/stdc++.h>
using namespace std;

int oddOccuring(int a[],int n){
	for(int i =0; i<n; i++){
		int count = 0;
		for(int j =0; j<n;j++){
			if(a[j] == a[i]){
				count++;
			}
		}
		if(count%2 != 0){
			cout<<a[i];
		}
		
	}
	return 0;
	
}

int main(){
	int a[]= {1,2,2,2,3};
	int n = sizeof(a)/sizeof(a[0]);
	oddOccuring(a, n);
	return 0;
}