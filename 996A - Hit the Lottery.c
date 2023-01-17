//Program to Hit the Lottery

#include <iostream>

using namespace std;

int main() {


    int num=0;

    cin>>num;

    int count=0;

    //This loop will use conditional statements to check the limits and then decrease the number by the given limits.

    for(int i=0;num>0;i++)
    {

        if(num>=100){

            num-=100;
            count++;
        }
        else if(num>=20 && num<100){

            num-=20;
            count++;

        }

        else if(num>=10 && num<20){

            num-=10;
            count++;

        }
        else if(num>=5 && num<10){

            num-=5;
            count++;
        }
        else if(num>=1 && num<5){

            num-=1;
            count++;

        }
    }

cout<<count;

    return 0;
}

