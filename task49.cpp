#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,mx=0;
    cin>>a>>b>>c>>d;
    if(a%2==1)mx=max(mx,a);
    if(b%2==1)mx=max(mx,b);
    if(c%2==1)mx=max(mx,c);
    if(d%2==1)mx=max(mx,d);
    if(mx==0)cout<<"not found";
    else cout<<mx;
}

