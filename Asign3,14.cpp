#include<iostream>
using namespace std;
int main(){
    int n=20,i,j,flag;
    for(i=n-1;i>=2;i--){
        flag=1;
    for(j=2;j<=1/2;j++){
        if(i%j==0){
            flag=0;
        break;
    }
}

if(flag==1){
    cout<<"last prime"<<i;
    break;

}

    }
}
