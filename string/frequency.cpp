#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s="aquickfoxjumpsoaaaverthelazydog";
    int a[26];
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    char ans;
    int maxf=-1;

    for(int i=0;i<26;i++){
        if(maxf<a[i]){
            maxf=a[i];
            ans='a'+i;
        }
    }

    cout<<maxf<<endl;
    cout<<ans<<endl;
    return 0;
}