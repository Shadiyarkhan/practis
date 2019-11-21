#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,s=0;
    cin>>a>>b>>c;
    if(a%5==0)s+=a;
    if(b%5==0)s+=b;
    if(c%5==0)s+=c;
    cout<<s;

}
