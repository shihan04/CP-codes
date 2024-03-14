    #include<bits/stdc++.h>
    using namespace std;
     
    bool is_vowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y') return true;
        return false;
    }
     
    int main()
    {
        int n;
        string s,ans;
        cin>>n;
        cin>>s;
        ans=s[0];
        for(int i=1;i<n;i++){
            if(is_vowel(s[i-1])&&is_vowel(s[i])) continue;
            ans+=s[i];
        }
        cout<<ans;
    }
