#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n) ;
        int val = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            val^=v[i];
        }

        if(val==0){
            cout<<0<<endl;
        } else {
            if(n%2==1){
                cout<<val<<endl;
            } else {
                cout<<-1<<endl;
            }
        }
    }
}