#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1 || n==2 || n==12)
    cout<<"winter";
    else if (n==3 || n==5 || n==4)
    cout<<"spring";
    else if (n==6 || n==7 || n==8)
    cout <<"summer";
    else if(n==9 || n==10 || n==11)
    cout<<"autumn"; 
}
