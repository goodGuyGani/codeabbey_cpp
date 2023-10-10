#include <iostream>

using namespace std;

int main(){
    int size, sum = 0;

    cin>>size;

    int myArray1[size];

    for(int i=0;i<size;i++){
        cin>>myArray1[i];
        sum+=myArray1[i];
    }

    cout<<sum;

    return 0;
}