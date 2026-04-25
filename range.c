#include <stdio.h>
int main() {
    int a;
    printf("Enter the character\n");
    scanf("%d",&a);
    int res = (a>=3)&&(a<=13);
    printf("%d is the range 3-13 i.e is:%d",a,res);
    return 0;
}