#include<bits/stdc++.h>
using namespace std;
string roman(int n){
    string s="";
    while(n!=0){
        if(n==100){
            s+="c";
            n=0;
        }
        else if(n<100 && n>=90){
            s+="xc";
            n-=90;
        }
        else if(n<90 && n>=50){
            s+="l";
            n-=50;
        }
        else if(n<50 && n>=40){
            s+="xl";
            n-=40;
        }
        else if(n<40 && n>=10){
            s+="x";
            n-=10;
        }
        else if(n==9){
            s+="ix";
            n-=9;
        }
        else if(n<9 && n>=5){
            s+="v";
            n-=5;
        }
        else if(n==4){
            s+="iv";
            n-=4;
        }
        else if(n<4 && n>=1){
            s+="i";
            n--;
        }
    }
    return s;
}
int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        int i=0,v=0,x=0,l=0,c=0;
        for(int a=1;a<=n;a++){
            string r=roman(a);
            for(int b=0;b<r.size();b++){
                if(r[b]=='i') i++;
                else if(r[b]=='v') v++;
                else if(r[b]=='x') x++;
                else if(r[b]=='l') l++;
                else if(r[b]=='c') c++;
            }
        }
        cout<<n<<": "<<i<<" i, "<<v<<" v, "<<x<<" x, "<<l<<" l, "<<c<<" c\n";
    }
}
