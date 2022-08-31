#include <iostream>
using namespace std;
int main(){
    int a;
    int k;
    cin>>a;
    cin>>k;
    int n[1000],x;
    int count =0;
    for(int i=1;i<=a;i++){
        cin>>x;
        n[i]=x;
    }
    for(int j = 1;j<=a;j++){
        if (n[j]>=n[k] && n[j]>0 ){
            count ++;
        }
    }
    cout<<count;
    return 0;
}