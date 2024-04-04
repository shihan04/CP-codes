#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,h,o;
    while(cin>>p>>h>>o){
        if(o-p>=h) cout<<"Props win!\n";
        else cout<<"Hunters win!\n";
    }
}
