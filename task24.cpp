#include<bits/stdc++.h>
using namespace std;
int main(){
    float d,p,s;
    cin>>d>>p>>s;
    p/=100;
    cout<<d*(s+3+p*(s+3));
}
