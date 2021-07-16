#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &n, int start, int end){
	if(start >= end){
		return true;
	}
	return (n[start]==n[end]) && palindrome(n, start+1, end-1);
}

int main(){
	string n;
	cin>>n;
	int len = n.length();
	cout<<palindrome(n,0,len-1);
	return 0;
}