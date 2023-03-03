/*

#include<iostream>

using namespace std;

int main(){

    int test;

    cin>>test;

    for(int i=0;i<test;i++){


        int arr[4];

        for(int j=0;j<4;j++){

            cin>>arr[j];

        }

        int a = 0;

        int b = 0;

        if(arr[0]>arr[1]){

            a = arr[0];
            arr[0] = 0;

        }
        else{

            a = arr[1];
            arr[1] = 0;

        }

        if(arr[2]>arr[3]){

            b = arr[2];
            arr[2] = 0;

        }
        else{

            b = arr[3];
            arr[3] = 0;

        }

        int flag=0;

        for(int j=0;j<4 && flag==0;j++){

            if(arr[j]<=a&&arr[j]<=b){

                flag=0;

            }
            else{

                flag=1;

            }
        }

        if(flag==1){
            printf("No\n");

        }
        else{

            printf("Yes\n");

        }
    }



}


*/
