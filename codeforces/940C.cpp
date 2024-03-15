#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cr=1,m=0,a[26]={0};
    char c;
    string s="",t="",p="";
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>c;
        s+=c;
        a[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]>0){
            p+=(char)('a'+i);
            m++;
        }
    }
    for(int i=1;i<=k;i++){
        if(i>n){
            t+=p[0];
            continue;
        }
        t+=s[i-1];
    }
    if(k>n){
        cout<<t;
        return 0;
    }
    for(int i=k-1;i>=0;i--){
        if(cr==0) break;
        if(t[i]==p[m-1]){
            t[i]=p[0];
        }
        else{
            int j=0;
            while(t[i]!=p[j]){
                j++;
            }
            t[i]=p[j+1];
            cr=0;
        }
    }
    cout<<t;
}
