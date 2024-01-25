#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r;
    while(cin>>n){
        vector <int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        cin>>m;
        sort(v.begin(),v.end());
        l=0;r=1e9;
        auto it=v.begin();
        for(int i=0;i<n-1;i++,it++){
            if(m%2==0 && v[i]==m/2 && v[i+i]==v[i]){
                l=r=m/2;
                break;
            }
            bool bs=binary_search(v.begin(),v.end(),m-v[i]);
            if(!bs) continue;
            if(abs(m-2*v[i])>=r-l) continue;
            l=min(v[i],m-v[i]);
            r=m-l;
        }
        cout<<"Peter should buy books whose prices are "<<l<<" and "<<r<<".\n\n";
    }
    return 0;
}
