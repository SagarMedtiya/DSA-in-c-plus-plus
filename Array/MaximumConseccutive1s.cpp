#include<bits/stdc++.h>
using namespace std;

int consecutive(int a[], int n){
	int res = 0;
	for(int i=0; i<n;i++){
		int curr =0;
		for(int j=i;j<n;j++){
			if(a[j]==i){
				curr++;
			}
			else{
				break;
			}
		}
		res = max(curr,res);
	}
	return res;

}

int main(){
	int a[] = {1,0,1,1,1,0};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<consecutive(a, size);
	return 0;
}