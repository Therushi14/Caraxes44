#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int temp = (abs(v[i])-0);
        ans = min(ans,temp);
    }

    cout<<ans<<endl;
}