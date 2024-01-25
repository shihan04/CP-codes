#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,D,I,n,len;
    bool flag;
    cin>>l;
    while(l--){
        cin>>D>>I;
        vector <int> v;
        v.push_back(0);
        n=1<<(D-1);
        for(int i=0;i<D;i++,n/=2){
            len=v.size();
            for(int j=0;j<len;j++){
                v.push_back(v[j]+n);
            }
        }
        cout<<v[I]<<"\n";
    }
    cin>>l;
    return 0;
}
