#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n;
    do{
        cin >> n;
    }while (n<=1);
    float a[n], b ;
    for (int i=0; i<n; i++){
        cin >> b;
        a[i]=b;
    }
    cout << Max(n , a);
    return 0;
}
