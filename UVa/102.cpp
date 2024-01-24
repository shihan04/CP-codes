#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[3],c[3],g[3];
    pair <int,string> p[6];
    while(cin>>b[0]>>g[0]>>c[0]>>b[1]>>g[1]>>c[1]>>b[2]>>g[2]>>c[2]){
        p[0].second="BCG";
        p[0].first=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];
        p[1].second="BGC";
        p[1].first=b[1]+b[2]+c[0]+c[1]+g[0]+g[2];
        p[2].second="CBG";
        p[2].first=b[0]+b[2]+c[1]+c[2]+g[0]+g[1];
        p[3].second="CGB";
        p[3].first=b[0]+b[1]+c[1]+c[2]+g[0]+g[2];
        p[4].second="GBC";
        p[4].first=b[0]+b[2]+c[0]+c[1]+g[1]+g[2];
        p[5].second="GCB";
        p[5].first=b[0]+b[1]+c[0]+c[2]+g[1]+g[2];
        sort(p,p+6);
        cout<<p[0].second<<" "<<p[0].first<<"\n";
    }
    return 0;
}
