
#include <iostream>
#include<cstring>
using namespace std;
int main() {

    int test;

    cin>>test;

    for(int i=0;i<test;i++){

        int size;

        cin>>size;

       char s1[size+1];

       char  s2[size+1];

       cin>>s1;

       int k=0;

       for(int i=0;s1[i]!=0;i++){

           if(s1[i]!=s1[i+1]){

               s2[k] = s1[i];

               k+=1;

           }

       }
       s2[k] = '\0';

       int flag=0;

       for(int j=0;flag==0 && s2[j]!=0;j++){

        for(int i=j+1;i<k;i++){

if(s2[j]==s2[i]){

    flag=1;

}
       }

        }

        if(flag==1){

            printf("No\n");

        }
        else{

            printf("Yes\n");

        }

    }

}
