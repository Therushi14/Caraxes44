#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;

    cout << 2 << nline;
    cout << a - 1 << " " << 1 << nline;
    cout << a << " " << b << nline;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}