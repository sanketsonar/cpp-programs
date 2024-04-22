#include<iostream>
using namespace std;

class Marvellous
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

class Demo : public Marvellous
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

class Hello : public Marvellous
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




int main()
{
    Demo dobj;
    Hello hobj;

    return 0;
}