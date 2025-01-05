#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                int j = i;
                int cnt = 0;
                while(v[j]==0 and j<n){
                    cnt++; j++;
                }
                ans = max(ans,cnt);
                i = j;
            }
        }

        cout<<ans<<endl;
    }
}