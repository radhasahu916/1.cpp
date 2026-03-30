#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"enter marks";
cin>>marks;
if(marks>>90){
    cout<<" a grade";
}else if(marks>>70){
    cout<<"b grade";
} else if(marks>>60){
      cout<<"c grade";
}else{
    cout<<"fail";
}


}
