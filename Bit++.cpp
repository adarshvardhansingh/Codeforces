#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,x(0);
    cin>>a;
    string s;
    while(a--){
        cin>>s;
        if(s[1]=='+'){
            ++x;
        }
        else{
            --x;
        }
    }
    cout<<x<<endl;
    return 0;

}