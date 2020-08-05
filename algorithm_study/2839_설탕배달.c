#include <stdio.h>

int main()
{
    int N, num_sugar = 0;
    scanf("%d", &N);

    while(N > 0)
    {
        if((N%5) == 0)
        {
            num_sugar+=1;
            N -= 5;
        }
        else if((N%3) == 0)
        {
            num_sugar += 1;
            N -= 3;
        }
        else if (N>5)
        {
            N-=5;
            num_sugar++;
        }
        else
        {
            num_sugar = -1;
            break;
        }
    }
    printf("%d\n", num_sugar);
    return 0;
}
