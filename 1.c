#include <stdio.h>
#include <math.h>
int len(int n){
    int k = 0;
    while (n > 0){
        k += 1;
        n /=10;
    }
    return k;
}

int ab(int a){
 if (a<0){
 a = a*(-1);
 }
 return a;}
 
int main(){
    int n,h,g,s=0,k1=0,k2=0,k3=0, r, p;
    scanf("%d", &n);
    p = n;
    n = ab(n);
    k3 = len(n);
    r = n;
    while (n>0){
        k1 += 1;
        k2 = len(n);
        g = (int)pow(10,k3-k2);
        h = (int)pow(10,k3-k2+1);

        if (k1 %2 != 0 && k1 != k3){
            s += ((r/h) % 10)*g + ((r/g) % 10)*h;   
        }
        else if (k1 %2 != 0){
            s += r / (int)pow(10,k3-1)* pow(10,k3-1);
        }
    n = n / 10;
}

if (p < 0){
    printf("%d\n", -s);
}
else{
    printf("%d\n", s);
}  
}
