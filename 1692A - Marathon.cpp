

#include<iostream>
using namespace std;

int main(){


int test;

cin>>test;

for(int j=0;j<test;j++){

long arr[4];

int count=0;

for(int i=0;i<4;i++){

    cin>>arr[i];

}

for(int i=0;i<4;i++){

    if(arr[0]<arr[i]){

        count++;

    }

}

cout<<count<<endl;

}
}

