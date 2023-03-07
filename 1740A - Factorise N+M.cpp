
#include<iostream>
using namespace std;

int main(){

    int test;
    cin>>test;

    for(int i=0;i<test;i++){

        int num2;
        cin>>num2;
        int flag=0;
        int ans =0;
        int num = 2;
        for(int k=0;flag==0;k++){
            flag=0;
        for(int j=num;j<=num/2&&flag==0;j++){

            if(num%j==0){
                flag=1;
            }
        }
        if(flag==0){
            if((num+num2)%2==0){

                flag=1;
                ans = num;
            }
        }
        num++;
        }
        cout<<ans<<endl;
    }
}

