#include<iostream>

using namespace std;

int main()
{
    int i=0;
    for(i=0;i<10;i++)  //For loop
    {
        cout<<"Pass:"<<i+1<<endl;
    }

    while(i<20)        //While loop
    {
        cout<<"Pass:"<<i+1<<endl; 
        i++;
    }

    do                 //Do while loop
    {
        cout<<"Pass:"<<i+1<<endl; 
        i++;
    }while(i<30);
    return 0;
}
