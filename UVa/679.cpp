#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,D,I,n,len,ans;
    scanf("%d",&l);
    while(l--){
        scanf("%d%d",&D,&I);
        n=(1<<D)-1;ans=1;
        while(ans*2<=n){
            if(I%2==1) ans+=ans;
            else ans+=ans+1;
            I=(I+1)/2;
        }
        printf("%d\n",ans);
    }
    scanf("%d",&l);
    return 0;
}
