#include <iostream>
#include <string>

using namespace std;

int mySolver(int a, int b, int c){
    int num = (a * b) + c; //multiplies a times b and add c to store it inside num variable
    int digit;
    int result = 0; //dont really know why, but its important to initiliaze the result first to zero

    while(num > 0){
        digit = num % 10; //calculates the remainder of num variable when divided by 10 to store it to digit variable
        num = num / 10; //calculates the quotient of the num by dividing it into 10 and updating it as the new num
        result += digit; //while the loop is still looping, the digit gets added all together and will be stored as the result
    }

    return result;
}


int main(){

    int numCase;

    cin>>numCase;

    int arrayA[numCase], arrayB[numCase], arrayC[numCase], array2[numCase];

    for(int i=0;i<numCase;i++){
        cin>>arrayA[i]>>arrayB[i]>>arrayC[i];

        array2[i] = mySolver(arrayA[i], arrayB[i], arrayC[i]);
    }

    for(int j=0;j<numCase;j++){
        cout<<array2[j]<<" ";
    }

    return 0;
}