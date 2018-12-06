#include<iostream>
#include<conio.h>
#include<functional>
using namespace std;

int boo()
{
    return 7;
}

int doo()
{
    return 8;
}

int main()
{
    cout<<boo();
    function<int()>ptrFun;
   // int (*ptrFun)();
    ptrFun=boo;
    cout<<ptrFun();
    int (*ptrFun2)()=doo;
    cout<<ptrFun2();
    return 0;
}
