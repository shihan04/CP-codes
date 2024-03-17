#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool b=1;
    cin>>s;
    for(int i=0,j=26;i<s.size()&&j>0;i++){
        if(s.size()-i<j){
            b=0;
            break;
        }
        if((int)s[i]<=(int)'a'+26-j){
            s[i]=(char)('a'+26-j);
            j--;
        }
    }
    if(b) cout<<s;
    else cout<<-1;
}
