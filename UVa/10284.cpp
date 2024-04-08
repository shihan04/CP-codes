#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        char c[8][8];
        int b[8][8]={1},ans=0;
        s+="/";
        for(int r=0,i=0;r<8;r++){
            for(int j=0;i<s.size()&&s[i]!='/';i++){
                if(s[i]>'0'&&s[i]<'9'){
                    for(int k=0;k<s[i]-'0';k++,j++){
                        c[r][j]='.';
                    }
                }
                else{
                    if(s[i]>='A'&&s[i]<='Z') c[r][j]='a'+s[i]-'A';
                    else c[r][j]=s[i];
                    j++;
                }
            }
            i++;
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(c[i][j]!='.') b[i][j]=0;
            }
        }
    }
}
