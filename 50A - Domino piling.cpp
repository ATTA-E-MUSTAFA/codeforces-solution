#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int rem=0;

    cin>>m>>n;

    int mul=0;

    mul = m*n;

    //When the total boxes are divisible by 2

    if((m*n) % 2==0)
    {

        mul=mul/2;


    }

    else
    {

    //When the total boxes are not even

        rem = mul % 2;

        mul = mul-rem;

        mul=mul/2;


    }
    cout<<mul;

}
