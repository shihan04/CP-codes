#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c=0,k;
    set <int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(c==0){
            c++;
            k=a;
        }
        else if(a==k){
            c++;
        }
        else if(a!=k){
            s.insert(c);
            c=1;
            k=a;
        }
        if(i==n-1){
            s.insert(c);
        }
    }
    if(s.size()==1) cout<<"YES";
    else cout<<"NO";
}
