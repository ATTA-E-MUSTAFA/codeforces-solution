/*
#include<iostream>

using namespace std;

int main(){

    int test;

    cin>>test;

    for(int i=0;i<test;i++){

        int size;
        int flag=0;
        int j=0;
        int count=1;
        cin>>size;
        string ch;
        cin>>ch;

        for(;ch[j]!='\0' && flag==0;){

            if(count==1){
                  count=2;
                    flag=0;
                    j+=1;
            }
            else if(count==2){

                if(ch[j]==ch[j+1]){
                    count=1;
                    flag=0;
                     j+=2;
                }
                else{

                    flag=1;

                }
            }
            else{

                flag=1;

            }
        }

        if(flag==0){

            printf("Yes\n");

        }
        else{

            printf("No\n");

        }


    }


}
*/
