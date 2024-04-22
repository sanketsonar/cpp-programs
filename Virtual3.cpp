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
   
   Derived dobj;
   
   Base *bp = &dobj;  // upcasting 
    
   bp -> Fun();  
   bp -> Gun(); // base gun - it is calling function of base class instead of the function from derived which is pointed to
   bp -> Sun();
   //bp -> Run();
   
   return 0;
}