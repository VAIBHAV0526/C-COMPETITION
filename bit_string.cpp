#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
#define lli long long int
#define li long int
#define ld long double
#define MOD 1000000007
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

lli fastpow2(int x){
    lli res = 1;
    lli a = 2;
    while(x > 0){
        if(x&1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        x >>= 1;
    }
    return res;
}
int  main(){
   // local();
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin >> n;
   
  printf("%lld\n", fastpow2(n));
    // lli total = n * (n + 1) / 2;
    // if (total & 1)
    // {
    //     cout << "NO";
    // }
    // else
    // {
    //     cout << "YES" << endl;
    //     vector<lli> arr1, arr2;
    //     total /= 2LL;
    //     while (n)
    //     {
    //         if (total - n >= 0)
    //         {
    //             arr1.push_back(n);
    //             total -= n;
    //         }
    //         else
    //         {
    //             arr2.push_back(n);
    //         }
    //         n--;
    //     }
    //     cout << arr1.size() << endl;
    //     for (li ele : arr1)
    //         cout << ele << " ";
    //     cout << endl;
    //     cout << arr2.size() << endl;
    //     for (li ele : arr2)
    //         cout << ele << " ";
    // }



}
