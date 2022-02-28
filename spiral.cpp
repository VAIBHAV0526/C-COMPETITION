A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

Your task is to find out the number in row y
y
 and column x
x
.

Input

The first input line contains an integer t
t
: the number of tests.

After this, there are t
t
 lines, each containing integers y
y
 and x
x
.

Output

For each test, print the number in row y
y
 and column x
x
.

Constraints
1≤t≤105
1
≤
t
≤
10
5

1≤y,x≤109
1
≤
y
,
x
≤
10
9

Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15

#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
#define lli long long int
#define li long int
#define ld long double
using namespace std;
void local(){
	 #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("/Users/vaibhavsingh/Desktop/code/output.txt", "w", stdout);
 
#endif
}
void solution(){
    
    int tc;
    li x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                li r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                li r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                li r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                li r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << endl;
            }
        }
    }
    
}
 
int main(){
    local();
    solution();
//   ull t;
//   cin>>t;
//   while(t--){
//     ull x, y;
//   cin>>x>>y;
//  // case when column is grater than row
//   if(y>x){
//     // if col is odd
//     if((y&1)){
// cout<<(y)*(y)-x+1<<endl;
//     }
//     else{
//         cout<<(y-1)*(y-1)+x<<endl;
//     }
 
//   }
//   else{
//     if(!(x&1)){
//      cout<<(x-1)*(x-1)-y<<endl;
//     }
//     else{
//        cout<<(x)*(x)-y+1<<endl;
//     }
//   }
//     }
 
}
