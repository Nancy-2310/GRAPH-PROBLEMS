#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll pow(int base,int power) {
    ll ans = 1;
    for(int i = 0; i < power; i++) {
        ans *= base;
    } 
    return ans;
}

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t = 0;
    cin >> t;

    ll k = 0, upper = 0, lower = 0;
    while(t--){
        cin >> k;

        for (int i = 1; i <= 18; i++) {
            lower = pow(10, i-1);
            upper = pow(10, i) - 1;
            if(k <= (upper - lower + 1)) {
                k -= i;
                string str = to_string((lower + (k/i)));
                cout << str[str.size()-1-(k%i)] << endl;
            }
            else {
                k -= (upper - lower + 1);
            }
            // cout << i << " " << upper << " " << lower << endl;
        }
        
    }

    return 0;
}