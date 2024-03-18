#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    string s[r];
    bool b=0;
    for(int i=0;i<r;i++){
        cin>>s[i];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>0 && s[i][j]=='W' && s[i][j-1]=='S'){
                b=1;
                break;
            }
            if(i>0 && s[i][j]=='W' && s[i-1][j]=='S'){
                b=1;
                break;
            }
            if(j<c-1 && s[i][j]=='W' && s[i][j+1]=='S'){
                b=1;
                break;
            }
            if(i<r-1 && s[i][j]=='W' && s[i+1][j]=='S'){
                b=1;
                break;
            }
        }
    }
    if(b){
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>0 && s[i][j]=='.' && s[i][j-1]=='S'){
                cout<<'D';
            }
            else if(i>0 && s[i][j]=='.' && s[i-1][j]=='S'){
                cout<<'D';
            }
            else if(j<c-1 && s[i][j]=='.' && s[i][j+1]=='S'){
                cout<<'D';
            }
            else if(i<r-1 && s[i][j]=='.' && s[i+1][j]=='S'){
                cout<<'D';
            }
            else{
                cout<<s[i][j];
            }
        }
        cout<<'\n';
    }
}
