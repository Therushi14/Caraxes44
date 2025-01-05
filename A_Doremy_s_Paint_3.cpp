#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<int,int> mp;
        for(auto i:a){
            mp[i]++;
        }

        if(mp.size()>2){
            cout<<"no"<<endl;
        } else {
            if(abs(mp.begin()->second - mp.rbegin()->second)<=1) {
                cout<<"yes"<<endl;
            } else {
                cout<<"no"<<endl;
            }
        }
    }
}