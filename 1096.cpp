#include <iostream>
 
using namespace std;
 
int main() {
    for (int i=0; i<5;i++){
        for(int j=7; j>=5;j--){
            printf("I=%d J=%d\n", i*2+1, j);
        }
    }
    return 0;
}