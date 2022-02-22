#include <iostream>
 
using namespace std;
 
int main() {
     int a; 
     cin >>a;
     if(a>1000 ||a <0){
         return 0;
     }
     for(int i =1;i<=10;i++){
         cout<<i<<" x "<<a<<" = "<<a*i<<endl;
     }
}