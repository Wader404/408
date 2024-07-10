#include <stdio.h>

#include "include/ack_stack.h"

int ack_recursive(int m, int n)
{
    if (m == 0) {
        return (n + 1);
    } else if (m != 0 && n == 0) {
        return ack_recursive(m - 1, 1);
    } else {
        return ack_recursive(m - 1, ack_recursive(m, n - 1));
    }
}

int ack_non_recursive(int m, int n)
{
    int result = 0;
    Ack_stack as;
    init_ack(&as);
    elem e;
    e.m = m;
    e.n = n;
    push(&as, e);

    while (!is_empty(as)) {
        e = get_top(as);
        while (e.m > 0 && e.n > 0) {
            e.n--;
            push(&as,e);
        }
        while (e.m > 0 && e.n == 0) {
            pop(&as);
            e = get_top(as);
            e.m--;
            e.n = 1;
            push(&as, e);
        }
        while (e.m == 0) {
            result = e.n + 1;
            pop(&as);
            e = get_top(as);
            if (e.m == -1) {
                break;
            }
            e.m--;
            e.n = result;
            pop(&as);
            push(&as, e);
        }
    }

    return result;
}

int main(void)
{
    printf("input 2 and 1(recursive): %d\n",ack_recursive(2, 1));

//calculating process:
//    ack(2,1) = ack(1, ack(2,0))
//             = ack(1, ack(1,1))
//             = ack(1, ack(0, ack(1, 0)))
//             = ack(1, ack(0, ack(0, 1)))
//             = ack(1, ack(0, 2))
//             = ack(1, 3)
//             = ack(0, ack(1, 2))
//             = ack(0, ack(0, ack(1,1)))
//             = ack(0, ack(0, ack(0, ack(1,0))))
//             = ack(0, ack(0, ack(0, ack(0,1))))
//             = ack(0, ack(0, ack(0, 2)))
//             = ack(0, ack(0, 3))
//             = ack(0, 4)
//             = 5
    
    printf("input 2 and 1(non-recursive): %d\n", ack_non_recursive(2, 1));

    return 0;
}
