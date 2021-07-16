#include<bits/stdc++.h>
using namespace std;
//return the size and the array will get updated automatically
//if the capacity is full then we will return n if not then return the size of updated array 
int insert(int a[], int n, int cap, int x, int pos){
	if(n >= cap){
		return n;
	}
	int index = pos - 1;
	for(int i=n-1; i>= index; i--){
		a[i+1] = a[i];
	}
	a[index] = x;
	return (n+1);
}

int main(){
	int a[10], cap = 10, n, x, pos;
	cout<<"size";
	cin>>n;
	cout<<"enter";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"value and pos";
	cin>>x>>pos;
	n = insert(a, n, cap, x, pos);
	cout<<"After insertion";
	for(int i=0; i<n;i++){
		cout<<a[i];
	}
	return 0;
}
