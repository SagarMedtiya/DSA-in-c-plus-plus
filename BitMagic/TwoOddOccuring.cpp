#include<bits/stdc++.h>
using namespace std;

int twoOddOccuring(int a[], int n){
	int count = 0;
	int Xor = 0, res1=0, res2 = 0;
	for(int i =0;i<n;i++){
		Xor = Xor ^ a[i];
	}
	int sn = Xor & ~(Xor -1);
	for(int i=0; i<n;i++){
		if((a[i] & sn) !=0){
			res1 = res1 ^ a[i];
		}
		else{
			res2 = res2 ^ a[i];
		}
	}
	cout<<res1<<endl<<res2;
	return 0;
}

int main(){
	int a[] = {3,4,3,4,8,4,4,32,7,7};
	int n = sizeof(a)/sizeof(a[0]);
	twoOddOccuring(a,n);
	return 0;
}