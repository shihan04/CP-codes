#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double r;
    cin>>n>>r;
    double x[n],y[n],c;
    cin>>x[0];
    y[0]=r;
    for(int i=1;i<n;i++){
        cin>>x[i];
        c=2*r*n-r;
        bool b=0;
        while(1){
            for(int j=0;j<i;j++){
                cout<<i<<"->"<<abs(2*r-sqrt((x[i]-x[j])*(x[i]-x[j])+(c-y[j])*(c-y[j])))<<"\n";
                if(2*r>=sqrt((x[i]-x[j])*(x[i]-x[j])+(c-y[j])*(c-y[j]))||abs(2*r-sqrt((x[i]-x[j])*(x[i]-x[j])+(c-y[j])*(c-y[j])))<0.000001){
                    b=1;
                    break;
                }
            }
            if(b || c<r){
                c+=r;
                break;
            }
            c-=r;
        }
        cout<<c<<"\n";
        if(c==r){
            y[i]=c;
            continue;
        }
        double hi=c,lo=c-2*r;
        int lim=1024;
        c=c-r;
        while(lim--){
            b=0;
            for(int j=0;j<i;j++){
                if(2*r-sqrt((x[i]-x[j])*(x[i]-x[j])+(c-y[j])*(c-y[j]))>0.000001){
                    b=1;
                    break;
                }
            }
            if(b){
                lo=c;
                c=lo+(hi-lo)/2;
            }
            else{
                hi=c;
                c=lo+(hi-lo)/2;
            }
        }
        y[i]=c;
    }
    for(int i=0;i<n;i++) cout<<y[i]<<" ";
}
