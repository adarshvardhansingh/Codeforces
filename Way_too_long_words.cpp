#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
        char st[1000];
        scanf("%s",st);
        int length = strlen(st);
        if (length <= 10){
            printf("%s\n",st);
        }
        else{
            printf("%c%d%c\n",st[0],length - 2,st[length - 1]);
        }
    }
    return 0;
}