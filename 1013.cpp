#include <iostream>
 
using namespace std;

int maiorAB(int a, int b){
    return (a+b+abs(a-b))/2;
}

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    printf("%d eh o maior\n",maiorAB(maiorAB(a,b), c));
    return 0;
}