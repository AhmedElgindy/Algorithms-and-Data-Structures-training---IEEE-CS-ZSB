
#include <iostream>

using namespace std;

int main()
{
   int a;cin>>a;
   string arr[a];
   string conf = "No";
   for(int i =0 ;i<a;i++ ){
       string s;
       cin>>s;
       arr[i] = s ;
   }
   for(int i = 0;i<a;i++){
       if(arr[i][0] == 'O' && arr[i][1] == 'O'){
           arr[i][0] ='+';
           arr[i][1] ='+';
           conf = "Yes";
           break;
       }
       else if (arr[i][3] == 'O' && arr[i][4] == 'O'){
           arr[i][3] = '+';
           arr[i][4] = '+';
           conf = "Yes";
           break;
       }
   }
   if(conf == "Yes"){
       cout<<conf<<endl;
   for(int i = 0 ; i <a ;i++){
       cout<<arr[i]<<endl;
   }
   }
   else{
       cout<<conf;
   }
}
