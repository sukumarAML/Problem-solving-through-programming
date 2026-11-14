/* if the structure is very large then passing the copy of the whole structure is not efficient.
pass the address fo the structure
use the arrow operator to access the structure members inside the called functions 
*/

#include <stdio.h>
struct point{
    int x;
    int y;
};

void print(struct point *ptr)
{
printf("%d\n %d\n", ptr->x, ptr->y);
}

int main()
{
    struct point p1 = {23 , 45};
    struct point p2 = {56 , 90};
    print(&p1);
    print(&p2);
    return 0;
}