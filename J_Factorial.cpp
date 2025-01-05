#include<bits/stdc++.h>
using namespace std;
long long fun(long long n){
    if(n==1) return 1;
    return fun(n-1)*n;
}
int main(){
    long long n;
    cin>>n;
    cout<<fun(n)<<endl;
}

