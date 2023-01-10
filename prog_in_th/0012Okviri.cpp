#include<iostream>
#include<string>

using namespace std;

void outterLine(int);
void innerLine(int);
void textLine(string);

int main(int argc, char const *argv[])
{
    string txt;
    cin>>txt;
    outterLine(txt.size());
    innerLine(txt.size());
    textLine(txt);
    innerLine(txt.size());
    outterLine(txt.size());
    return 0;
}

void outterLine(int n){
    cout<<".";
    int i=1;
    while (i<=n){
        if(i%3==0)cout<<".*.";
        else cout<<".#.";
        cout<<".";    
        i++;
    }
    cout<<"\n";
}

void innerLine(int n){
    cout<<".";
    int i=1;
    while (i<=n){
        if(i%3==0)cout<<"*.*";
        else cout<<"#.#";
        cout<<".";    
        i++;
    }
    cout<<"\n";
}

void textLine(string txt){
    int i=0;
    cout<<"#."<<txt[i++]<<".";
    while (i<txt.size()){
        if(i%3==1) cout<<"#";
        else cout<<"*";
        cout<<"."<<txt[i++]<<".";
    }
    if(i%3==0)cout<<"*";
    else cout<<"#";
    cout<<"\n";
}