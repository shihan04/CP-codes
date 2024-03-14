    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int K,i;
        long long int N,a,m=1e18,n=0;
        cin>>N>>K;
        for(int k=1;k<=K;k++){
            cin>>a;
            if(N%a<m){
                m=N%a;
                i=k;
                n=N/a;
            }
        }
        cout<<i<<" "<<n;
    }
