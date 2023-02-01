
#include<iostream>

using namespace std;

int main ()
{

    int numOfGames;

    cin>>numOfGames;

    int countMishika = 0;

    int countChris = 0;

    int countDraw = 0;

    int arr[2];

    for(int i=0; i<numOfGames; i++)
    {

        cin>>arr[0]>>arr[1];

        if(arr[0]>arr[1])
        {

            countMishika++;

        }

        else if(arr[0]==arr[1])
        {

            countDraw++;

        }
        else
        {

            countChris++;

        }


    }

    if(countMishika>countChris)
    {

        printf("Mishka");

    }
    else if(countChris>countMishika)
    {

        printf("Chris");

    }
    else
    {

        printf("Friendship is magic!^^");

    }
}

