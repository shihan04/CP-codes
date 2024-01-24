#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,a,p;
    while(cin>>k>>n){
        vector <vector<int>> v[k];
        vector <int> ans;
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                cin>>a;
                v[i].push_back(a);
            }
            sort(v[i].begin(),v[i].end());
            v[i].push_back(i+1);
        }
        sort(v.begin(),v.end());
        ans.push_back(v[0][n]);
        p=0;
        for(i=1;i<k;i++){
            bool c=0;
            for(int j=0;j<n;j++){
                if(v[p][j]>=v[i][j]){
                    c=1;
                    break;
                }
            }
            if(c) continue;
            ans.push_back(v[i][n]);
            p=i;
        }
        cout<ans.size()<<"\n":
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
