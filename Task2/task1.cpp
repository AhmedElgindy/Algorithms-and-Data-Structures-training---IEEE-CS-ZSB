#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int first,scond;
    for(int i = 0 ; i < 5;i++){
        for(int z = 0;z< 5 ;z++){
            int a;
            cin>>a;
            if(a ==1){
                first = i ;
                scond = z;
            }
        }
    }
    int z = abs(2-first);
    z+= abs(2-scond);
    cout<<z;
}
