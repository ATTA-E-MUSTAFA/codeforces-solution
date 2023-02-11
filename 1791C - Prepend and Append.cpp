
#include<iostream>

using namespace std;

int main(){

int test;

cin>>test;

for(int i=0;i<test;i++){

    int size;
    cin>>size;
    char binary[size+1];
    cin>>binary;
    int lenght=0;
    for(int j=0,k=size-1;j<=size/2&&k>=size/2;k--,j++){

        if(binary[j]==binary[k] ||  j==k){

            break;

        }
        else{
            lenght+=2;

        }
    }
    cout<<size-lenght<<endl;
}
}

