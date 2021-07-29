#include<bits/stdc++.h>
using namespace std;

int kadane(int a[], int n){
	int res = a[0], maxending = a[0];
	for(int i=1;i<n;i++){
		maxending =max(a[i], maxending + a[i]);
		res = max (res, maxending);
	}
	return res;
}
int maxcircular(int a[], int n){
	int largestUsingKadane = kadane(a,n);
	cout<<largestUsingKadane<<endl;
	if(largestUsingKadane <0){
		return largestUsingKadane; //if all the element are in negative then it shouldn't show 0
	}
	int a_sum =0;
	for(int i=0; i<n;i++){
		a_sum +=a[i];
		a[i] = -a[i];
	}
	int res = a_sum + kadane(a,n); 

	return max(largestUsingKadane, res);
}

int main(){
	int a[]= {-8,-4,3,-5,-4};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<maxcircular(a,size);
	return 0;
}