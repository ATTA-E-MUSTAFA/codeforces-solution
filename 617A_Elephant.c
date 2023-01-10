
//this code will solve the elephant problem of codeforces

#include<stdio.h>

int main(){

int num;

scanf("%d",&num);

int steps=0;

int flag=0;


//code if the coordiantes are in between 1 to 5

if(num>=1&& num<=5){

    steps++;
    printf("%d",steps);

}
else{

//when coordinates are greater than the total max position the elephant can move

    for(int i=0;flag==0;i++){

    //A base case when the number reaches the required limit

        if(num>=1&&num<=5){

            steps++;

            flag=1;

        }
        else{

            num = num-5;

            steps++;

        }

    }


}

if(flag==1){

printf("%d",steps);

}

}

