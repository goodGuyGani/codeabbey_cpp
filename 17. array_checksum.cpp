#include <iostream>

using namespace std;

int main()
{
    int testCase;
    
    cin>>testCase;
    
    int arrInput[testCase];
    long long result = 0;
    int seed = 113;
    int limit = 10000007;
    
    for(int i=0;i<testCase;i++){
        int numInput;
        
        cin>>numInput;
        
        result = (result + numInput) * seed;
        
        if(result>limit){
            result = result % limit;
        }
    }
    
    cout<<result;

    return 0;
}
