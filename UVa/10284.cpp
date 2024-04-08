#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        char c[8][8];
        int b[8][8],ans=0;
        s+="/";
        for(int r=0,i=0;r<8;r++){
            for(int j=0;i<s.size()&&s[i]!='/';i++){
                if(s[i]>'0'&&s[i]<'9'){
                    for(int k=0;k<s[i]-'0';k++,j++){
                        c[r][j]='.';
                    }
                }
                else{
                    if(s[i]>='A'&&s[i]<='Z'&&s[i]!='P') c[r][j]='a'+s[i]-'A';
                    else c[r][j]=s[i];
                    j++;
                }
            }
            i++;
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                //cout<<c[i][j];
                b[i][j]=1;
                if(c[i][j]!='.') b[i][j]=0;
            }
            //cout<<"\n";
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(c[i][j]=='P'){
                    if(i!=0){
                        if(j!=0) b[i-1][j-1]=0;
                        if(j!=7) b[i-1][j+1]=0;
                    }
                }
                else if(c[i][j]=='p'){
                    if(i!=7){
                        if(j!=0) b[i+1][j-1]=0;
                        if(j!=7) b[i+1][j+1]=0;
                    }
                }
                else if(c[i][j]=='n'){
                    if(i>1&&j>0) b[i-2][j-1]=0;
                    if(i>1&&j<7) b[i-2][j+1]=0;
                    if(i<6&&j>0) b[i+2][j-1]=0;
                    if(i<6&&j<7) b[i+2][j+1]=0;
                    
                    if(j>1&&i>0) b[i-1][j-2]=0;
                    if(j>1&&i<7) b[i+1][j-2]=0;
                    if(j<6&&i>0) b[i-1][j+2]=0;
                    if(j<6&&i<7) b[i+1][j+2]=0;
                }
                else if(c[i][j]=='k'){
                    if(i>0) b[i-1][j]=0;
                    if(i<7) b[i+1][j]=0;
                    if(j>0) b[i][j-1]=0;
                    if(j<7) b[i][j+1]=0;
                    
                    if(i>0&&j>0) b[i-1][j-1]=0;
                    if(i>0&&j<7) b[i-1][j+1]=0;
                    if(i<7&&j>0) b[i+1][j-1]=0;
                    if(i<7&&j<7) b[i+1][j+1]=0;
                }
                else if(c[i][j]=='r'){
                    for(int k=i-1;k>=0&&c[k][j]=='.';k--) b[k][j]=0;
                    for(int k=i+1;k<=7&&c[k][j]=='.';k++) b[k][j]=0;
                    for(int k=j-1;k>=0&&c[i][k]=='.';k--) b[i][k]=0;
                    for(int k=j+1;k<=7&&c[i][k]=='.';k++) b[i][k]=0;
                }
                else if(c[i][j]=='b'){
                    for(int k=i-1,l=j-1;k>=0&&l>=0&&c[k][l]=='.';k--,l--) b[k][l]=0;
                    for(int k=i-1,l=j+1;k>=0&&l<=7&&c[k][l]=='.';k--,l++) b[k][l]=0;
                    for(int k=i+1,l=j-1;k<=7&&l>=0&&c[k][l]=='.';k++,l--) b[k][l]=0;
                    for(int k=i+1,l=j+1;k<=7&&l<=7&&c[k][l]=='.';k++,l++) b[k][l]=0;
                }
                else if(c[i][j]=='q'){
                    for(int k=i-1;k>=0&&c[k][j]=='.';k--) b[k][j]=0;
                    for(int k=i+1;k<=7&&c[k][j]=='.';k++) b[k][j]=0;
                    for(int k=j-1;k>=0&&c[i][k]=='.';k--) b[i][k]=0;
                    for(int k=j+1;k<=7&&c[i][k]=='.';k++) b[i][k]=0;
                    for(int k=i-1,l=j-1;k>=0&&l>=0&&c[k][l]=='.';k--,l--) b[k][l]=0;
                    for(int k=i-1,l=j+1;k>=0&&l<=7&&c[k][l]=='.';k--,l++) b[k][l]=0;
                    for(int k=i+1,l=j-1;k<=7&&l>=0&&c[k][l]=='.';k++,l--) b[k][l]=0;
                    for(int k=i+1,l=j+1;k<=7&&l<=7&&c[k][l]=='.';k++,l++) b[k][l]=0;
                }
            }
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                ans+=b[i][j];
                //if(!b[i][j]&&c[i][j]=='.') cout<<'#';
                //else cout<<c[i][j];
            }
            //cout<<"\n";
        }
        cout<<ans<<"\n";
    }
}
