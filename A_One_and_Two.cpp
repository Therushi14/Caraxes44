#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> &v,int total){
    int sum = 0;
        for(int i=0;i<v.size();i++){
            sum+= v[i]==2;
            if(sum == total-sum) {
                return i+1;
            }
        }

        return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        int total = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            total+=v[i]==2;
        }

        int i = fun(v,total);
        cout<<i<<endl;
        
    }
}