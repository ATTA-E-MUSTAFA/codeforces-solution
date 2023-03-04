
#include <iostream>

using namespace std;

int main() {

    int test;

    cin>>test;

    for(int i=0;i<test;i++){

        string s;

        cin>>s;

        int count = 0;

        int flag=0;

      int ind1 = 0;
      int ind2 = 0;
      int flag2 = 0;

        for(int j = 0;s[j]!=0&&flag==0;j++){


            if(s[j]=='1'){

                     ind1 = j;
                     flag=1;

            }

        }
                for(int k = s.length()-1;k>=0&&flag2==0;k--){

                    if(s[k]=='1'){

                        ind2 = k;
                        flag2=1;
                }

            }


        for(int j=ind1;s[j]!=0&&j<=ind2;j++){

            if(s[j]=='0'&& flag==1&&flag2==1)

                {

                        count++;

                }
        }

        cout<<count<<endl;

    }

}

