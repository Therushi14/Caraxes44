#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    int z;
    vector<vector<int>> v(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>z;
            v[i][j]=z;
        }
    }

    vector<vector<int>> pre(n+1,vector<int>(m+1,0));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pre[i][j] = pre[i-1][j]+pre[i][j-1]+v[i][j]-pre[i-1][j-1];
        }
    }

    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans = pre[c][d]-pre[a-1][d]-pre[c][b-1]+pre[a-1][b-1];
        cout<<ans<<endl;
    }

    return 0;
}