#include <iostream>

using namespace std;

struct Product{
    int code;
    int units;
    float price;
};

int main()
{
    Product p1, p2;
    scanf("%d %d %f",&p1.code,&p1.units,&p1.price);
    scanf("%d %d %f",&p2.code,&p2.units,&p2.price);
    float toPay = p1.units*p1.price+p2.units*p2.price;
    printf("VALOR A PAGAR: R$ %.2f\n",toPay);
    return 0;
}
