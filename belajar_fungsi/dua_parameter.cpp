#include <iostream>
using namespace std;

void add(int a, int b){
   printf("%d + %d = %d\n", a, b, a+b);
}

int main(){
    add(1, 4);
    add(2, 5);
    return 0;
}