#include <iostream>

using namespace std;

int main()
{
    string name;
    double fixed, sales;
    cin>>name;
    cin>>fixed;
    cin>>sales;
    printf("TOTAL = R$ %.2lf\n",fixed+sales*0.15);
    return 0;
}
