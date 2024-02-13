#include<bits/stdc++.h>
using namespace std;
double areaCube(double a)
{
    return (a*a*a);
}
double surfaceCube(double a)
{
    return (6*a*a);
}
int main()
{
     double a = 5;
    cout << "Area = " << areaCube(a) << endl;
    cout << "Total surface area = " << surfaceCube(a);
    return 0;
}
