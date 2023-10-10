#include <iostream>
#include <cmath>

using namespace std;


int arithmeticSolver(int firstValue, int stepSize, int sumElements){

    int sum = 0;

    for(int i=0;i<sumElements;i++){
        sum = sum + firstValue;
        firstValue = firstValue + stepSize;
    }
    return sum;
}

int main()
{
    int numCase = 0;

    cin>>numCase;

    int array1[numCase], array2[numCase], array3[numCase], result[numCase];

    for(int i=0;i<numCase;i++){
        cin>>array1[i]>>array2[i]>>array3[i];

        result[i] =+ arithmeticSolver(array1[i], array2[i], array3[i]);
    }

    for(int o=0;o<numCase;o++){
        cout<<result[o];
        cout<<" ";
    }


    return 0;
}