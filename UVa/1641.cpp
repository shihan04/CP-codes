#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;
    char c;
    double area;
    bool b;
    while(cin>>h>>w){
    b=0;area=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>c;
            if(b){
                if(c=='.') area++;
                else{
                    area+=0.5;
                    b=0;
                }
            }
            else{
                if(c!='.'){
                    area+=0.5;
                    b=1;
                }
            }
        }
    }
    cout<<area<<"\n";}
}
