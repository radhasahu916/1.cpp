#include<iostream>
using namespace std;
int main(){
int i=1,n,sum=0;
cout<<"enter the number";
cin>>n;
while(i<=n){
    sum+=i;
    i++;
}
    cout<<"sum="<<sum;
    return 0;
}
