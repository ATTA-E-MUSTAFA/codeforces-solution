
#include<iostream>

using namespace std;

int main(){

int num;

cin>>num;

int arr[1000];

int i=0;

for(int j=1;i<1000;j++){

    int rem = j%10;

    if(j%3!=0 && rem!=3){

            arr[i] = j;

            i+=1;

        }

}

int x;

while(0<num){

cin>>x;

    x-=1;

    cout<<arr[x]<<endl;

    num--;


}


}




