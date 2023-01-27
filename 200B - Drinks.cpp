
#include<iostream>

using namespace std;

int main(){


int num;

cin>>num;

double div;

double num2 = num;

double arr[num];

double total=0;

for(int i=0;i<num;i++){

    cin>>arr[i];

    total+=arr[i];

}

div = total/num2;

cout<<div;

}

