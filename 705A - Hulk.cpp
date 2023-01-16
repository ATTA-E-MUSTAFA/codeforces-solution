

// Program to print the string with the required pattern

#include<iostream>

#include<string>

using namespace std;

int main(){

int num1 = 1;

cin>>num1;

int flag=0;

string str;


//simple when the string number is 1
if(num1==1){


    str = "I hate it";

}
else{


//when it is not one but more

    for(int i=1;i<=num1;i++){

            //when the index is odd and it is not last

        if(i%2!=0 && i!=num1){

            str +="I hate ";

        }
        else if(i%2==0 && i!=num1){

            //when the index is even and it is not last

            str+="that I love that ";

        }
        else if(i==num1){

        //when the index is last

            if(i%2!=0){

                 str +="I hate it";

            }
            else if(i%2==0){

            str+="that I love it";

            }

        }
    }


}


cout<<str;

}
