#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float a,b;
    cin>>a>>b;
    float z = (a*b)/12;
    cout<<fixed<<setprecision(3)<<z<<endl;
}