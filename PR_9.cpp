# include<iostream>
# include<cmath>
using namespace std;

int main()

{
   short int a,b,x,y;

   cin >> a >> b;
   x = a - b;
   y = b - a;
   if (x>0)
   {
        cout << "Primul copil este mai mare cu "<<x<<" ani";
   }else if(x<0)
   {
        cout << "Al doilea copil este mai mare cu "<<y<<" ani";
   }else
   {
       cout << "Copiii au varste egale";
   }
   return 0;

}
