#include<iostream>
using namespace std;

int ball_index[3]={1,0,0};

void swapA(void){
    int temp;
    temp=ball_index[0];
    ball_index[0]=ball_index[1];
    ball_index[1]=temp;
}
void swapB(void){
    int temp;
    temp=ball_index[1];
    ball_index[1]=ball_index[2];
    ball_index[2]=temp;
}
void swapC(void){
    int temp;
    temp=ball_index[0];
    ball_index[0]=ball_index[2];
    ball_index[2]=temp;
}


int trik(string abc){
    int i=0;
    while(abc[i]!='\0'){
        switch (abc[i])
        {
            case 'A':
                swapA();
                break;
            case 'B':
                swapB();
                break;
            case 'C':
                swapC();
                break;
            default:
                break;
        }
        i++;
    }i=0;
    while (i<3)
    {
        if (ball_index[i]==1){
            return i+1;
        }
        i++;
    }   
}

int main(int argc, char const *argv[])
{
    string Input;
    cin>>Input;
    cout<<trik(Input)<<endl;    
    return 0;
}
