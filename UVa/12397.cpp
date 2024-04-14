#include<bits/stdc++.h>
using namespace std;
string roman(int n){
    string s="";
    while(n!=0){
        if(n>=1000){
            s+="M";
            n-=1000;
        }
        else if(n<1000 && n>=900){
            s+="CM";
            n-=900;
        }
        else if(n<900 && n>=500){
            s+="D";
            n-=500;
        }
        else if(n<500 && n>=400){
            s+="CD";
            n-=400;
        }
        else if(n<400 && n>=100){
            s+="C";
            n-=100;
        }
        else if(n<100 && n>=90){
            s+="XC";
            n-=90;
        }
        else if(n<90 && n>=50){
            s+="L";
            n-=50;
        }
        else if(n<50 && n>=40){
            s+="XL";
            n-=40;
        }
        else if(n<40 && n>=10){
            s+="X";
            n-=10;
        }
        else if(n==9){
            s+="IX";
            n-=9;
        }
        else if(n<9 && n>=5){
            s+="V";
            n-=5;
        }
        else if(n==4){
            s+="IV";
            n-=4;
        }
        else if(n<4 && n>=1){
            s+="I";
            n--;
        }
    }
    return s;
}
int main()
{
    string s;
    int n;
    while(cin>>n){
        s=roman(n);
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='M') ans+=4;
            else if(s[i]=='D') ans+=3;
            else if(s[i]=='C'||s[i]=='L'||s[i]=='X'||s[i]=='V') ans+=2;
            else if(s[i]=='I') ans++;
        }
        cout<<ans<<"\n";
    }
}
