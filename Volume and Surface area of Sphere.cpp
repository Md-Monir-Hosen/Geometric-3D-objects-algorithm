#include<bits/stdc++.h>
using namespace std;
float pi=3.14259;
float volume(float r)
{
    return (float(4)/float(3))*pi*r*r*r;
}
float surface_area(float r)
{
    return (4*pi*r*r);
}
int main()
{
     float radius = 12;
    float vol, sur_area;
    vol = volume(radius);
    sur_area = surface_area(radius);
    cout << "Volume Of Sphere :" << vol << endl;
    cout << "Surface Area Of Sphere :" << sur_area << endl;
    return 0;
}
