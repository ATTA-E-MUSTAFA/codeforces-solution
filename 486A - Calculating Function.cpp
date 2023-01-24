
#include<iostream>

using namespace std;

int main()
{

    long long num;

    cin>>num;

    long signed int total=0;


    if(num%2==0)
    {

        num = num/2;

        cout<<num;

    }

    else
    {

        num = (num+1)/2  *(-1);

        cout<<num<<endl;
    }
}



