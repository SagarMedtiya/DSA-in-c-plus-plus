#include<iostream>
#include<cmath>
using namespace std;
//we need to find the element, for that we'd search the index 
//if we did not find n then we'd return n
int deleteEle(int a[], int n, int x){
	int i=0;
	for(i=0;i<n;i++){
		if(a[i]==x){
			break;
		}
	}
	if(i == n){
		return n;
	}
	if(a[n-1]==x){     //big-oh(1)
		return n-1;
	}
	for(int j=i; j<n-1; j++){
		a[j] = a[j+1];
	}
	return n-1;

}

int main(){
	int a[]= {1,2,3,4,5}, n=5;
	int x = 3;
	n = deleteEle(a,n,x);
	for(int i=0; i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}