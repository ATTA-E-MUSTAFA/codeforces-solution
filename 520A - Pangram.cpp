
#include <iostream>

#include<algorithm>

using namespace std;

int main() {

int size;

cin>>size;

char str[size+1];

int arr[26];           //This array contains the a 26 element array of count 1;

int arr2[26];

int count  = 0;

for(int i=0;i<26;i++){

    arr[i] = 1;

}

cin>>str;

char ch[27];

char *ptr = ch;

char ch2[27];

char *ptr2 = ch2;


//Two pointer points towards an array of upper and lower case alphabets;

for(int i=0;i<26;i++){

    *ptr = 'A' + i;

    *ptr2 = 'a' + i;        //It will check that wheather every element in string is equal to A or a and then so on.

    for(int j=0;str[j]!=0;j++){

    if(str[j]==*ptr || str[j]==*ptr2)
    {
        arr2[i] = 1;

    }

    }


    ptr++;

    ptr2++;


}

int flag=0;

for(int i=0;i<26 && flag==0;i++){

   if(arr[i]==arr2[i]){

       flag=0;

   }
   else{

       flag=1;

   }
}

if(flag==1){

    cout<<"NO";

}
else{

    cout<<"YES";

}

}

