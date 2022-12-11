#include<iostream>
using namespace std;
int cheetah(int budget){
    int total=budget/10;
    int ticket=total;
    while(ticket>=3){
        ticket-=2;
        total+=1;
    }
    return total;
}
int main(int argc, char const *argv[])
{
    cout<<cheetah(150);
    return 0;
}
