#include<bits/stdc++.h>
using namespace std;

int maxprofits(int a[], int size){
	int profits =0;
	for(int i=0;i<size;i++){
		if(a[i] > a[i-1]){
			profits += a[i] - a[i-1];
		}
	}
	return profits;

}


int main(){
	int a[]= {1,5,3,8,12};
	int size= sizeof(a)/sizeof(a[0]);
	cout<<maxprofits(a,size);
	return 0;
}