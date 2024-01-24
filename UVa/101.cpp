#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,t;
    cin>>n;
    int pos[n];
    for(int i+0;i<n;i++){
        pos[i]=i;
    }
    stack <int> st[n],p,q;
    string s,c;
    while(1){
        cin>>s;
        if(s=="quit") break;
        else if(s=="move"){
            cin>>a>>c>>b;
            if(a==b || pos[a]==pos[b]) continue;
            if(c=="onto"){
                while(st[pos[a]].top()!=a){
                    p.push(st[pos[a]].top());
                    st[pos[a]].pop();
                }
                while(st[pos[b]].top()!=b){
                    q.push(st[pos[b]].top());
                    st[pos[b]].pop();
                }
                st[pos[b]].push(st[pos[a]].top());
                st[pos[a]].pop();
                while(!p.empty()){
                    st[pos[a]].push(p.top());
                    p.pop();
                }
                while(!q.empty()){
                    st[pos[b]].push(q.top());
                    q.pop();
                }
                pos[a]=pos[b];
            }
            if(c=="over"){
                while(st[pos[a]].top()!=a){
                    p.push(st[pos[a]].top());
                    st[pos[a]].pop();
                }
                st[pos[b]].push(st[pos[a]].top());
                st[pos[a]].pop();
                while(!p.empty()){
                    st[pos[a]].push(p.top());
                    p.pop();
                }
                pos[a]=pos[b];
            }
        }
        else if(s=="pile"){
            cin>>a>>c>>b;
            if(a==b || pos[a]==pos[b]) continue;
            if(c=="onto"){
                
            }
            if(c=="over"){
                
            }
        }
    }
}
