#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number =";
    cin>>n;

    int i;
    for(i=1;i<=n;i++){
        if(n%i==0)
          cout<<i<<" ";
    }
    cout<<"\n";

    return 0;
}