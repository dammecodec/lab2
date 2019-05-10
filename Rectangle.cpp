#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
	private:
		 static double width, height;
	public:
  		Rectangle (double x, double y);
	public: 
		double perimeter();
    public:
         double area();
         
}; 
double Rectangle::height;
double Rectangle::width;
Rectangle::Rectangle(double x,double y)
{
		width = x;
		height = y;
}    
double Rectangle:: perimeter()
{
	return 2*(width+height);
}
double Rectangle:: area()
{
	return width * height;
}
 main()
   {
   Rectangle rec1(23,20); 
   Rectangle rec2 (40,50); 
   cout<<"area of rec1 is : "<< rec1.area();
   cout<<"\n area of rec2 is : "<<rec2.area();
getch();  
}

