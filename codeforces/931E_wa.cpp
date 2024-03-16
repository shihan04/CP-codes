#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size(),a[l];
    double m,ans=0;
    for(int i=0;i<l;i++){
        a[i]=s[i]-'a';
    }
    for(int k=0;k<l;k++){
        m=0;
        for(int i=0;i<26;i++){
            //bool b=0;
            for(int p=0;p<l;p++){
                if(a[p]!=i) continue;
                bool c=1;
                for(int j=0;j<l;j++){
                    if(a[j]!=i || j==p) continue;
                    else if(a[(j+k)%l]==a[(p+k)%l]){
                        //cout<<j<<" "<<p<<"\n";
                        c=0;
                        break;
                    }
                }
                if(c){
                    //cout<<i<<" "<<p<<" "<<k<<"\n";
                    //b=1;
                    m+=1.0;
                    //break;
                }
            }
            /*if(b){
                m+=1.0;
            }*/
        }
        ans=max(ans,m/(l*1.0));
    }
    //ans=m/(l*1.0);
    cout<<fixed<<setprecision(15)<<ans;
}
