#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,w,h;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>l>>w>>h;
        if(l<=20&&w<=20&&h<=20) cout<<"Case "<<tc<<": good\n";
        else cout<<"Case "<<tc<<": bad\n";
    }
}
