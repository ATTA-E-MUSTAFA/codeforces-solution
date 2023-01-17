
//Program to check all the numbers in the array

#include<iostream>


using namespace std;

int main(){


int totalLevels = 0;

cin>>totalLevels;

int arr[totalLevels]={};

int num = 1;

int X_levels=0;

int Y_levels=0;

//This will create an array of number from 1 to totallevels

for(int i=0;i<totalLevels;i++){


    arr[i] = num;

    num++;



}

//This will create an array for player X size

cin>>X_levels;

int xArr[X_levels];


for(int i=0;i<X_levels;i++){

    cin>>xArr[i];

}

cin>>Y_levels;


int yArr[Y_levels];

//This will create an array for player Y size

for(int i=0;i<Y_levels;i++){

    cin>>yArr[i];

}

//This will create an array of total size X + Y size

int dup_arr[X_levels + Y_levels];


for(int i=0,k=0;i<(X_levels+Y_levels);i++){


    if(i<X_levels){

        dup_arr[i] = xArr[i];

    }
    else if(i>=X_levels){

        dup_arr[i] = yArr[k];
        k++;
    }
}

int flag=1;

int count=0;

//Checking that all the required levels exits or not

for(int i=0;i<totalLevels && flag==1;i++){


count=0;

    for(int j=0;j<(X_levels + Y_levels);j++){

  //  cout<<arr[i]<<endl;

        if(arr[i]==dup_arr[j]){

            count++;


        }


    }

    //cout<<count<<endl;

    if(count>=1){

        flag=1;

    }
    else{

        flag=0;

    }
}

//When the flag variable gets 0 it means that all the levels are not passed

if(flag==0){

 cout<<"Oh, my keyboard!";

}
else{


    cout<<"I become the guy.";


}

}


