/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES*/
#include <stdio.h>
int main()
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
    char *s[] = {"one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++)
    {
	if(i>=1 && i<=9)
        printf("%s\n",s[i-1]);

}
}
