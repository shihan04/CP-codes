#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Y,P,ans,l=1,r=1;
    while(cin>>Y){
        cin>>P;
        vector <int> v(P);
        for(int i=0;i<P;i++){
            cin>>v[i];
        }
        ans=0;
        auto it=v.begin();
        for(int i=0;i<P;i++,it++){
            auto lb=lower_bound(it,v.end(),v[i]+Y);
            if(lb-it>ans){
                ans=lb-it;
                l=v[i];
                r=v[i+ans-1];
            }
        }
        cout<<ans<<" "<<l<<" "<<r<<"\n";
    }
    return 0;
}
