#include<bits/stdc++.h>
using namespace std;
//we are starting the array from the second position
void frequencies(int a[], int n){
	int freq =1, i=1;
	while(i<=n){
		while(i<n && a[i] == a[i-1]){
			freq++;
			i++;
		}
		cout<<a[i-1]<<" "<<freq<<endl;
		i++;
		freq=1;
	}
	if(n==1 || a[n-1] != a[n-2]){
		cout<<a[n-1]<<" "<<1;
	}
}

int main(){
	int a[]= {10,10,20};
	int size= sizeof(a)/sizeof(a[0]);
	frequencies(a,size);
	return 0;
}