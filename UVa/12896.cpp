#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s[10]={" ",".,?\"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],p[n];
        string ans="";
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>p[i];
            ans+=s[a[i]][p[i]-1];
        }
        cout<<ans<<"\n";
    }
}
