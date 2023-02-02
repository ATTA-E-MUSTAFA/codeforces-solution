
#include<iostream>
#include <string>
using namespace std;

int main(){

int test;

cin>>test;

string str;
string str2="yes";

for(int i=0;i<test;i++){

cin>>str;


for(int j=0;str[j]!=0;j++){


    if(str[j]>=65 && str[j]<=91){

        str[j]+=32;

    }

}

    if(str==str2){


        printf("YES\n");

    }
    else{

        printf("NO\n");

    }

}


}


