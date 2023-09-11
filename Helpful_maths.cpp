#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[1000];
    string s1;
    cin>>s1;
    int count = 0;
    for(int i = 0 ;i<s1.size();i++){
        if(s1[i]=='+'){
            continue;
        }else{
            arr[count++]=s1[i]-'0';
        }
    }
    sort(arr,arr+count);
    for(int i=0;i<count;i++){
        cout<<arr[i];
        if(i==count-1){
            break;
        }
        cout<<"+";
    }

    return 0;
}