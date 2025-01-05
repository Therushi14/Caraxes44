#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        for(int i=0;i<2;i++){
            if(n-i*k>=0 and (n-i*k)%2==0){
                cout<<"YES"<<endl;
                break;
            } 
        }

        
                cout<<"NO"<<endl;
            
    }
}