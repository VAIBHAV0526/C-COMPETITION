#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
#define lli long long int
#define li long int
#define ld long double
#define MOD 1000000007
using namespace std;
 
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
 
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    lli n; cin >> n;
    vector<lli> arr(n);
    lli sm = 0;
    for (auto &x : arr) { cin >> x; sm += x; }
    lli res = INT_MAX;
    for (lli i = 1; i < (1<<n); ++i)
    {
        lli x = 0, y = 0, cur = i, pos = 0;
        while (cur)
        {
            if (cur&1) x += arr[pos];
            pos++; cur >>= 1;
        }
        y = sm-x;
        res = min(res, abs(y-x));
    }
    cout << res << '\n';
    return 0;
}
