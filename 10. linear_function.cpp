#include <iostream>

using namespace std;

//going to start commenting because I forget things sometimes.

// takes the x1, y1, x2, y2 inside the function
string mySolver(int x1, int y1, int x2, int y2){
    int a = (y2 - y1) / (x2 - x1); // subtracts y2 - y1 and x2 - x1, and then divides them both and store it inside variable a
    int b = y1 - a * x1; // subtracts y1 - a and multiplies it to x1, and then stores it inside variable b
    
    return "(" + to_string(a) + " " + to_string(b) + ")";

}

int main()  
{
    int numCase;
    
    cin>>numCase; // inputs number of test cases
    
    int array1[numCase][4]; // initializes a 2-dimensional array with index1 having the same length as the numcase and index2 having 4
    
    string array2[numCase]; // initializes an string array for storing the returned output from the mySolver() function
    
    for(int i=0;i<numCase;i++){
        cin>>array1[i][0]>>array1[i][1]>>array1[i][2]>>array1[i][3];
        
        array2[i] = mySolver(array1[i][0], array1[i][1], array1[i][2], array1[i][3]);
    }
    
    for(int o=0;o<numCase;o++){
        cout<<array2[o]<<" ";
    }

    return 0;
}