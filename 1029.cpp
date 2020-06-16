#include <iostream>

using namespace std;


int rCalls = -1;

int fib(int n){
    rCalls++;
    if (n<2){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

int main()
{
    int x, n;
    cin>>x;
    for (int i=0; i<x;i++){
        cin>>n;
        int f = fib(n);
        printf("fib(%d) = %d calls = %d\n",n, rCalls, f);
        rCalls=-1;
    }
    
    return 0;
}
