#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int i = 0,j = n-1,ans = n;
        while(s[i]!=s[j] and ans>0){
            i++;
            j--;
            ans-=2;
        }

        cout<<ans<<endl;
    }
}