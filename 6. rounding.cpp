#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numCase;
    
    cin>>numCase;
    
    double array1[numCase], array2[numCase], result[numCase], quotient[numCase];
    
    for(int i=0;i<numCase;i++){
        cin>>array1[i]>>array2[i];
        
        quotient[i] = array1[i] / array2[i];
        
        
        result[i] =+ round(quotient[i]);
        
    }
    
    for(int j=0;j<numCase;j++){
        cout<<result[j];
        cout<<" ";
    }

    return 0;
}