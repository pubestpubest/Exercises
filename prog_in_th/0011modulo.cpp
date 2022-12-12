#include<iostream>
using namespace std;

int repeatedChk(int num[]){
    int i=0,total=0,chk[42]={};
    while(i<10)
        chk[num[i++]]=1;
    i=0;
    while(i<42)
        if(chk[i++]==1)
            total++;
    return total;
}

int modulo(int num[]){
    int i=0;
    while(i<10)
        num[i++]%=42;
    return repeatedChk(num);
}
int main(int argc, char const *argv[])
{
    int num[10],i=0;
    while(i<10)
        cin>>num[i++];
    cout<<modulo(num);
    return 0;
}

