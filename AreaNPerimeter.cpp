//calculates area and perimeter of 3, 2-D shapes
//circle, rectangle, or triangle
#include <iostream>
#include <cmath>
using namespace std;

const double PI=3.141592654;

void getDim(float &r);
void getDim(float &l, float &w);
void getDim(float &a, float &b, float &c);
//gets circle radius, rectangle length/width, or triangle sides

float perim(float r1);
float perim(float l1, float w1);
float perim(float a1, float b1, float c1);
//calculates the perimeter of 3 shapes

float area (float r2);
float area (float l2, float w2);
float area (float a2,float b2, float c2);
//calculates the area of 3 shapes

int main()
{
    int decision;
    float a3,b3,c3,r3,l3,w3;
    float circlePerim, rectPerim, triPerim;
    float circleArea, rectArea, triArea;
    
    do
    {
        cout << "AREA/PERIMETER CALCULATOR\n";
        cout <<"Select shape: \n";
        cout << "Circle(1) Rectangle(2) Triangle(3) Exit(4)\n";
        cin >> decision;
        
        switch(decision)
        {
                
            case 1:
                getDim(r3);
                circlePerim = perim(r3);
                circleArea = area(r3);
                cout << "Circle area = " << circleArea << " and perimeter = " << circlePerim << endl;
                break;
                
            case 2:
                getDim(l3,w3);
                rectPerim = perim(l3,w3);
                rectArea = area(l3,w3);
                cout << "Rectangle area = " << rectArea << " and perimeter = " << rectPerim << endl;
                break;
                
            case 3:
                getDim(a3,b3,c3);
                triPerim = perim(a3,b3,c3);
                triArea = area (a3,b3,c3);
                cout << "Triangle area = " << triArea << " and perimeter = " << triPerim << endl;
                break;
                
            default:
                cout<<"Bye...\n";
                break;
        }
        
    }
    while (decision==1 || decision==2 || decision==3);
    
}
void getDim(float &r)
{
    cout << "Enter circle radius: ";
    cin >> r;
}

void getDim(float &l, float &w)
{
    cout << "Enter rectangle length: ";
    cin >> l;
    cout << "Enter rectangle width: ";
    cin >> w;
}

void getDim(float &a, float &b, float &c)
{
    cout<<"Enter 1st side of triangle: ";
    cin >> a;
    cout <<"Enter 2nd side of triangle: ";
    cin >> b;
    cout<<"Enter 3rd side of triangle: ";
    cin >> c;
}

float perim(float r1)
{
    float perimeter;
    perimeter = 2*PI*r1;
    return perimeter;
}

float perim(float l1, float w1)
{
    float perimeter;
    perimeter = 2 * (l1+w1);
    return perimeter;
}

float perim(float a1, float b1, float c1)
{
    float perimeter;
    perimeter = a1+b1+c1;
    return perimeter;
}

float area (float r2)
{
    float area1;
    area1 = PI * pow(r2, 2);
    return area1;
}

float area (float l2, float w2)
{
    float area1;
    area1 = l2 * w2;
    return area1;
}

float area (float a2,float b2, float c2)
{
    float s, area1;
    s = (a2 + b2 + c2)/2;
    area1 = sqrt(s*(s-a2)*(s-b2)*(s-c2));
    return area1;
}
