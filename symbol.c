#include <stdio.h>
int main() {
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    int res = !(ch>='A')&&(ch<='Z') && !(ch>='a')&&(ch<='z') && !(ch>='0')&&(ch<=0);
    printf("%c is the symbol i.e is:%d",ch,res);
    return 0;
}