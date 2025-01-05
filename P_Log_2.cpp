#include<bits/stdc++.h>
using namespace std;
long long fun(long long a,long long n){
    if(a>n-1) return 1+ fun(a/n,n);
    return 0;
}
int main(){
    long long n;
    cin>>n;
    cout<<fun(n,2);
}