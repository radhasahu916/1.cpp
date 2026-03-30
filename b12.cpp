#include<iostream>
using namespace std;
int main(){
float area,radius,circumference;
const float pi=3.14;
cout<<"enter radius";
cin>>radius;
area=3.14*radius*radius;
circumference=2*pi*radius;
cout<<"area="<<area<<endl;
cout<<"circumference="<<circumference;
return 0;
}
