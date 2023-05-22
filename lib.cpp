#include "lib.h"

float Max(int n, float a[]){
    float b;
    b=a[0];
    for(int i=0;i<n;i++){
        for(int j=0; j<i;j++){
            if(a[i]<a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    return a[n-1];
}
