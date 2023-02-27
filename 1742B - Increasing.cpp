
#include<iostream>

using  namespace std;

int main(){
int test;
cin>>test;
for(int i=0;i<test;i++){


    int size;
    int flag=0;
    cin>>size;

    int arr[size];

    for(int j=0;j<size;j++){

        cin>>arr[j];

    }
    for(int j=0;j<size&&flag==0;j++){

        for(int k=0;k<size&&flag==0;k++){

            if(j!=k){

            if(arr[k]==arr[j]){

                flag=1;

            }
}
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

