 // check if number is a power of two or not

#include <iostream>
#include <cmath> 
using namespace std;

int pow = 0;
string Powers_of_Two(int n) {

    for (int i = 0; i < INT_MAX; i++)
    {
        if (pow(2, x) == n) // if number is a power of two, confirm true
        {
            return "True";
        }
        else if (pow(2, x) > n) // if not, then break function
        {
            break;
        }
    }
    
    return "False";
}
