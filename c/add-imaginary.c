#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef struct complexNum{
    int r;
    int i;
} c;

c add (c a, c b){
    c add;
    
    add.r = a.r + b.r;
    add.i = a.i + b.i;
    
    return (add);
}

int main()
{
    c a;
    c b;
    
    a.r = 4;
    a.i = 5;
    
    b.r = 7;
    b.i = 8;
    
    c sum = add(a,b);
    
    printf("Answer: %d + %di", sum.r, sum.i);

}
  