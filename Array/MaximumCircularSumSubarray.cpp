//circular subarray and normal subarray
#include<bits/stdc++.h>
using namespace std;

int circular(int a[], int n){
	int res = a[0];
	for(int i=0;i<n;i++){
		int curr_max = a[i];
		int curr_sum = a[i];
		for(int j=1;j<n;j++){
			int index = (i+j) % n;
			curr_sum +=a[index];
			curr_max = max(curr_max, curr_sum);
		}
		res = max(res, curr_max);
	}
	return res;

}


int main(){
	int a[]= {2,3,6,7,8};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<circular(a,size);
	return 0;
}