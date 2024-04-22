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
class DerivedX : public Derived
{
   public:
      int P=111;
      DerivedX()
      {
        cout<<"Inside DerivedX Constructor\n";
      }
      ~DerivedX()
      {
        cout<<"Inside DerivedX Constructor\n";
      }
      void Sun()
      {
        cout<<"Inside DerivedX Sun\n";
      }
};
int main ()
{
    DerivedX dobj;  //(Caling Sequence)// Constructor Base -> constructor Derived -> Constructor DerivedX 
    cout<<"Size of object is : "<<sizeof(dobj)<<"\n"; // 20

    cout<<dobj.A<<"\n";  //11
    cout<<dobj.B<<"\n";  //21
    cout<<dobj.x<<"\n";  //51
    cout<<dobj.y<<"\n";  //101
    cout<<dobj.P<<"\n";  //111

    dobj.Fun(); // Base
    dobj.Gun(); // Derived+Base
    dobj.Sun(); // DerivedX+Derived+Base

   //(Caling Sequence)// //Destructor of DerivedX -> Destructor of Derived -> Destructor of Base
     
    return 0;
};