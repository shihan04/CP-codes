#include<bits/stdc++.h>
using namespace std;
double d;
struct point{
    double x,y;
};
bool comp(point p1, point p2){
    double x0_1,x0_2;
    x0_1=p1.x+sqrt(d*d-p1.y*p1.y);
    x0_2=p2.x+sqrt(d*d-p2.y*p2.y);
    if(x0_1<x0_2) return true;
    else if(x0_1==x0_2 && p1.x<=p2.x) return true;
    return false;
}
int main()
{
    int t=1,n;
    while(cin>>n>>d){
        if(n==0) break;
        point p[n];
        bool b=0;
        for(int i=0;i<n;i++){
            cin>>p[i].x>>p[i].y;
            if(p[i].y>d) b=1;
        }
        if(b){
            cout<<"Case "<<t<<": -1\n";
            t++;
            continue;
        }
        int ans=0;
        sort(p,p+n,comp);
        for(int i=0;i<n;){
            ans++;
            double x=p[i].x+sqrt(d*d-p[i].y*p[i].y),d1;
            i++;
            d1=sqrt((x-p[i].x)*(x-p[i].x)+p[i].y*p[i].y);
            while(i<n&&d1<=d){
                i++;
                d1=sqrt((x-p[i].x)*(x-p[i].x)+p[i].y*p[i].y);
            }
        }
        cout<<"Case "<<t<<": "<<ans<<"\n";
        t++;
    }
}
