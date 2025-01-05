#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        vector<int> v(26,0);
        for(auto c:s){
            v[c-'a']++;
        }

        int oddCount = 0;
        for(auto i:v){
            if(i%2!=0){
                oddCount++;
            }
        }

        if(oddCount<=k+1){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}