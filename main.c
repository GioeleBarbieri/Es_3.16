#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("inserisci il primo valore numerico: ");
    scanf("%d", &n1);
    printf("inserisci il secondo valore numerico: ");
    scanf("%d", &n2);
    printf("inserisci il terzo valore numerico: ");
    scanf("%d", &n3);

    if (n1>n2 && n1>n3)
    {
        printf("il numero piu' grande e' %d", n1);
    }
    if (n2>n1 && n2>n3)
    {
        printf("il numero piu' grande e' %d", n2);
    }
    if (n3>n2 && n3>n1)
    {
        printf("il numero piu' grande e' %d", n3);
    }

    return 0;

}
