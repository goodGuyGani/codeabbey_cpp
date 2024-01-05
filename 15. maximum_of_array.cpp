//https://www.codeabbey.com/index/task_view/maximum-of-array
#include <iostream>

using namespace std;
int main()
{
    int digitList[300] = {0};
    int maxNum, minNum;
    
    for(int i1=0;i1<sizeof(digitList)/sizeof(digitList[0]);i1++){
        cin>>digitList[i1];
    }
    
    for(int i=0;i<sizeof(digitList)/sizeof(digitList[0]);i++){
        if(digitList[0]<digitList[i]){ //if the first digit is less than the current iteration of the digit
            digitList[0] = digitList[i]; //the current iteration of the digit will now be the digit in the index 0
        }                                           //This will force the biggest digit to be move at the first index
    }
    maxNum = digitList[0];
    
    for(int k=0;k<sizeof(digitList)/sizeof(digitList[0]);k++){
        if(digitList[0]>digitList[k]){ //same goes here but the first digit should be greater than the current iteration of digit
            digitList[0] = digitList[k];
        }
    }
    minNum = digitList[0];
    
    
    cout<<maxNum<<" "<<minNum;

    return 0;
    
    //terrible C++ coding but works.
}
