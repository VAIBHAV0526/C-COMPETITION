#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
    // probleam  given spell the given number using recursion
    
     char words[][10]={"zero" , " one","two"," three", "four"," five","six","seven","eight","nine"};
     
void spelling(int n){
     if(n==0){
         return ;
     }
     spelling(n/10);
     cout<<words[n%10]<<" ";
     
}
 int main()
{
    int n;
    cin >>n;
    spelling(n);
}
 


