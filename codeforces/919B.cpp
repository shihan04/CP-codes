#include<bits/stdc++.h>
using namespace std;
int main()
{
    int K;
    cin>>K;
    vector <int> v;
    for(int i=1;i<=9;i++){
        v.push_back(10*i+10-i);
    }
    for(int i=1;i<=9;i++){
        for(int j=0;j<=10-i;j++){
            v.push_back(100*i+10*j+10-i-j);
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=0;j<=10-i;j++){
            for(int k=0;k<=10-i-j;k++){
                v.push_back(1000*i+100*j+10*k+10-i-j-k);
            }
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=0;j<=10-i;j++){
            for(int k=0;k<=10-i-j;k++){
                for(int l=0;l<=10-i-j-k;l++){
                    v.push_back(10000*i+1000*j+100*k+10*l+10-i-j-k-l);
                }
            }
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=0;j<=10-i;j++){
            for(int k=0;k<=10-i-j;k++){
                for(int l=0;l<=10-i-j-k;l++){
                    for(int m=0;m<=10-i-j-k-l;m++){
                        v.push_back(100000*i+10000*j+1000*k+100*l+10*m+10-i-j-k-l-m);
                    }
                }
            }
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=0;j<=10-i;j++){
            for(int k=0;k<=10-i-j;k++){
                for(int l=0;l<=10-i-j-k;l++){
                    for(int m=0;m<=10-i-j-k-l;m++){
                        for(int n=0;n<=10-i-j-k-l-m;n++){
                            v.push_back(1000000*i+100000*j+10000*k+1000*l+100*m+10*n+10-i-j-k-l-m-n);
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<=9;i++){
        for(int j=0;j<=10-i;j++){
            for(int k=0;k<=10-i-j;k++){
                for(int l=0;l<=10-i-j-k;l++){
                    for(int m=0;m<=10-i-j-k-l;m++){
                        for(int n=0;n<=10-i-j-k-l-m;n++){
                            for(int o=0;o<=10-i-j-k-l-m-n;o++){
                                v.push_back(10000000*i+1000000*j+100000*k+10000*l+1000*m+100*n+10*o+10-i-j-k-l-m-n-o);
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<v[K-1];
}
