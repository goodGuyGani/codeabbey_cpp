#include <iostream>
#include <vector>
//how the fck is this wrong, I dont fcking know, help me, I suck so bad.
using namespace std;

int main()
{
    long long currentNum; //to save the current number

    cin>>currentNum; //input the current number, hehehehe

    char currentOper = ' '; //I had to create a current operation that is different from the operChar, hard to expain


    char operChar[999] = {0}; //since arrays are meant to be created with size, I just went with 999
    int numArray[999] = {0};
    int i = 0;

    while(true){
        cin>>operChar[i]>>numArray[i];
        currentOper = operChar[i]; //this is the reason why I had to create currentOper, because if I use operChar[i] instead, i run through some errors, because of input

        if(currentOper == '%'){
            break; //will exit loop if currentOper is equals to '%'
        }

        i++;
    }
    //this loop is pretty easy to understand hehehehe
    for(int j=0;j<i+1;j++){
        if(operChar[j] == '+'){
            currentNum = currentNum + numArray[j];
        }
        if(operChar[j] == '*'){
            currentNum = currentNum * numArray[j];
        }
        if(operChar[j] == '%'){
            currentNum = currentNum % numArray[j];
        }
    }
    cout<<currentNum;


    return 0;
}
