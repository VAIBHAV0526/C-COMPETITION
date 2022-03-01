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
lli trailing_zero(lli n)
{

    if(n<0){
        return -1;
    }
         lli count=0;
        for( lli i=5; n/i>=1; i=i*5){
          count=count+n/i;
        }
    return count;
}
bool _canempty(int a, int b){

 if((a==2 && b==1)||(a==1&&b==2)){
   return true;
 }
 
 else if(a>2 && b>2){
  return _canempty(a-2,b-1);
 }


else{
    return false;

}

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
void canBeEmptied(int A, int B)
{
    // If maximum of A & B exceeds
    // the twice of minimum of A & B
    if (max(A, B) > 2 * min(A, B)) {
 
        // Not possible to
        // empty the piles
        cout << "No";
        return;
    }
 
    // If sum of both the coins is
    // divisible by 3, then print Yes
    if ((A + B) % 3 == 0)
        cout << "Yes"<<endl;
 
    // Otherwise, print "No"
    else
        cout << "No"<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        if ((2*a - b)%3 == 0 && (2*b - a)%3 == 0)
        {
            int x = (2*a - b)/3, y = (2*b - a)/3;
            if (x >= 0 && y >= 0 && x <= min(a, b) && y <= min(a, b)) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    return 0;
}

// int  main(){
//    // local();
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//   int  t;
//   cin>>t;
//     while(t--){
// int a,b;
// cin>>a>>b;
// canBeEmptied(a,b);

//   }
  // printf("%lld\n", fastpow2(n));
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




