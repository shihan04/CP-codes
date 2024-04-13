#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        if(s=="0:00") break;
        double h,m,d;
        if(s.size()==4){
            h=s[0]-'0';
            m=10.0*(s[2]-'0')+s[3]-'0';
        }
        else{
            h=10.0*(s[0]-'0')+s[1]-'0';
            m=10.0*(s[3]-'0')+s[4]-'0';
        }
        d=abs(h*30+30*m/60-m*6);
        cout<<fixed<<setprecision(3)<<min(d,360-d)<<"\n";
    }
}
