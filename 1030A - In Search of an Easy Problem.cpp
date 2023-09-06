#include <iostream>
using namespace std;
int main() {
int numOfPeoples=0;
    
cin>>numOfPeoples;

int opinion=0;

int count_0=0;          //counting all the easy answers

int count_1=0;          //counting all the hard answers

for(int i=0;i<numOfPeoples;i++){

cin>>opinion;

    //when person thinks that the problem is easy
    
    if(opinion==0){

        count_0++;

    }
        
    //when person thinks that the problem is hard
        
    else if(opinion==1)
    {

        count_1++;

    }

}

    if(count_1>=1){

        cout<<"HARD";

    }
    else{

        cout<<"easy";

    }
}

