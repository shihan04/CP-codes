#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,i,j,limit=2e9;
    cin>>l>>r;
    vector <long long int> v;
    for(i=1;i<=limit;i*=2){
        for(j=1;i*j<=limit;j*=3){
            v.push_back(i*j);
        }
    }
    sort(v.begin(),v.end());
    auto it1=lower_bound(v.begin(),v.end(),l);
    auto it2=upper_bound(v.begin(),v.end(),r);
    cout<<it2-it1;
}
