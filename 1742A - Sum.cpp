
#include<iostream>

using namespace std;

int main(){


int test;

cin>>test;

for(int i=0;i<test;i++){
    int arr[3];

    int flag=0;

    cin>>arr[0]>>arr[1]>>arr[2];

    for(int j=0;j<3 && flag==0;j++){

    int sum1 = arr[j];

    int sum2 =0;
    for(int k = 0;k<3;k++){

        if(k!=j){

            sum2+=arr[k];

        }
    }
    if(sum1==sum2){
        printf("Yes\n");
        flag=1;
    }
}

 if(flag==0){
    printf("No\n");

    }
}
}
