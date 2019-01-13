#include<bits/stdc++.h> 
using namespace std;
#define ll long long


  
int main()
{
     
     int n=3333;
     vector<int> primes(n);

      int ncounter = 0;
      int isPrime = 2;
      while( ncounter < n){
        bool prime = true;
        for (int j=2; j<isPrime; j++){
          if (isPrime%j ==0){
            prime = false;
            break;
          }
        }
        if (prime){
          primes[ncounter] = isPrime;
          ncounter++;
        } 
        isPrime++;
       }

     int t;
     cin>>t;
     while(t--)
     {
       int q;
       cin>>q;

       for(int i=0;i<q-1;i++)
       {
         int sum=primes[i]*primes[i+1];
         cout<<sum<<" ";
       }
       cout<<primes[0]*primes[q-1];
     }

//cout<<primes[0]<<primes[1]<<primes[2];
    return 0;
}