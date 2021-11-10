#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
// lader probleam
 int f( int n, int k){
     if(n==0)
     {
         return 1;
     }
     if(n<0){
         return 0;
         
     }
  int ans=0;
 ans= f(n-1,k)+f(n-2,k)+f(n-3,k);
  
return ans;

}
 int main(){
     cout<<f(5,3)<<"  ";
 
     
 }
