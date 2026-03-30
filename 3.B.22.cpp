#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+(2*i-1);
    }
    cout<<"sum of first"<<n<<"odd number="<<sum<<endl;
    return 0;

}
