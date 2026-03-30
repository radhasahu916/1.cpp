#include<iostream>
using namespace std;
int main(){
int unit;
float bill;
cout<<"enter electricity units";
cin>>unit;
if (unit<=50){
    bill=unit*1.50;
}
else if(unit<=150){
    bill=(50*1.50)+(unit-50)*2.50;
}
else if(unit<=250){
    bill=(50*150)+(100*2.50)+(unit-150)*4.00;
}
else{
    bill=(50*1.50)+(100*2.50)+(100*4.00)+(unit-250)*6.00;
}
cout<<"total  electricity bill="<<bill;
}
