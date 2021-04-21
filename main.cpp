#include <cstddef>
#include <string>
#include<iostream>

void PrintStackTop();

int exponentiate(int x, int n) {
    if(n == 0) {
        return 1;
    } else {
        return x * exponentiate(x, n - 1);
    }
}


int exp1(int x, int n, int r) {
    if(n == 0){
        return r;
    } else {
        return exp1(x,n-1,r*x);
    }
}

int go(int x, int n){
    return exp1(x,n,1);
}

float badBase(float n){
    static int iter = 0;
    //PrintStackTop();
     std::cout << iter++ << std::endl;
    if(n == 1){
        return 1.0;
    } else {
        return n * badBase(n / 2);
    }
}

size_t st;
void PrintStackTop()
{
    int stack_top;
    if(st == 0)
        st = (size_t) &stack_top;
    std::cout  << (st - (size_t) &stack_top) << std::endl;
}



int gcd(int a, int b){
    if(b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}


int main() {
    int x = 0xFF;
    x = gcd(206,40);
    // x = exponentiate(10,4);
//    int y = go(10,3);
//    std::cout << d << std::endl;
//      std::cout << badBase(5.0f) << std::endl;
    return 0;
}
