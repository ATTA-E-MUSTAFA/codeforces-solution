

#include<iostream>

using namespace std;

int main(){

int arr[3];

for(int i=0;i<3;i++){

    cin>>arr[i];

}

int temp=0;


//This will sort the array in accending order so that the max or min coordinates are at the end of the array
for(int i=0;i<2;i++){

        for(int j=i;j<3;j++){

    if(arr[i]>arr[j]){

        temp=arr[j];
        arr[j] = arr[i];
        arr[i]=temp;

    }

        }
}


int value=0;
int count=0;
//This will check the first and last element and increase or decrease them respectively to try to match the 2nd one. In this way we get the total minimum steps both friends needs to take to meet at one point.
for(int i=0;(arr[0]&&arr[2]!=arr[1]);i++){

    if(arr[0]<arr[1]){

        arr[0]+=1;

        count++;

    }
    else if(arr[2]>arr[1]){

        arr[2]-=1;
        count++;

    }

}

printf("%d",count);

}


