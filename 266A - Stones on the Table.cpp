#include<iostream>

using namespace std;

int main(){

int size;

cin>>size;

char arr[size+1];

cin>>arr;

int count=0;

for(int i=0;i<size-1;i++){


    if(arr[i]==arr[i+1]){

        count++;

    }

}

cout<<count;

}
