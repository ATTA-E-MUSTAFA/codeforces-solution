
#include<iostream>


using namespace std;


int  main()
{


    int size;
    int max;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++)
    {


        cin>>arr[i];

    }

    max = arr[0];

    for(int i=1; i<size; i++)
    {


        if(max<arr[i])
        {

            max = arr[i];

        }

    }

    int count=0;

//check if they are not equal then it increases the index i to become equal to the max

    for(int i=0; i<size; i++)
    {


        if(arr[i]!=max)
        {

            for(int j=0; arr[i]!=max; j++)
            {


                arr[i]+=1;

                count++;

            }

        }

    }



    cout<<count;

}

