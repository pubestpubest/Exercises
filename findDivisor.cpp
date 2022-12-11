#include<iostream>
using namespace std;
int findDivisor(int num){
    int i=2;
    while (i<=num)
    {
        if(num%i==0)
            return i;
        i++;
    }
}

int main(int argc, char const *argv[])
{
    cout<<findDivisor(10);
    return 0;
}
