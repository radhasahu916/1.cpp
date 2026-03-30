#include<iostream>
using namespace std;
int main(){
    int principal,rate,time,SI;
    cout<<"enter the principal";
    cin>>principal;
    cout<<"enter the rate";
    cin>>rate;
    cout<<"enter the time";
    cin>>time;
    SI=(principal*rate*time/100);
    cout<<"Simple Interest"<<SI;

return 0;

}
