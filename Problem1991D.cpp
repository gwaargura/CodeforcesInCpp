#include <iostream>
using namespace std;

int prime(int n) {
    if(n == 1) {
        return 0;
    }
    for(int i = 2; i <= n/2; i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int nn;
    for(int i = 1; i <= nn; i++) {
        if()
    }

    return 0;
}