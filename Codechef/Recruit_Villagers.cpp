/*
Solution of Problem Code: VILLINE
https://www.codechef.com/problems/VILLINE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int N, m, c, up = 0, down = 0;
    cin>>N;
    cin>>m>>c;
    while(N--){
        int x, y, p, tmp_y;
        cin>>x>>y>>p;

        // y = mx + c
        tmp_y = m * x + c;

        /* check tmp_y with original y.
        that is whether the y coordinate lies above or below the line.
        */
        if(tmp_y > y)
            up += p;
        else
            down += p;
    }
    cout<<max(up, down);
}