#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans,num,tnum;
    long long int min,count;
    while(cin>>n){
        int s[65537]={0};
        for(int i=0;i<n;i++){
            cin>>x;
            s[x]++;
        }
        num=1;tnum=0;min=9e18;
        if(n==1){
            cout<<x<<" 1 1\n";
            continue;
        }
        for(int i=0;i<65537;i++){
            count=0;
            if(s[i]==0) continue;
            for(int j=0;j<65537;j++){
                if(s[j]!=0){
                    count+=abs(i-j)*s[j];
                }
            }
            if(count<min){
                min=count;
                ans=i;
                num=s[i];
            }
            else if(count==min){
                num+=s[i];
            }
        }
        for(int i=0;i<65537;i++){
            count=0;
            for(int j=0;j<65537;j++){
                count+=abs(i-j)*s[j];
            }
            if(count==min){
                tnum++;
            }
        }
        cout<<ans<<" "<<num<<" "<<tnum<<"\n";
    }
    return 0;
}
