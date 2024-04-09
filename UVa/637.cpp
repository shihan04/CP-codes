#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        cout<<"Printing order for "<<n<<" pages:\n";
        if(n==1){
            cout<<"Sheet 1, front: Blank, 1\n";
            continue;
        }
        int s=(n+4*(n%4!=0)-n%4)/4,b[s*2+1][2]={0};
        for(int i=1;i<=s*2;i++){
            if(i<=n) b[i][i%2]=i;
        }
        for(int i=s*2+1,j=s*2;i<=s*4;i++,j--){
            if(i<=n) b[j][i%2]=i;
        }
        for(int i=1;i<=s;i++){
            cout<<"Sheet "<<i<<", front: "<<((b[2*i-1][0]!=0)?(to_string(b[2*i-1][0])):"Blank")<<", "<<((b[2*i-1][1]!=0)?(to_string(b[2*i-1][1])):"Blank")<<"\n";
            cout<<"Sheet "<<i<<", back : "<<((b[2*i][0]!=0)?(to_string(b[2*i][0])):"Blank")<<", "<<((b[2*i][1]!=0)?(to_string(b[2*i][1])):"Blank")<<"\n";
        }
    }
}
