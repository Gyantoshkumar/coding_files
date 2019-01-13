#include<iostream>
using namespace std;

//Complexity O(LogN)
int countBits(int n){

	int ans = 0;
	while(n>0){
		ans += (n&1);
		n = n>>1;
	}
	return ans;
}
// Hack N & (N-1)
//===> No of set bits
int countBits2(int n){

	int ans = 0;
	while(n>0){
		n = n&(n-1);
		ans++;
	}
	return ans;
}




int main(){

	
    int c;
    cin>>c;
    cout<<__builtin_popcount(15)<<"\n";
    cout<<countBits2(c)<<"\n";
	return 0;
}