#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int i,count=0;
    for(i=1;i<=w;i++){
        count = count + (i*k);
    }
    if(count<=n){
        cout<<0<<endl;
    }else{
        cout<<count - n<<endl;
    }
    return 0;
}