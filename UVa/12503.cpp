#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,p;
    string s,as;
    cin>>t;
    while(t--){
        cin>>n;
        x=0;
        int c[n];
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="LEFT"){
                x--;
                c[i]=-1;
            }
            else if(s=="RIGHT"){
                x++;
                c[i]=1;
            }
            else if(s=="SAME"){
                cin>>as>>p;
                if(c[p-1]==-1){
                    x--;
                    c[i]=-1;
                }
                else if(c[p-1]==1){
                    x++;
                    c[i]=1;
                }
            }
        }
        cout<<x<<"\n";
    }
}
