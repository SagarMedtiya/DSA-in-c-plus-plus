#include<bits/stdc++.h>
using namespace std;
//print the position of the largest element 
int largestElement(int a[], int size){
	for(int i=0; i<size;i++){
		bool flag = true;
		for(int j =0; j<size;j++){
			if(a[j] > a[i]){
				flag = false;
				break;
			}
		}
		if(flag == true){
			return i+1;
		}

	}
	return -1;
}

int main(){
	int a[]= {12,45,69,52,43};
	int size = 5;
	cout<<largestElement(a,size);
	return 0;
}