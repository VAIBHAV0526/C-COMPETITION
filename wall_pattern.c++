#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
 // given wall of size 1*n find the number of ways to draw the pattern on it     // bricks of 1*4 and 4
// bricks of 1*4 and 4*1

// explaintion n=1 the 1*4 brick  1 way n=2 1*4 +1*4  1 ways 
 int wall( int n){
     if(n==0 || n==1|| n==2|| n==3){
         return 1;
     }
     if(n>3){
         return wall(n-1) +wall(n-4);
     }
 }

int main(){
  cout<<wall(35);
}
