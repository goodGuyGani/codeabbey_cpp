//https://www.codeabbey.com/index/task_view/average-of-array
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int testCase;
    
    cin>>testCase; //input testcase

    double inputArr[100] = {0}; //Took me 20 minutes to remeber that this should be double instead of int
    int inputerSave[100] = {0};
    
    for(int i=0;i<testCase;i++){
        int taker = false;
        int k = 0;
        //will continue accepting input while taker is false
        while(!taker){
            cin>>inputArr[k];
            if(inputArr[k] == 0){
                taker = true; //taker is now true if the input is 0
            }
            k++; //save current loop iteration
            
        }
        double addedNum = 0;
        for(int j=0;j<k-1;j++){
            addedNum = addedNum + inputArr[j]; //will add all numbers in the inputArr
        }
        double mean = addedNum / (k-1); //apparently I have to put parenthesis to ensure the k-1 first instead of addedNum / k
        
        inputerSave[i] += round(mean); //will be save at the InputerSave
    }
    
    for(int i1=0;i1<testCase;i1++){
        cout<<inputerSave[i1]<<" ";
    }

    return 0;
}
