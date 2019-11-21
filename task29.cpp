#include<bits/stdc++.h>
using namespace std;
int main(){
   int m,y;
   cin>>m>>y;
   m+=y;
   y=m-y;
   m-=y;
   cout<<m<<" "<<y;
}
