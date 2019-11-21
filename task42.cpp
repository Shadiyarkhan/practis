#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    if(a<6&&a>1){
        a=0;
        cout<<a;
        return 0;
    }
    if(a>7&&a<40){
        a-=100;
        cout<<a;
        return 0;
    }
    if(a<0||a>3000){
        cout<<3*a;
    }
    else cout<<0;
}
