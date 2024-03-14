    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int k,n,m;
        cin>>k;
        if(k>36){
            cout<<"-1";
            return 0;
        }
        n=k%2;
        m=k/2;
        if(n) cout<<"4";
        for(int i=0;i<m;i++) cout<<"8";
    }
