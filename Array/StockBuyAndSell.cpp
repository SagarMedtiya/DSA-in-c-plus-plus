#include<bits/stdc++.h>
using namespace std;
//start =0
int maxprofits(int price[],int start, int end){
	if(start>=end){
		return 0;
	}
	int profits =0;
	for(int i=start;i<end-1;i++){
		for(int j=i+1; j<end;j++){
			if(price[j]> price[i]){
				int curr_profit = price[j] - price[i] +
				                 maxprofits(price, start, i-1) +
				                 maxprofits(price, j+1,end);
				profits = max(profits,curr_profit);
			}
		}
	}
	return profits;

}

int main(){
	int a[]= {1,5,3,8,12};
	int size= sizeof(a)/sizeof(a[0]);
	cout<<maxprofits(a,0,size);
	return 0;
}