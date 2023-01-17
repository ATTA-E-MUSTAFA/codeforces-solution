
#include <iostream>


#include<string>


using namespace std;


int main() {

    string arr1;

    string arr2;

    char result[101];

    cin>>arr1;

    cin>>arr2;

//This will loop throught the entire rays and check wheather their characters are same then "0" and different then stores "1".

    for(int i=0;arr1[i]!='\0';i++){



        if(arr1[i]!=arr2[i]){

            result[i] = '1';


        }
        else{

            result[i] = '0';

        }

    }


for(int i=0;result[i]=='1' || result[i]=='0';i++){

cout<<result[i];

}
}

