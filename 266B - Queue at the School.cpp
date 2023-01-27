
#include<iostream>

using namespace std;

int main(){

    long long size,time;

    char arr[size+1];

    cin>>size>>time;

    cin>>arr;

    char temp;

    int lenght=0;

    for(int i=0;arr[i]!=0;i++){

        lenght++;

    }


    for(int i=0;i<time;i++){

        for(int j=0;j<lenght-1;j++){


            if(arr[j]=='B' && arr[j+1]=='G'){

              temp= arr[j];

              arr[j] = arr[j+1];

              arr[j+1] = temp;

                j++;
            }

        }


    }





    cout<<arr;

}

