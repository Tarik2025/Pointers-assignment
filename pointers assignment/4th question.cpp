#include<iostream>
using namespace std;
int main()
{
int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
cout<<ptr2<<endl;
*ptr = *ptr2;
cout<<ptr<<endl;
cout<<a;
}
//so both the addresses of b and ptr is different so by this code we will get output as a=20,this means a will get b value
