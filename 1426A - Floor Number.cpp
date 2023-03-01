#include<iostream>

using namespace std;

int main(){

    int test;

    cin>>test;

    for(int i=0;i<test;i++){


        int x = 0;

        int roomNum = 0;

        int floor = 0;

        cin>>roomNum>>x;

        int flag=0;

        if(roomNum==1||roomNum==2){

            floor=1;

        }
         else{

            int ind = 0;
            int range1 = 1;
            int range2 = 2;
            floor=1;

            for(int j=0;flag==0;j++){

                if(roomNum>=range1 && roomNum<=range2){

                    flag=1;


                }
                else{

                    range1 = (ind*x)+3;
                    ind++;
                    range2 = (ind*x)+2;
                    floor++;

                }
            }


         }

        cout<<floor<<endl;

    }


}

