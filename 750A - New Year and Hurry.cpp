
#include<iostream>

using namespace std;

int main()
{

    int prob = 0;

    int time=0;

    int total_time = 240;

    int x,j;

    cin>>j>>x;

    int time_left = total_time - x;        //gets the time he has in attending the concert

    int prob_time = 5;

    int count_probl = 0;

    for(int i=2; time_left>=prob_time; i++)
    {

        time_left-=prob_time;

        prob_time=5*i;

        if(count_probl<j)
        {

            count_probl++;

        }

    }

    cout<<count_probl<<endl;

}

