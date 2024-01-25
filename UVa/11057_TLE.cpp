#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>m;
        sort(a,a+n);
        map <int,pair<int,int>> mp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(mp.find(a[i]+a[j])!=mp.end() && mp[a[i]+a[j]].second-mp[a[i]+a[j]].first<=a[j]-a[i]) continue;
                mp[a[i]+a[j]]=make_pair(a[i],a[j]);
            }
        }
        cout<<"Peter should buy books whose prices are "<<mp[m].first<<" and "<<mp[m].second<<".\n\n";
    }
    return 0;
}
