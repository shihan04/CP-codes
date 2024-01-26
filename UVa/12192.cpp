#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,max,q,l,r;
    while(cin>>n>>m){
        if(n==0 && m==0) break;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector <vector<int>> v;
        for(int k=0;k<n;k++){
            vector <int> d;
            for(int i=k,j=0;i<n&&j<m;i++,j++){
                d.push_back(a[i][j]);
            }
            v.push_back(d);
        }
        for(int k=1;k<m;k++){
            vector <int> d;
            for(int j=k,i=0;i<n&&j<m;i++,j++){
                d.push_back(a[i][j]);
            }
            v.push_back(d);
        }
        cin>>q;
        while(q--){
            cin>>l>>r;
        }
        cout<<"-\n";
    }
    return 0;
}
