#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,byte,data_set=1;
    while(cin>>size){
        if(size==0) break;
        int total=0,time=0,last=0;
        cout<<"Output for data set "<<data_set<<", "<<size<<" bytes:\n";
        while(cin>>byte){
            time++;
            last+=byte;
            total+=byte;
            if(time%5==0){
                if(last==0) cout<<"   Time remaining: stalled\n";
                else cout<<"   Time remaining: "<<(int)ceil((size-total)*5.0/(last*1.0))<<" seconds\n";
                last=0;
            }
            if(total==size) break;
        }
        cout<<"Total time: "<<time<<" seconds\n\n";
        data_set++;
    }
}
