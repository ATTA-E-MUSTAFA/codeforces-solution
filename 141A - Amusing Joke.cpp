
#include<iostream>

using namespace std;

int main(){

//Array with the count of all the characters appearing

int arr[256]={0};

int arr2[256]={0};

char guest[101];

gets(guest);

char host[101];

gets(host);

char pile[1000];

gets(pile);

//This will make the ascii of the alphabet... the index and increament the count at that index

for(int i=0;guest[i]!=0;i++){


    arr[guest[i]]++;


}

for(int i=0;host[i]!=0;i++){


    arr[host[i]]++;


}

//This will make the ascii of the alphabet... the index and increament the count at that index

for(int i=0;pile[i]!=0;i++){


    arr2[pile[i]]++;


}

int flag=0;

// This will check that both the counts of the arrays are equal and if not then the arrays are not equal

for(int i=0;i<256 && flag==0;i++){


    if(arr[i]==arr2[i]){


        flag=0;

    }
    else{

        flag=1;

    }


}

if(flag==0){


    cout<<"YES";

}

if(flag==1){

    cout<<"NO";

}
}

