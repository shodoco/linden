/**
 * BSS segment (uninitialized global and static variables)
 */
char pear[40];
static double peach;
/**
 * Data segment (initialized global and static variables)
 */
int mango = 13;
static long melon = 2013;

int main(void)
{
    /**
     * Local variables live on stack segment
     */
    int i = 3, j, *ip;
    ip = malloc(sizeof(i));
    pear[5] = i;
    peach = 2.0 * mango;
}
