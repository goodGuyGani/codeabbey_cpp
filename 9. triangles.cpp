#include <iostream>
#include <algorithm>

using namespace std;

int mySolve(int stickA, int stickB, int stickC){
    int mySticks[] = {stickA, stickB, stickC};
    
    sort(mySticks, mySticks + 3, greater<int>());
    
    int longestStick = mySticks[0];
    
    int* end = remove(mySticks, mySticks + 3, longestStick);
    
    int newLength = end - mySticks;
    
    if(longestStick>mySticks[0] + mySticks[1]){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int numCases;
    
    cin>>numCases;
    
    int stick1[numCases], stick2[numCases], stick3[numCases], result[numCases] = {0};
    
    for(int i=0;i<numCases;i++){
        cin>>stick1[i]>>stick2[i]>>stick3[i];
        
        result[i] += mySolve(stick1[i], stick2[i], stick3[i]);
    }
    
    for(int j=0;j<numCases;j++){
        cout<<result[j]<<" ";
    }

    return 0;
}