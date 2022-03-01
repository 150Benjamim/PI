#include <stdio.h>

float multInt1 (int n, float m){

    float r = 0;

    for (; n > 0; n--){
        r += m;
    }

    return r;
}

float multInt2 (int n, float m){

    float r = 0;

    while (n!=0) {
        if (n % 2 != 0) r += m;
        n = n / 2;
        m = m * 2;
    }

    return r;
}

int mdc1 (int a, int b){

    int aux, r=1;
    if (a>=b) aux = b;
    else aux = a;

    for (int i = 1; i <= aux; i++){
        if ((a % i == 0) && (b % i == 0)) r = i;
    }

    return r;
}

int mdc2 (int a, int b){

    int r=1;
    while ((a!=0) && (b!=0)){
        if (a>b){
            a=a%b;
            r = b;
        }
        else if (b>a){
            b=b%a;
            r = a;
        }
        else if (a==b) r = a;
    }
    return r;
}

int fib1(int n){

    int x;
    if (n < 2) x = 1;
    else x = fib1(n-1) + fib1(n-2);

    return x;
}

int fib2(int n){

    int first=1, second=1, r;

    if (n < 2) return 1;
    else {
        for (int i = 2; i <= n; i++) {
            r = first + second;
            first = second;
            second = r;
        }
    }
    return r;
}

int main() {

    return 0;
}
