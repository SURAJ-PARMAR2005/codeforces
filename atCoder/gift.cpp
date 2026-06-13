#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i = 1;i<=n;i++){
        vector<int> x;
        int nog;
        cin>>nog;
        while(nog--){
            int g;
            cin>>g;
            x.push_back(g-1);
        }
        v.push_back(x);
    }

    vector<vector<int>> ans(n);
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            ans[v[i][j]].push_back(i+1);
        }
    }

    for(int i = 0;i<ans.size();i++){
        cout<<ans[i].size()<<" ";
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}