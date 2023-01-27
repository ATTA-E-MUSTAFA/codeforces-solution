

#include <algorithm>
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int arr[5][5];

    int x;
    int y;
    int count=0;
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            cin>>arr[i][j];

        }


    }
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            if(arr[i][j]==1){

                x=i;
                y=j;

            }

        }


    }

    for(int i=0;x!=2 || y!=2;i++){

    if(x<2){

        x+=1;
        count++;

    }
    else if(x>2){

        x-=1;
        count++;

    }
    else if(y<2){

        y+=1;
        count++;

    }
    else if(y>2){

        y-=1;
        count++;

    }
    }
    cout<<count;
}
