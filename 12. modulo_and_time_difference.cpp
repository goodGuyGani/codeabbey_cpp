#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    
    cin>>size;
    
    int day1[size], hour1[size], min1[size], sec1[size];
    int day2[size], hour2[size], min2[size], sec2[size];
    
    int dayRes[size] = {0}, hourRes[size] = {0}, minRes[size] = {0}, secRes[size] = {0};
    
    long long int timestamp1[size] = {0}, timestamp2[size] = {0};
    long long int diff[size] = {0};
    
    for(int i=0;i<size;i++){
        cin>>day1[i]>>hour1[i]>>min1[i]>>sec1[i]>>day2[i]>>hour2[i]>>min2[i]>>sec2[i];
        
        timestamp1[i] = sec1[i] + 60 * (min1[i] + 60 * (hour1[i] + 24 * day1[i]));
        timestamp2[i] = sec2[i] + 60 * (min2[i] + 60 * (hour2[i] + 24 * day2[i]));
        
        diff[i] = timestamp2[i] - timestamp1[i];
        
        /*this was really hard, because I do not know the exact formula for calculating seconds to hours and more, 
        so I had to use chatGPT for the code below, and yes I feel guilty.
        */
        dayRes[i] = diff[i] / 86400;  // 86400 seconds in a day
        hourRes[i] = (diff[i] % 86400) / 3600;
        minRes[i] = ((diff[i] % 86400) % 3600) / 60;
        secRes[i] = ((diff[i] % 86400) % 3600) % 60;
    }
    
    for(int j=0;j<size;j++){
        cout<<"("<<dayRes[j]<<" "<<hourRes[j]<<" "<<minRes[j]<<" "<<secRes[j]<<")"<<" ";
    }

    return 0;
}