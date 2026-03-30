#include<iostream>
using namespace std;

int main()
{
    int n,x;
    float sum=1;
    float fact=1;

    cout<<"Enter x and n: ";
    cin>>x>>n;

    for(int i=1;i<n;i++)
    {
        fact = fact * (2*i) * (2*i-1);

        if(i%2==1)
            sum = sum - (pow(x,2*i)/fact);
        else
            sum = sum + (pow(x,2*i)/fact);
    }

    cout<<"Sum = "<<sum;

    return 0;
}
