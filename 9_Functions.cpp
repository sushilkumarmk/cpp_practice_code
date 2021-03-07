#include<iostream>

using namespace std;

int function_arg_pass_by_value(int a, int b);
int function_arg_pass_by_pointer(int *a, int *b);
int function_arg_pass_by_reference(int &a, int &b);

int main()
{
    int a=10,b=20;

    cout<<"The values of a and b before, 'calling by value' are:"<<a<<"\t"<<b<<endl;
    function_arg_pass_by_value(a,b);
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"The values of a and b before, 'calling by pointer' are:"<<a<<"\t"<<b<<endl;
    function_arg_pass_by_pointer(&a,&b);
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"The values of a and b before, 'calling by reference' are:"<<a<<"\t"<<b<<endl;
    function_arg_pass_by_reference(a,b);
    cout<<"-----------------------------------------------------"<<endl;
    return 0;
}

int function_arg_pass_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Values of a and b by using function call as value:"<<a<<"\t"<<b<<endl;
    return 0;
}
