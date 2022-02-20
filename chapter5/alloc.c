#define ALLOCSIZE 10000

// Storage for alloc
static char allocbuf[ALLOCSIZE];

// Next free position
static char *allocp = allocbuf;

char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
    } else {
        return 0;
    }
}