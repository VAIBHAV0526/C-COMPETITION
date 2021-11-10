// friend pair probleam 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// using recursion

 int main(){
     int n,k;
      cin>>n;
      if(n<=0){
          k=0;
      }
      else{
     k= pow(2,n-1);}
     cout<<" no of ways gpo to party"<< k;
 }
  
