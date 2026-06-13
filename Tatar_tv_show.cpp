#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool flag = true;
        for (int r = 0; r < k; r++)
        {
            int cnt = 0;
            for (int i = r; i < n; i += k)
            {
                if (s[i] == '1')
                    cnt++;
            }
            if (cnt % 2)
            {
                flag = false;
                    break;
            }
        }
    if(flag){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    }
}