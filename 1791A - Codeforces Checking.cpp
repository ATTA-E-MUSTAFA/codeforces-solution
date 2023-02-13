
#include <iostream>
using namespace std;

int main() {

int test;

cin>>test;

char ch;

char str[] = "codeforces";

int flag=0;

for(int i=0;i<test;i++){

    flag=0;

    cin>>ch;

    for(int j=0;str[j]!='\0';j++){

        if(ch==str[j]){

            flag=1;

        }


    }

    if(flag==1){

        printf("Yes\n");

    }
    else{

        printf("No\n");

    }
}

}

