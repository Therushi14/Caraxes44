#include<bits/stdc++.h>
using namespace std;

vector<string> ans;

void fun(int idx,int size,vector<int>&freq,string curr)
{
    if(idx==size) {
        ans.push_back(curr);
        return;
    }

    for(int i=0;i<26;i++){
        if(freq[i]>0){
            freq[i]--;
            fun(idx+1,size,freq,curr+char('a'+i));
            freq[i]++;
        }
    }
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    vector<int> f(26);
    for(auto &i:s){
        f[i-'a']++;
    }

    fun(0,s.size(),f,"");
    cout<<ans.size()<<endl;
    for(auto &i:ans) cout<<i<<endl;
    return 0;
}