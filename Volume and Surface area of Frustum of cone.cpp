#include<bits/stdc++.h>
using namespace std;
float pi=3.14159;
float Volume(float r,float R,float h)
{
    return (float(1)/float(3))*pi*h*(r*r+R*R+r*R);
}
float curved_surface_area(float r,float R,float l)
{
    return pi*l*(r+R);
}
float total_surface_area(float r,float R,float l,float h)
{
    return pi*l*(r+R)+pi*(r*r+R*R);
}
int main()
{
     float small_radius = 3;
    float big_radius = 8;
    float slant_height = 13;
    float height = 12;

    cout << "Volume Of Frustum of Cone : "
         << Volume(small_radius, big_radius, height)
         << endl;

    cout << "Curved Surface Area Of Frustum of Cone : "
         << curved_surface_area(small_radius, big_radius,
                                 slant_height) << endl;

    cout << "Total Surface Area Of Frustum of Cone : "
         << total_surface_area(small_radius, big_radius,
                                 slant_height, height);
    return 0;
}
