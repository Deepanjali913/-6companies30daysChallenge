#include<bits/stdc++.h>
using namespace std;


    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        for(int i=x1 ; i<=x2 ; i++){
            for(int j=y1 ; j<=y2 ; j++){
                double p = (i-xCenter)*(i-xCenter)+(j-yCenter)*(j-yCenter);
                double  r = radius * radius;
                if(p<=r) return true;
            }
        }
        return false ;
    }
int main(){
    cout<<checkOverlap(1,0,0,1,-1,3,1);
}