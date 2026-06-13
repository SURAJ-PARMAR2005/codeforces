#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt=1,n=3,k=2; string s="111";
    vector<int> cnt(k);
    for(int i=0;i<n;i++) cnt[i%k]+=s[i]=='1';
    for(int x:cnt) cout<<x<<" ";
}
