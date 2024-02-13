#include<bits/stdc++.h>
using namespace std;
float volumeTriangular(int a,int b,int h)
{
    float vol=(0.1666)*a*b*h;
    return vol;
}
float volumeSquare(int b,int h)
{
    float vol=(0.33)*b*b*h;
    return vol;
}
float volumePentagonal(int a,int b,int h)
{
    float vol=(0.83)*a*b*h;
    return vol;
}
float volumeHexagonal(int a,int b,int h)
{
    float vol=a*b*h;
    return vol;
}
int main()
{
     int b = 4, h = 9, a = 4;
    cout << "Volume of triangular"
         << " base pyramid is "
         << volumeTriangular(a, b, h)
         << endl;

    cout << "Volume of square "
         << " base pyramid is "
         << volumeSquare(b, h)
         << endl;

    cout << "Volume of pentagonal"
         << " base pyramid is "
         << volumePentagonal(a, b, h)
         << endl;

    cout << "Volume of Hexagonal"
         << " base pyramid is "
         << volumeHexagonal(a, b, h);
    return 0;
}
