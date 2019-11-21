#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,q,w;
   cin>>a>>b>>c;
   q=a+b+c;
   w=c-a;
   a=a+b;
   b=w;
   c=q;
   cout<<a<<' '<<b<<' '<<c;
}
