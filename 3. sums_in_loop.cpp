#include <iostream>
using namespace std;

int main(){
    int size;
    
    cin>>size;
    
    int myArr1[size], myArr2[size], myResult[size];
    
    for(int i=0;i<size;i++){
        cin>>myArr1[i]>>myArr2[i];
        myResult[i] =+ myArr1[i] + myArr2[i];
    }
    
    for(int j=0;j<size;j++){
        cout<<myResult[j]<<" ";
    }
}