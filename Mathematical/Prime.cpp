#include<bits/stdc++.h>
using namespace std;

bool prime(int a){
	if(a==1){
		return 0;
	}
	else{
		for(int i=2;i<a;i++){
			if(a%i == 0 ){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int a;
	cin>>a;
	bool b =prime(a);
	cout<<b;
	return 0;
}