#include <iostream>
using namespace std;

bool isAbundant (int x);
bool isSumOfAbundant (int x);

int main ()
{
    int number;

    cout<<"Enter a positive integer: ";
    cin>>number;

    if(number > 0)
    {
        if(isSumOfAbundant(number))
        {
           cout<<number<<" is a sum of two abundant numbers."<<endl;
        }
        else
        {
            cout<<number<<" is not a sum of two abundant numbers."<<endl;
        }
    }
}

bool isAbundant(int x)
{
    bool isAbundant = false;

    int sum = 0;
    for(int i = 1; i < x; i++)
    {
        if(x % i == 0)
        sum += i;
    }

    if(sum > x)
    {
        isAbundant = true;
    }

    return isAbundant;
}

bool isSumOfAbundant (int x)
{
    bool isSumOfAbundant = false;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i + j == x)
            {
                if(isAbundant(i) && isAbundant(j))
                {
                    isSumOfAbundant = true;
                    cout<<i <<"  +   "<<j <<"  =   "<<x<<endl;
                }
            }
        }
    }
    return isSumOfAbundant;
}
