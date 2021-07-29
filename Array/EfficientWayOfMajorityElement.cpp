// Moore's voting algorithm
//print the index of the first most occuring element
#include<bits/stdc++.h>
using namespace std;

int index(int a[], int n){
	int count =1, res =0;
	for(int i =1; i<n;i++){
		if(a[res] == a[i]){
			count++;
		}
		else{
			count--;
		}
		if(count==0){
			res =i;
			count=1;
		}
	}
	count =0;
	for(int i=0;i<n;i++){
		if(a[res]==a[i]){
			count++;
		}
	}
	if(count <=n/2){
		res = -1;
	}
	return res;
}

int main(){
	int a[]={8,7,6,8,6,6,6,6};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<index(a,size);
	return 0;
}