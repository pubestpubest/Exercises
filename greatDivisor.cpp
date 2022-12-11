#include<iostream>
using namespace std;

int greatDivisor(int num){
    int i=num-1;
    while(i>0){
        if(num%i==0)
            return i;
        i--;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    cout<<greatDivisor(2);
    return 0;
}
