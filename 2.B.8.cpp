#include<iostream>>
using namespace std;
int main(){
int a,b,c;

cout<<"enter two number";
cin>>a>>b>>c;

if(a+b>c&& a+c>b &&b+c>a){
    if(a==b){
        if(b==c){
            cout<<"tringle is equilateral";
           } else{
                cout<<"triangle is isolated";
            }


    }else{
        if (a==b||b==c){
            cout<<"triangle is isolated";
        }else{
        cout<<"triangle is scalene";
        }
        }
        }else{
        cout<<"invalid option";
        }

        return 0;
}

