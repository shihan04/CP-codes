#include<bits/stdc++.h>
using namespace std;

struct FBT {
    bool flag;
    int depth;
};

FBT node[1048576];
int ans,D;

void reset_FBT(){
    for(int i=1,j=1,k=1;i<=D;i++,j<<=2){
        for(int o=1;o<=j;o++,k++){
            node[k].flag=false;
            node[k].depth=i;
        }
    }
}

void drop_ball(int pos){
    if(node[pos].depth==D) ans=pos;
    else if(!node[pos].flag){
        node[pos].flag=!node[pos].flag;
        
    }
    else if(node[pos].flag){
        node[pos].flag=!node[pos].flag;
        
    }
}

int main()
{
    int l,I;
    cin>>l;
    while(l--){
        cin>>D>>I;
        reset_FBT();
        while(I--) drop_ball(1);
        cout<<ans<<"\n";
    }
    cin>>l;
    return 0;
}
