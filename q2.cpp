#include<bits/stdc++.h>
using namespace std;


int main() {
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> h(n);
        for(int i = 0;i<n;i++){
            cin>>h[i];
        }
        
        int mx = INT8_MIN;
        int mn = INT8_MAX;
        for(int i = 0;i<n;i++){
            mx = max(mx,h[i]);
            mn = min(mn,h[i]); 
        }

        cout<<(mx-mn)+1<<endl;

    }
}