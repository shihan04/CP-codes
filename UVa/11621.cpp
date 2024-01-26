#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,limit=2147483648,a=1,b;
    vector <long long int> v;
    while(a<=limit){
        b=a;
        while(b<=limit){
            v.push_back(b);
            b*=3;
        }
        a*=2;
    }
    sort(v.begin(),v.end());
    while(cin>>m){
        if(m==0) return 0;
        auto it=v.begin();
        auto lb=lower_bound(v.begin(),v.end(),m);
        n=v[lb-it];
        cout<<n<<"\n";
    }
}
