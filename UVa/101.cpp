#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,t,tmp;
    cin>>n;
    int pos[n];
    stack <int> st[n],p,q;
    for(int i=0;i<n;i++){
        pos[i]=i;
        st[i].push(i);
    }
    string s,c;
    while(1){
        cin>>s;
        if(s=="quit") break;
        else if(s=="move"){
            cin>>a>>c>>b;
            if(a==b || pos[a]==pos[b] || a>n || b>n) continue;
            if(c=="onto"){
                while(st[pos[a]].top()!=a){
                    //p.push(st[pos[a]].top());
                    tmp=st[pos[a]].top();
                    st[tmp].push(tmp);
                    st[pos[a]].pop();
                    pos[tmp]=tmp;
                }
                while(st[pos[b]].top()!=b){
                    //q.push(st[pos[b]].top());
                    tmp=st[pos[b]].top();
                    st[tmp].push(tmp);
                    st[pos[b]].pop();
                    pos[tmp]=tmp;
                }
                st[pos[b]].push(st[pos[a]].top());
                st[pos[a]].pop();
                /*while(!p.empty()){
                    st[pos[a]].push(p.top());
                    p.pop();
                }
                while(!q.empty()){
                    st[pos[b]].push(q.top());
                    q.pop();
                }*/
                pos[a]=pos[b];
            }
            if(c=="over"){
                while(st[pos[a]].top()!=a){
                    //p.push(st[pos[a]].top());
                    tmp=st[pos[a]].top();
                    st[tmp].push(tmp);
                    st[pos[a]].pop();
                    pos[tmp]=tmp;
                }
                st[pos[b]].push(st[pos[a]].top());
                st[pos[a]].pop();
                /*while(!p.empty()){
                    st[pos[a]].push(p.top());
                    p.pop();
                }*/
                pos[a]=pos[b];
            }
        }
        else if(s=="pile"){
            cin>>a>>c>>b;
            if(a==b || pos[a]==pos[b]) continue;
            if(c=="onto"){
                while(st[pos[a]].top()!=a){
                    p.push(st[pos[a]].top());
                    st[pos[a]].pop();
                }
                while(st[pos[b]].top()!=b){
                    //q.push(st[pos[b]].top());
                    st[st[pos[b]].top()].push(st[pos[b]].top());
                    tmp=st[pos[b]].top();
                    st[pos[b]].pop();
                    pos[tmp]=tmp;
                }
                st[pos[b]].push(st[pos[a]].top());
                st[pos[a]].pop();
                while(!p.empty()){
                    st[pos[b]].push(p.top());
                    pos[p.top()]=pos[b];
                    p.pop();
                }
                /*while(!q.empty()){
                    st[pos[b]].push(q.top());
                    q.pop();
                }*/
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
                    st[pos[b]].push(p.top());
                    pos[p.top()]=pos[b];
                    p.pop();
                }
                pos[a]=pos[b];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<":";
        while(!st[i].empty()){
            p.push(st[i].top());
            st[i].pop();
        }
        while(!p.empty()){
            cout<<" "<<p.top();
            p.pop();
        }
        cout<<"\n";
    }
    return 0;
}
