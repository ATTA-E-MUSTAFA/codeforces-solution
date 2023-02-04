
#include<iostream>
#include<cstring>

using namespace std;

int main(){

int test;

cin>>test;

for(int i=0;i<test;i++)

{

char str[101];

    cin>>str;


    for(int j=1;str[j]!='\0';j++){

        if(str[j]==str[j+1]){

            str[j+1] = '9';

        }

    }

    for(int j=0;str[j]!='\0';j++){

        if(str[j]!='9'){

            cout<<str[j];

        }

    }


cout<<"\n";


}

}

