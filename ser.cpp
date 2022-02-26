#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
void local(){
	 #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("/Users/vaibhavsingh/Desktop/code/output.txt", "w", stdout);
 
#endif
}
int main(){
    ull x=4,y=4;
    //cin>>x>>y;
    if(!(x&1)){
        cout<<x*x+y+1;
    }
    else{
    cout<<y*y-x+1;
}}