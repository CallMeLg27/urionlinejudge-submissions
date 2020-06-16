#include <iostream>

using namespace std;


int main() {
    
    int number,hw;
    float ph_salary, t_salary;
    
    cin>>number;
    cin>>hw;
    cin>>ph_salary;
    t_salary = ph_salary*hw;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",t_salary);
    return 0;
}