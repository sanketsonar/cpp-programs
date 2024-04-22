#include<iostream>
using namespace std;

class Demo
{
   public:
   int A;

   Demo()
   {
      A=10;
      cout<<"Inside Demo constructor\n";
   }
   ~Demo()
   {
      cout<<"Inside Demo Destructor\n";
   }
   void Fun()
   {
     cout<<"Inside Fun Of Demo\n";
   }
};

class Hello
{
   public:
   int B;

   Hello()
   {
      B=20;
      cout<<"Inside Hello constructor\n";
   }
   ~Hello()
   {
      cout<<"Inside Hello Destructor\n";
   }
   void Gun()
   {
     cout<<"Inside Gun Of Hello\n";
   }
};

class Marvellous : public Demo, public Hello
{
   public:
   int C;
   Marvellous()
   {
     C=30;
     cout<<"Inside MArvellous Constructor\n";
   }
   ~Marvellous()
   {
     cout<<"Inside MArvellous Constructor\n";
   }
   void Sun()
   {
     cout<<"Inside Sun Of Marvellous\n";
   }

};

int main()
{
    Marvellous mobj;
    mobj.Fun();
    mobj.Gun();
    mobj.Sun();
   
   cout<<mobj.A<<"\n";
   cout<<mobj.B<<"\n";
   cout<<mobj.C<<"\n";


    return 0;
}