#include<iostream>
using namespace std;
void mul(int x,int y)
{
    int *p1=&x;
    int *p2=&y;
    cout<<"the product is :"<<(*p1)*(*p2)<<endl;
}
int main()
{
    int a,b;
    cout<<"enter the value of 2 numbers :";
    cin>>a>>b;
    mul(a,b);
    return 0;

}