// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    string s1;

    string s2;

    cin>>s1;

    cin>>s2;

    int flag=0;

    int lenght = 0;

    for(int i=0;s1[i]!=0;i++){

        lenght++;


    }

    for(int i=0,k = lenght-1;flag==0 && s1[i]!=0;i++,k--){

        if(s2[i]==s1[k]){

            flag=0;

        }
        else{

            flag=1;

        }

      //  cout<<s1[i]<<s2[k]<<endl;
    }

    if(flag==1){

        printf("NO\n");

    }
    else if(flag==0){

        printf("YES\n");

    }
}
