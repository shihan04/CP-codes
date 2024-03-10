#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=0,s1,s2,e1,e2;
    cin>>n>>m;
    char a[n][m+1];
    string s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='S'){
                s1=i;
                s2=j;
            }
            else if(a[i][j]=='E'){
                e1=i;
                e2=j;
            }
        }
    }
    cin>>s;
    int con[4]={0,1,2,3};
    do{
        //cout<<con[0]<<" "<<con[1]<<" "<<con[2]<<" "<<con[3]<<"\n";
        bool b=0;
        int x=s1,y=s2;
        for(int i=0;i<s.size();i++){
            if(con[s[i]-'0']==0) x--;
            if(con[s[i]-'0']==1) x++;
            if(con[s[i]-'0']==2) y--;
            if(con[s[i]-'0']==3) y++;
            if(x<0||y<0||x>=n||y>=m||a[x][y]=='#') break;
            if(a[x][y]=='E'){
                b=1;
                break;
            }
        }
        if(b) ans++;
    }while(next_permutation(con,con+4));
    cout<<ans;
}
