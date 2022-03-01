#include <bits/stdc++.h>
using namespace std;
 
void removeDuplicates(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++){
        if(arr[i]!=0){
        s.insert(arr[i]);
        }
    }
    cout<<s.size();
}
 
int main()
{
    int size;
    int ar[size];
    cin>>size;
    for(int i = 0; i< size;i++){
        int a;
        cin>>a;
        ar[i] = a;
    }
    removeDuplicates(ar,size);
}