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
        n=1<<(D-1);
        v.push_back(n);
        n/=2;
        for(int i=1;i<D;i++,n/=2){
            len=v.size();
            for(int j=0;j<len;j++){
                v.push_back(v[j]+n);
            }
        }
        cout<<v[I-1]<<"\n";
    }
    cin>>l;
    return 0;
}
