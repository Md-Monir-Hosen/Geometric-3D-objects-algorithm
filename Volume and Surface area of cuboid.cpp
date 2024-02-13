#include<bits/stdc++.h>
using namespace std;
double areaCuboid(double l,double h,double w)
{
    return (l*h*w);
}
double surfaceAreaCuboid(double l,double h,double w)
{
    return (2*l*w+2*h*w+2*l*h);
}
int main()
{
     double l = 1;
    double h = 5;
    double w = 7;
    cout << "Area = " << areaCuboid(l, h, w) << endl;
    cout << "Total Surface Area = "
         << surfaceAreaCuboid(l, h, w);
    return 0;
}
