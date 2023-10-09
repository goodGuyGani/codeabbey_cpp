#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int mySolver(int num){
    int sum = 0;
    vector<int> digits; //my first time using vectors, hehehehehe
    
    while(num > 0){                 //while the num input is greater than zero, its going to loop
        int digit = num % 10;     //digit is the last digit of the number
        digits.push_back(digit); //push the digit into the array
        num /= 10;                      //divide the number by 10 to get the next digit
    }
    
    reverse(digits.begin(), digits.end());        //reverse the array, because I stored the number frorm right to left
    
    int arrSave[100] = {0};                 //array to store the sum of the digits
    
    for(int i=0;i<digits.size(); i++){
        arrSave[i] += digits[i] * (i + 1);    //multiply the digit by the position of the digit
    }
    
    for(int k=0;k<digits.size();k++){
        sum += arrSave[k];                    //add the sum of the digits to the sum
    }
    
    return sum;
}

int main()
{
    int size;
    
    cin>>size;
    
    int array1[size];
    int arrSave2[9999] = {0};
    
    for(int o=0;o<size;o++){
        cin>>array1[o];
        arrSave2[o] += mySolver(array1[o]);
    }
    
    for(int l=0;l<size;l++){
        cout<<arrSave2[l]<<" ";
    }
    
    
    

    return 0;
}