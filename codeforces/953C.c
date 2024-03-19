#include<stdio.h>
int main()
{
    int i,n,a,c=0,p=0,m,b=0,k,s[100001]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(c==0){
            c++;
            k=a;
        }
        else if(a==k){
            c++;
        }
        else if(a!=k){
            s[p]=c;
            p++;
            c=1;
            k=a;
        }
        if(i==n-1){
            s[p]=c;
        }
    }
    m=s[0];
    for(i=0;i<=p;i++){
        if(m!=s[i]){
            b=1;
            break;
        }
    }
    if(b) printf("NO");
    else printf("YES");
}
