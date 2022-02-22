#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int a;
    cin>>a;
    float z,b;
    z = a/log(a);
    b = 1.25506 * z;
    cout<<fixed<<setprecision(1)<<z<<" "<<b<<endl;
}