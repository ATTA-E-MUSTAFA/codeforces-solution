
#include <iostream>
using namespace std;

int main() {
    int test;
    cin>>test;

    for(int i=0;i<test;i++){

        int size;
        cin>>size;
        char arr[size+1];
        cin>>arr;
        int count1 = 0;
        char sign[size];
        int ind = 0;
        if(arr[0]=='1'){

            count1++;

        }

        for(int j=1;arr[j]!=0;j++){

            if(arr[j]=='1'){

                count1++;

                if(count1%2==1){

                sign[ind] = '+';

                ind+=1;

                }
                else{

                     sign[ind] = '-';

                     ind+=1;
                }

            }
            else{

                sign[ind] = '+';

                ind+=1;

            }
        }

        sign[ind] = '\0';

        cout<<sign<<endl;


    }
}

