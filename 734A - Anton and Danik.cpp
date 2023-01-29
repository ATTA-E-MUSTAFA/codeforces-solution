

#include<iostream>

using namespace std;

int main(){


    long long num = 0;

    cin>>num;

    char str[num];

    cin>>str;

    int countA=0;
    long countD=0;

    for(int i=0;str[i]!=0;i++){

        if(str[i]=='A'){

            countA++;

        }
        if(str[i]=='D'){

            countD++;

        }

    }

    if(countA>countD){

        printf("Anton");

    }
    else if(countA<countD){

        printf("Danik");
    }
    else if(countA==countD){

        printf("Friendship");
    }
}

