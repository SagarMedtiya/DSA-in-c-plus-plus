#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int size){
	int low= 0, high = size-1;
	while(low < high){
		int temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}
	for(int i = 0; i<size;i++){
		cout<<a[i]<<endl;
	}
	
}

int main(){
	int a[]= {1,2,30,4,40};
	int size = 5;
	reverse(a,size);
	return 0;
}