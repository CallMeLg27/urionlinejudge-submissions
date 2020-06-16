#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    cin>>x;
    int notas[7] = {100,50,20,10,5,2,1};
    int cantidad[7];
    printf("%d\n", x);
    for (int i=0; i<7;i++){
        printf("%d nota(s) de R$ %d,00\n", x/notas[i], notas[i]);
        x %= notas[i];
    }
    return 0;
}