#include<iostream>
using namespace std;

class Base
{
   public :
       int A,B;
       Base ()
       {
         cout<<"Inside base constructor\n";
         A = 11;
         B = 21;
        }
       ~Base ()
       {
         cout<<"Inside base Destructor\n";
        }
       void Fun()
       { 
          cout<<"Inside base fun\n";
       }
};

class Derived : public Base
{
   public:
       int x,y;
       Derived()
       {
         cout<<"Inside derived costructor\n";
         x = 51;
         y = 101;
       }
       ~Derived()
       {
         cout<<"Inside derived Destructor\n";
       }
       void Gun()
       {
         cout<<"Inside Derived Gun\n";
       }
};

int main ()
{
    Derived dobj; // Constructor of Base Constructor of Derived
    cout<<"Size of object is : "<<sizeof(dobj)<<"\n"; //16

    cout<<dobj.A<<"\n";  //11
    cout<<dobj.B<<"\n";  //21
    cout<<dobj.x<<"\n";  //51
    cout<<dobj.y<<"\n";  //101

    dobj.Fun(); //Base Fun
    dobj.Gun(); //Derived Gun
     
    return 0;
};