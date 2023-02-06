
#include<iostream>

using namespace std;

int main(){

int test;

cin>>test;




for(int i=0;i<test;i++){

   string arr;

   cin>>arr;

   int sum_f= 0;
   int sum_i = 0;

   for(int j=0;j<3;j++){


    int a = 0;

    a = arr[j]-48;

    sum_i+=a;

   }
    for(int j=3;j<6;j++){


    int a = 0;

    a = arr[j]-48;

    sum_f+=a;

   }

   if(sum_i==sum_f){

    printf("YES\n");

   }
       else{

        printf("NO\n");

       }
}

}

