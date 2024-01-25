#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,D,I,n,len;
    //cin>>l;
    scanf("%d",&l);
    while(l--){
        //cin>>D>>I;
        scanf("%d%d",&D,&I);
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
        n=v[I-1];
        //cout<<v[I-1]<<"\n";
        printf("%d\n",n);
    }
    //cin>>l;
    scanf("%d",&l);
    return 0;
}
