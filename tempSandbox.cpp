#include<iostream>
using namespace std;
void numm(int num[]){
    int i=0;
    while (i<3){
        cout<<num[i++];
    }
}
int main(int argc, char const *argv[])
{
    int num[3]={1,2,3};
    numm(num);
    return 0;
}
