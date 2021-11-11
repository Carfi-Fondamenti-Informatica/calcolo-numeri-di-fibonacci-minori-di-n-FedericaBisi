#include <iostream>
using namespace std;

int main() {
   int n=0; int primo=1; int secondo=1; int terzo=0;
   cin>>n;
   if(n>0){
      cout<<primo<<endl;
      cout<<secondo<<endl;
      terzo=primo+secondo;
      primo=secondo;
      secondo=terzo;
      while(terzo<=n){
         cout<<terzo<<endl;
         terzo=primo+secondo;
         primo=secondo;
         secondo=terzo;
      }
   }
   return 0;
}
