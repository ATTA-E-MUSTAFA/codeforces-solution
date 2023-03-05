
#include<iostream>
using namespace std;
int main(){

    int test;
    cin>>test;

    for(int i=0;i<test;i++){

        string s;
        cin>>s;
        int flag=0;
        int kR = 0;
        int kB = 0;
        int kG = 0;
        for(int j=0;s[j]!=0&&flag==0;j++){

            if(s[j]=='r'){
                kR++;
            }
            else if(s[j]=='b'){
                kB++;
            }
            else if(s[j]=='g'){
                kG++;
            }
            else if(s[j]=='B'){

                if(kB>=1){
                    flag=0;
                }
                else{
                    flag=1;
                }
            }
            else if(s[j]=='R'){
                if(kR>=1){
                    flag=0;
                }
                else{
                    flag=1;
                }
            }

            else if(s[j]=='G'){
                if(kG>=1){
                    flag=0;
                }
                else{
                    flag=1;
                }
            }
            else{
                flag=1;
            }
        }

        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }


}

