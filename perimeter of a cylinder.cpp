#include<bits/stdc++.h>
using namespace std;
int perimeter(int diameter,int height)
{
    return 2*(diameter+height);
}
int main()
{
    int diameter = 5;
    int height = 10;

    cout << "Perimeter = ";
    cout<< perimeter(diameter, height);
    cout<<" units\n";

    return 0;
}
