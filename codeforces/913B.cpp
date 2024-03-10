#include<bits/stdc++.h>
using namespace std;

int n;
bool b=1;
vector <int> node[1001];

void dfs(int N){
    int l=0;
    for(int i=0;i<node[N].size();i++){
        if(!node[node[N][i]].size()) l++;
    }
    if(l<3){
        b=0;
        return;
    }
    for(int i=0;i<node[N].size();i++){
        if(node[node[N][i]].size()) dfs(node[N][i]);
    }
}

int main()
{
    int p,cp=2;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>p;
        node[p].push_back(cp);
        cp++;
    }
    dfs(1);
    if(b) cout<<"Yes";
    else cout<<"No";
}
