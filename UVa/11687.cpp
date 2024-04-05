#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    string s,tmp;
    while(1){
        cin>>s;
        if(s=="END") break;
        n=s.size();
        if(s=="1"){
            cout<<"1\n";
            continue;
        }
        c=2;
        while(n!=1){
            tmp=to_string(n);
            n=tmp.size();
            c++;
        }
        cout<<c<<"\n";
    }
}
