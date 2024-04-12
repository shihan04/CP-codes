#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n>>s){
        if(n==0) break;
        string d[2*n+3];
        for(int i=0;i<2*n+3;i++) d[i]="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='8'){
                d[0]+=' ';
                for(int j=0;j<n;j++) d[0]+='-';
                d[0]+=' ';
                for(int j=1;j<=n;j++){
                    d[j]+='|';
                    for(int k=0;k<n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                d[n+1]+=' ';
                for(int j=0;j<n;j++) d[n+1]+='-';
                d[n+1]+=' ';
                for(int j=n+2,l=0;l<n;l++,j++){
                    d[j]+='|';
                    for(int k=0;k<n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                d[2*n+2]+=' ';
                for(int j=0;j<n;j++) d[2*n+2]+='-';
                d[2*n+2]+=' ';
            }
            else if(s[i]=='0'){
                d[0]+=' ';
                for(int j=0;j<n;j++) d[0]+='-';
                d[0]+=' ';
                for(int j=1;j<=n;j++){
                    d[j]+='|';
                    for(int k=0;k<n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                d[n+1]+=' ';
                for(int j=0;j<n;j++) d[n+1]+=' ';
                d[n+1]+=' ';
                for(int j=n+2,l=0;l<n;l++,j++){
                    d[j]+='|';
                    for(int k=0;k<n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                d[2*n+2]+=' ';
                for(int j=0;j<n;j++) d[2*n+2]+='-';
                d[2*n+2]+=' ';
            }
            else if(s[i]=='1'){
                for(int j=0;j<=n+1;j++) d[0]+=' ';
                for(int j=1;j<=n;j++){
                    for(int k=0;k<=n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                for(int j=0;j<=n+1;j++) d[n+1]+=' ';
                for(int j=n+2,l=0;l<n;l++,j++){
                    for(int k=0;k<=n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                for(int j=0;j<=n+1;j++) d[2*n+2]+=' ';
            }
            else if(s[i]=='7'){
                d[0]+=' ';
                for(int j=0;j<n;j++) d[0]+='-';
                d[0]+=' ';
                for(int j=1;j<=n;j++){
                    for(int k=0;k<=n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                for(int j=0;j<=n+1;j++) d[n+1]+=' ';
                for(int j=n+2,l=0;l<n;l++,j++){
                    for(int k=0;k<=n;k++) d[j]+=' ';
                    d[j]+='|';
                }
                for(int j=0;j<=n+1;j++) d[2*n+2]+=' ';
            }
        }
        for(int i=0;i<2*n+3;i++){
            cout<<d[i]<<"\n";
        }
        cout<<"\n";
    }
}
