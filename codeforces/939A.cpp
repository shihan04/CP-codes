    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        bool b=0;
        cin>>n;
        int f[n+1];
        for(int i=1;i<=n;i++){
            cin>>f[i];
        }
        for(int i=1;i<=n;i++){
            if(i==f[f[f[i]]]){
                b=1;
                break;
            }
        }
        if(b) cout<<"Yes";
        else cout<<"NO";
    }
