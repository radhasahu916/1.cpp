#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
double sum=0;
cout<<"enter the number";
cin>>n;
for(int i=1;i<=n;i++){
    sum=sum+1/pow(i,i);
}

   cout<<"sum="<<sum;


    return 0;

}
