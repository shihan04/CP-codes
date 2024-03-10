#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double r;
    cin>>n>>r;
    double x[n],y[n];
    cin>>x[0];
    y[0]=r;
    for(int i=1;i<n;i++){
        cin>>x[i];
        double max_y=0,x1,c,ans=0,k;
        for(int j=0;j<i;j++){
            if(abs(x[i]-x[j])<=2*r){
                max_y=y[j];
                x1=x[j];
                c=max_y*max_y+(x[i]-x1)*(x[i]-x1)-4*r*r;
                k=(2*max_y+sqrt(4*max_y*max_y-4*c))/2.0;
                ans=max(ans,k);
            }
        }
        if(max_y==0){
            y[i]=r;
            continue;
        }
        y[i]=ans;
        //c=max_y*max_y+(x[i]-x1)*(x[i]-x1)-4*r*r;
        //y[i]=(2*max_y+sqrt(4*max_y*max_y-4*c))/2.0;
        //cout<<(2*max_y+sqrt(4*max_y*max_y-4*c))/2.0<<" "<<(2*max_y-sqrt(4*max_y*max_y-4*c))/2.0<<"\n";
    }
    for(int i=0;i<n;i++) cout<<fixed<<setprecision(7)<<y[i]<<" ";
}
