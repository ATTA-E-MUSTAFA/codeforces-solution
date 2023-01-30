#include<iostream>

using namespace std;

int main(){

int friends,bottels,milliliters,limes,slicePerLime,salt,milliPerToast,saltPerToast;


cin>>friends>>bottels>>milliliters>>limes>>slicePerLime>>salt>>milliPerToast>>saltPerToast;

int maxBottels = 0;
int maxSalt = 0;
int maxLimes = 0;

maxBottels = ((bottels*milliliters)/milliPerToast);
maxSalt = salt/saltPerToast;
maxLimes = limes * slicePerLime;

maxBottels = maxBottels/friends;
maxSalt = maxSalt/friends;
maxLimes = maxLimes/friends;

int min = maxBottels;

int arr[3] = {maxBottels,maxSalt,maxLimes};

for(int i=1;i<3;i++){

    if(min>arr[i]){

        min = arr[i];

    }

}

cout<<min;

}

