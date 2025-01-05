#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        while(n--){
            int x;
            cin>>x;
            cout<<n-x+1<<" ";
        }
        cout<<endl;
    }
}