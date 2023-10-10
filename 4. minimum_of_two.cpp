#include <iostream>

using namespace std;

int main(){

    int mySize;

    cin>>mySize;

    int myArr1[mySize], myArr2[mySize], resArr[mySize];

    for(int i=0;i<mySize;i++){
        cin>>myArr1[i]>>myArr2[i];

        if(myArr1[i]<myArr2[i]){
            resArr[i] =+ myArr1[i];
        }else{
            resArr[i] =+ myArr2[i];
        }
    }

    for(int j=0;j<mySize;j++){
        cout<<resArr[j]<<" ";
    }
    return 0;
}