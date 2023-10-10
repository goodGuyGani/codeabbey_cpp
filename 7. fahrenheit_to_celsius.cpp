#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numCase = 0;

    cin>>numCase;

    double fahrenheit[numCase], celsius[numCase];

    for(int i=0;i<numCase;i++){
        cin>>fahrenheit[i];

        fahrenheit[i] = (fahrenheit[i] - 32) * 5 / 9;

        celsius[i] =+ round(fahrenheit[i]);
    }

    for(int o=0;o<numCase;o++){
        cout<<celsius[o];
        cout<<" ";
    }



    return 0;
}