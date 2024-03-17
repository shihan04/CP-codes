#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector <int> z,o;
    vector <vector<int>> ans;
    int pz=0,po=0;
    for(int i=1;i<=s.size();i++){
        if(s[i]=='0') z.push_back(i);
        else o.push_back(i);
    }
    while(pz<z.size()){
        vector <int> v;
        v.push_back(z[pz]);
        pz++;
        while()
    }
}
