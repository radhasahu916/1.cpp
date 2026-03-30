#include<iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;
    int sum = 0;
    int max = 0;
    int min = 0;

    cout<<"Enter numbers (-1 to stop):"<<endl;
    cin>>num;

    while(num != -1)
    {
        count++;
        sum = sum + num;

        if(num > max)
            max = num;

        if(num < min)
            min = num;

        cin>>num;
    }

    float avg = (float)sum / count;

    cout<<"Count = "<<count<<endl;
    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min<<endl;
    cout<<"Average = "<<avg;

    return 0;
}
