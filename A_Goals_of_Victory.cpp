#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n ;
        vector<int> v(n);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }

        int sum = accumulate(v.begin(),v.end(),0);
        cout<<(-1*sum)<<endl;
    }
}