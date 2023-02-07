
#include<iostream>

using namespace std;

int main(){

int test;

cin>>test;

int num;

int count=0;

int sum=0;

for(int i=0;i<test;i++){

    cin>>num;

    count=0;

    sum = 0;

    int rem = num%10;

    rem=rem-1;

    for(int j=0;num!=0;j++){

        count++;
        num/=10;

    }

    num = 1;

    for(int j=0;j<count;j++){



        sum+=num;

        num++;

    }

    rem = rem*10 + sum;

    cout<<rem<<endl;


}

}
