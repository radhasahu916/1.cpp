#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter a character";
cin>>ch;
if (ch>'A' && ch<'Z'){
    cout<<"uppercase letter";
}
else if(ch>'a' && ch<'b'){
    cout<<"lowercase letter";
}
else if (ch>'0' && ch<'9'){
    cout<<"digit";
}
else{
    cout<<"special character";
}


}
