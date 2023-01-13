

#include<iostream>

using namespace std;

int main(){

int count=0; //Counts the rooms where both of them can live

int roomMen; //mens who are living in the room

int totalCapacity=0; //total mens the room can accomodate

int totalRooms = 0;  //total rooms available

cin>>totalRooms;

for(int i=0;i<totalRooms;i++){

    cin>>roomMen>>totalCapacity;

    if(roomMen<totalCapacity && (totalCapacity - roomMen)>=2){      //code when total mens in the room are less then the total room capacity and there must be atleast two spaces as both wants to live together

        count++;

    }

}

cout<<count;         //prints count of the rooms

}

