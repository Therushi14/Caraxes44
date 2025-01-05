#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int diff = INT_MAX;
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>v[i];

            if(i>0){
                diff = min(v[i]-v[i-1],diff);
                flag&=v[i]>=v[i-1];
            }
        }

        if(!flag){
            cout<<0<<endl;
            continue;
        } 
            cout<<diff/2+1<<endl;
        
    }
}