#include <iostream>

using namespace std;


int result;

void addNum(int par1, int par2){
    result = par1 + par2;
}

int main()
{
    int var1, var2;
    
    cin>>var1;
    cin>>var2;
    
    addNum(var1, var2);
    
    cout<<result;

    return 0;
}