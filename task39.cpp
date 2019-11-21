#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"Yes";
        return 0;
    }
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}
