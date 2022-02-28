/*our task is to count for k=1,2,…,n
k
=
1
,
2
,
…
,
n
 the number of ways two knights can be placed on a k×k
k
×
k
 chessboard so that they do not attack each other.

Input

The only input line contains an integer n
n
.

Output

Print n
n
 integers: the results.

Constraints
1≤n≤10000
1
≤
n
≤
10000

Example

Input:
8

Output:
0
6
28
96
252
550
1056
1848 */
#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
#define lli long long int
#define li long int
#define ld long double
 
 
using namespace std;
// void local(){
//      #ifndef ONLINE_JUDGE
 
//     // For getting input from input.txt file
//     freopen("input.txt", "r", stdin);
 
//     // Printing the Output to output.txt file
//     freopen("/Users/vaibhavsingh/Desktop/code/output.txt", "w", stdout);
 
// #endif
// }
ull solve(ull n){
    // two knight not attaak
// total numer of ways knight place;
  ull total_ways_place_knights= ((n*n)*((n*n)-1))/2;
  ull number_of_attac_wys=4*(n-1)*(n-2);
return total_ways_place_knights-number_of_attac_wys;
}
 
int  main(){
   // local();
ull n;
cin>>n;
for(ull i=1; i<=n; i++){
    cout<<solve(i)<<endl;
   
}
 return 0;
}
