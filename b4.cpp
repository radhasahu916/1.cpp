#include<iostream>
using namespace std;
int main(){
int gross,basic,HRA,DA,otherallowanes;
cout<<"enter gross salary";
cin>>gross;
cout<<"enter basic  salary";
cin>>basic;
cout<<" enter HRA";
cin>>HRA;
cout<<" enter DA";
cin>>otherallowanes;
gross=basic+HRA+DA+otherallowanes;
cout<<"gross"<<gross;
return  0;

}
