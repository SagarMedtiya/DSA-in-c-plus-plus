#include<bits/stdc++.h>
using namespace std;
//we'll pass smallest value to res
//if we couldn't find the biggest value then res=i
int secondLargestElement(int a[],int size){
	int res = -1, largest =0;
	for(int i=1; i<size; i++){
		if(a[i]> a[largest]){
			res=largest;
			largest = i;
		}
		else if(a[i] != a[largest]){
			if(res == -1 || a[i] > a[res]){
				res = i;
			}
		}
	}
	return res;
}


int main(){
	int a[]= {69,45,100,52,43};
	int size = 5;
	cout<<secondLargestElement(a,size);
	return 0;
}