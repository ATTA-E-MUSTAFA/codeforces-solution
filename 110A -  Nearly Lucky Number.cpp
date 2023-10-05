#include<iostream>
using namespace std;
int main(){
long long num;

cin>>num;
long long count_num=0;

long long num2 = num;

int rem=0;

for(int i=0;num2>0;i++){

rem = num2 % 10;

if(rem==7||rem==4){

     count_num++;
}
    num2=num2/10;


}
//cout<<count_num<<endl;

if(count_num==7 || count_num==4){

    cout<<"YES\n";

}
else{

    printf("NO\n");
}
     
}


