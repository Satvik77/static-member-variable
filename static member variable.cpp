#include<iostream>
using namespace std;

class Alpha
{
private:
   int a;
   int b;
public:
   Alpha()
   {
       a = 5;
       b = 5;
       stat++;
   }
   static int stat;
};
int Alpha:: stat = 0;
int main()
{
    Alpha a1;
    Alpha a2;
    Alpha a3;

    cout << "Value of stat with a1 : " << a1.stat << endl;
    cout << "Value of stat with a2 : " << a2.stat << endl;
    cout << "Value of stat with Alpha : " << Alpha::stat << endl;

    return 0;
}