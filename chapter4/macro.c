#include <stdio.h>

#define max(A, B) ((A) > (B) ? (A) : (B))

int main(int argc, char const *argv[])
{
    int i = 1;
    int j = 2;

    // Equal to ((i++) > (j++) ? (i++) : (j++))
    // 1. Compares 1 > 2
    // 2. After comparison, i++ is 2, j++ is 3
    // 3. (B) part is select to execute.
    // 4. Since j++ is a postfix, j is returned, which is 3 now and assigned to k.
    // 5. Then j++ is executed, increase j to 4.
    int k = max(i++, j++);

    // i is 2
    printf("i: %d\n", i);
    // j is 4
    printf("j: %d\n", j);
    // Max 3
    printf("Max: %d\n", k);

    return 0;
}
