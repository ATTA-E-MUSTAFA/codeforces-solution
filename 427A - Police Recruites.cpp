
//Program to check the available or non available of police officers

#include<iostream>


using namespace std;

int main(){

int size;

cin>>size;

int arr[size];

int count=0;

int avail_officiers=0;            //available officers

int untrea_crimes=0;                //untreated crimes


for(int i=0;i<size;i++){

    cin>>arr[i];


}

for(int i=0;i<size;i++){

        //when the entry is 1 or greater than 1
    if(arr[i]>=1){

        avail_officiers+=arr[i];

    }
    //when the entry is -1 or greater than 1 this will execute when there are available officers
    else if(arr[i]==-1 && avail_officiers>=1){


        avail_officiers--;

    }

    //when the entry is -1 or greater than 1 this will execute when there are no available officers making the untreated crimes
    else if(arr[i]==-1 && avail_officiers==0){


        untrea_crimes++;

    }

}


cout<<untrea_crimes;

}


