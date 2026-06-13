#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string res = "";
    for(int i = 0;i<s.length();i++){
        char ch  = s[i];
        if(isalpha(ch)){
            continue;
        }
        int x = (int)ch - '0';
        if(x>=0 && x<=9){
        res.push_back(ch);
    }
    }
    cout<<res;
}