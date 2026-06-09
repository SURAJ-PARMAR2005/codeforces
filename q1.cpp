#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--){ 
    int n,x,y,z;
    cin>>n>>x>>y>>z;

      if(n == x || n == y){
        cout<<1<<endl;
        continue;
    }

    int xc = 0;
    int yc = 0;
    int hour = 0;
    //without ai;
    while(xc + yc <n && xc<n && yc<n){
        xc += x;
        yc += y;
        hour++;
    }

    //with ai;
    xc = 0;
    yc = 0;
    int hr2 = 0;

    while(xc+yc <n && xc<n && yc < n){
        xc += x;
        if(z>0){
            z--;
        hr2++;
        }
        else{
            yc = yc + (10*y);
            hr2++;
        }
    }

    cout<<min(hr2,hour)<<endl;
    }
  
}