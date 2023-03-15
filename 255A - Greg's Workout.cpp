
#include<iostream>
using namespace std;

int main() {

    int num;
    cin >> num;
    int arr[num];
    int sum[3] = { 0 };
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int ind = 0;

    for (int i = 0; i < num; i++)
    {
        count++;
        sum[ind] += arr[i];
        ind++;
        if (count == 3) {
            count = 0;
            ind = 0;
        }

    }int max = sum[0];
    int maxInd = 0;
    for (int i = 1; i < 3; i++)
    {
        //cout<<sum[i]<<endl;
        if (sum[i] > max) {
            max = sum[i];
            maxInd = i;
        }
    }

    if (maxInd == 0) {
        cout << "chest";
    }
    else if (maxInd == 1) {
        cout << "biceps";
    }
    else if (maxInd == 2) {
        cout << "back";
    }
}

