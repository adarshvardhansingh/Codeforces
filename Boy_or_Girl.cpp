#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =0;
    sort(s.begin(),s.end());
    int length = s.length();
    for(int i=0;i<length;i++){
        if(s[i]!=s[i-1]){
            count++;
        }
    }
    if(count&1){
        cout<<"IGNORE HIM!"<<endl;
    }else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}