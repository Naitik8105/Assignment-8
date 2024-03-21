#include <stdio.h>
void func(int *p, int n)
{
    int temp = *(p + n - 1);
    for (int i = n - 1; i > 0; i--)
    {
        *(p + i) = *(p + (i - 1));
    }
    *p = temp;
}
int main()
{
    int array[3];
    int x, y, z, *p = array, size = 3;
    printf("Enter the values of x,y and z : ");
    scanf("%d %d %d", &x, &y, &z);
    *(array) = x;
    *(array + 1) = y;
    *(array + 2) = z;
    
    func(p, size);
    printf("x=%d ,y=%d ,z=%d\n", *(array), *(array + 1), *(array + 2));
    return 0;
}