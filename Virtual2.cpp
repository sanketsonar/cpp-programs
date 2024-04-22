#include<iostream>
using namespace std;

class Base
{   
    public:
         int A,B;
    void Fun()  //1000(address)     Defination
    {
        cout<<"Base fun\n";
    }
    void Gun()  //2000         Defination
    {
        cout<<"Base Gun\n";
    }
    void Sun()  //3000         Defination
    {
        cout<<"Base Sun\n";
    }
};

class Derived : public Base
{
   public:
       int X,Y;
    void Gun() //4000     Re-Defination
    {
        cout<<"Derived Gun\n";
    }
    void Sun() //5000     Re-Defination
    {
        cout<<"Derived Sun\n";
    }
    void Run() //6000     Defination
    {
        cout<<"Derived Run\n";
    }
};  

int main()
{   
    Base bobj;
    Derived dobj;

    Base *bp = NULL;
    Derived *dp = NULL;
    
    bp = &bobj; // NO CASTING
    dp = &dobj; // NO CASTING
    
    bp = &dobj; // UP CASTING
    dp = &bobj; // DOWN CASTING (not allowed)

    return 0;
}