#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        bool b[1000001]={0},c=1;
        cin>>a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            b[abs(a[i]-a[i-1])]=1;
        }
        for(int i=1;i<n;i++){
            if(!b[i]){
                c=0;
                break;
            }
        }
        if(c) cout<<"Jolly\n";
        else cout<<"Not jolly\n";
    }
}
