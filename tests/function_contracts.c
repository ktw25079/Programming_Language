/* Test the public exercise functions without changing their standalone mains. */
#include <assert.h>
#define main copy_example_main
#include "../week10/assignment04_copy.c"
#undef main
#define main recursion_example_main
#include "../week11/assignment03_recursive_sum.c"
#undef main
#define main minimum_example_main
#include "../week13/assignment02_minimum.c"
#undef main
#define main stack_example_main
#include "../week12/assignment02_03_stack.c"
#undef main
#include "../week12/guess.c"
int guess;

int main(void)
{
    int from[]={7,-2,9}, to[]={11,12,13,14};
    copyarray(from,to,0);
    assert(to[0]==11 && to[3]==14);
    copyarray(from,to,3);
    from[0]=100;
    assert(to[0]==7 && to[1]==-2 && to[2]==9 && to[3]==14);
    assert(nplus(0)==0 && nplus(1)==1 && nplus(100)==5050);
    double one[]={-2.5}, tied[]={4.0,-3.5,-3.5,8.0};
    assert(find_minimum(one,1)==one);
    assert(find_minimum(tied,4)==tied+1);
    int value=42;
    assert(isempty() && !isfull() && !pop(&value) && value==42);
    assert(push(-1) && push(0) && push(9) && isfull());
    assert(!push(100) && top==2);
    assert(pop(&value) && value==9);
    assert(push(5) && pop(&value) && value==5);
    assert(pop(&value) && value==0);
    assert(pop(&value) && value==-1 && isempty());
    guess=50;
    assert(testNum(49)==1 && testNum(50)==0 && testNum(51)==-1);
    return 0;
}
