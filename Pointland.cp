#include<iostream>
#include<cmath>
using namespace std;

//structure for the points
struct Point
{
    double x, y, distance, slope, equa, slope2, slope3;
};

Point readPt( Point p1, Point p2);
//reads a point in standard form

Point showPt( Point p1, Point p2);
//receives a point and displays a point in standard form

Point dist( Point p1, Point p2);
//input is copied into function to calculate the distance

Point slope( Point p1, Point p2);
//input is copied into function to calculate the slope

Point midpoint( Point p1, Point p2);
//user input is copied into function to calculate the midpoint

Point equation( Point p1, Point p2);
//input is copied into function to display equation of line
//thru 2 points

Point collinear (Point p1, Point p2, Point p3);
//reads 3 points and determines if points are collinear or not

int main()
{
    char junk;
    int choice;
    Point q1,q2,q3,s1,d1,m1,e1,c1;
    
    do
    {
        cout << "POINTLAND\n";
        cout << "What do you want to do?\n";
        cout << "1 - Find distance between 2 points\n";
        cout << "2 - Find slope\n";
        cout << "3 - Find a midpoint\n";
        cout << "4 - Find an equation of a line\n";
        cout << "5 - Determine if 3 points are collinear\n";
        cout << "6 - Exit\n";
        cout << "Selection => ";
        cin  >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter point 1: ";
            cin >> junk >> q1.x >> junk >> q1.y >> junk;
            cout << "Enter point 2: ";
            cin >> junk >> q2.x >> junk >> q2.y >> junk;
            d1 = dist(q1,q2);
            cout << "Distance = " << d1.distance << endl;
        break;
        
        case 2:
            cout << "Enter point 1: ";
            cin >> junk >> q1.x >> junk >> q1.y >> junk;
            cout << "Enter point 2: ";
            cin >> junk >> q2.x >> junk >> q2.y >> junk;
            s1=slope(q1,q2);
            if(s1==){cout<<"The slope is undefined"<<endl;}
            else{cout << "Slope = " << s1.slope << endl;}
        break;
        
        case 3:
            cout << "Enter point 1: ";
            cin >> junk >> q1.x >> junk >> q1.y >> junk;
            cout << "Enter point 2: ";
            cin >> junk >> q2.x >> junk >> q2.y >> junk;
            m1 = midpoint(q1,q2);
            cout << "Midpoint = " << "("<< m1.x << ", "<< m1.y << ")" << endl;
        break;
        
        case 4:
            cout << "Enter point 1: ";
            cin >> junk >> q1.x >> junk >> q1.y >> junk;
            cout << "Enter point 2: ";
            cin >> junk >> q2.x >> junk >> q2.y >> junk;
            s1 = slope(q1,q2);
            e1 = equation(q1,q2);
            /*cout << "y = " << s1 << "x + " << e1 << endl;*/
        break;
        
        case 5:
            cout << "Enter point 1: ";
            cin >> junk >> q1.x >> junk >> q1.y >> junk;
            cout << "Enter point 2: ";
            cin >> junk >> q2.x >> junk >> q2.y >> junk;
            cout << "Enter point 3: ";
            cin >> junk >> q3.x >> junk >> q3.y >> junk;
            c1 = collinear(q1,q2,q3);
        break;
        
        default:
            cout << "Bye bye..\n";
            break;
        }
        /*cout << "Enter 2nd point (x,y): ";
        cin >> junk >> q2.x >> junk >> q2.y >> junk;
        q3 = midpoint (q1,q2);
        cout << "Midpoint between (" << q1.x <<", "<<q1.y<< ") and (" << q2.x<< " ,"<< q2.y << ") is " << "("<< q3.x << ", "<< q3.y << ")"<<endl;*/
    }
    while ( choice==1 || choice==2 || choice==3 || choice==4 || choice==5 );
    return 0;
}

/*Point readPt( Point p1, Point p2)
{
    char junk;
    Point q1;
    cout << "Enter point 1: ";
    cin >> junk >> q1.x >> junk >> q1.y >> junk;
    return q1;
}*/

Point dist( Point p1, Point p2)
{
    Point distance;
    distance.distance = sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
    return distance;
}

Point slope(Point p1, Point p2)
{
    Point m;
    if(p2.x==p1.x)
    {
        }

        m.slope = (p2.y-p1.y) / (p2.x-p1.x);
        return m;
}

Point midpoint( Point p1, Point p2)
{
    Point mid;
    mid.x = (p1.x+p2.x)/2;
    mid.y = (p1.y+p2.y)/2;
    return mid;
}

Point equation( Point p1, Point p2)
{
    Point eq,m;
    m.slope = (p2.y-p1.y) / (p2.x-p1.x);
    eq.equa = (p1.y- (m.slope*p1.x));
    return eq;
}

Point collinear (Point p1, Point p2, Point p3)
{
    Point colli;
    colli.slope = (p2.y-p1.y)/(p2.x-p1.x);
    colli.slope2 = (p3.y-p1.y)/(p3.x-p1.x);
    colli.slope3 = (p3.y-p1.y)/(p2.x-p2.x);
    
    return colli;
}
