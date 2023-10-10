#include <iostream>

using namespace std;

int main(){

    int n;

    cin>>n;

    int myArr1[n], myArr2[n], myArr3[n], myRes[n];

    for(int i=0;i<n;i++){
        cin>>myArr1[i]>>myArr2[i]>>myArr3[i];

        if(myArr1[i]<myArr2[i] && myArr1[i]<myArr3[i]){
            myRes[i] =+ myArr1[i];
        } else if(myArr2[i]<myArr1[i] && myArr2[i]<myArr3[i]){
            myRes[i] =+ myArr2[i];
        } else if(myArr3[i]<myArr1[i] && myArr3[i]<myArr2[i]){
            myRes[i] =+ myArr3[i];
        } else {
            cout<<"Error";
        }
    }

    for(int j=0;j<n;j++){
        cout<<myRes[j]<<" ";
    }

    return 0;
}