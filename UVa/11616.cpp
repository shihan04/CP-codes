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
int arabic(string s){
    int n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='M'){
            n+=1000;
        }
        else if(i<s.size()-1 && s[i]=='C' && s[i+1]=='M'){
            n+=900;
            i++;
        }
        else if(s[i]=='D'){
            n+=500;
        }
        else if(i<s.size()-1 && s[i]=='C' && s[i+1]=='D'){
            n+=400;
            i++;
        }
        else if(s[i]=='C'){
            n+=100;
        }
        else if(i<s.size()-1 && s[i]=='X' && s[i+1]=='C'){
            n+=90;
            i++;
        }
        else if(s[i]=='L'){
            n+=50;
        }
        else if(i<s.size()-1 && s[i]=='X' && s[i+1]=='L'){
            n+=40;
            i++;
        }
        else if(s[i]=='X'){
            n+=10;
        }
        else if(i<s.size()-1 && s[i]=='I' && s[i+1]=='X'){
            n+=9;
            i++;
        }
        else if(s[i]=='V'){
            n+=5;
        }
        else if(i<s.size()-1 && s[i]=='I' && s[i+1]=='V'){
            n+=4;
            i++;
        }
        else if(s[i]=='I'){
            n+=1;
        }
    }
    return n;
}
int main()
{
    string s,ans;
    while(cin>>s){
        if(s[0]>'0' && s[0]<='9') ans=roman(stoi(s));
        else ans=to_string(arabic(s));
        cout<<ans<<"\n";
    }
}
