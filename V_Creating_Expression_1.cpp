#include<bits/stdc++.h>
using namespace std;
bool fun(int idx,int value , vector<int>&v, int n, int x){
    if(idx==n){
        return value==x;
    }

    bool ans1 = fun(idx+1,value+v[idx],v,n,x);
    bool ans2 = fun(idx+1,value-v[idx],v,n,x);

    return ans1||ans2;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    if(fun(1,v[0],v,n,x)){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}