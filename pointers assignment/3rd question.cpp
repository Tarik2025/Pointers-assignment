#include<iostream>
using namespace std;
int main()
{
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
cout<<a<<endl;
cout<<b<<endl;
ptr = &b;
cout<<ptr<<endl;;
cout << *ptr << " " << a << " " << b;
}