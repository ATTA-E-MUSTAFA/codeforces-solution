
#include<iostream>
#include<string>
using namespace std;

int main()
{

    string arr;
    string arr2= {0};
    int lenght=0;
    int *ptr;
    int count=0;

    cin>>arr;

    for(int i=0; arr[i]!=0; i++)
    {
        lenght++;
    }

//Dynamically located array of integers

    ptr = new int[lenght];



    for(int i=0; arr[i]!=0; i++)
    {

        count=0;

        for(int j=0; arr[j]!=0; j++)
        {

            if(arr[i]==arr[j])
            {

                count++;

            }

        }

        //if The the alphabet occur more than 1 time it changes it to 0

        if(count>1)
        {

            arr[i]='0';

            ptr[i]=0;

        }
        else if(count==1)
        {

            ptr[i] = count;

        }

    }

    int sum=0;

    //Summing the array

    for(int i=0; i<lenght; i++)
    {
        sum+=ptr[i];
    }

    if(sum%2==1)
    {

        cout<<"IGNORE HIM!";

    }
    else
    {

        cout<<"CHAT WITH HER!";

    }
}

