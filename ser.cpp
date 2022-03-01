#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
#define lli long long int
#define li long int
#define ld long double
#define MOD 1000000007
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

signed main(){

string s;
cin>>s;
// we will next_permutation
sort(s.begin(), s.end());
vector<string> res;
do{
    res.push_back(s);
}
while(next_permutation(s.begin(), s.end()));
cout<<res.size()<<endl;
for(auto i: res){
    cout<<i<<endl;
}








 return 0;
}