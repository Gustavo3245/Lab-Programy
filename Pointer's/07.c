#include <stdio.h>
#include <string.h>

#define linhas 3
#define coluna 50

int main(void)
{
    char names[linhas][coluna] = {"joao pedro", "gabriel victor", "aaaaa"};
    for(int i = 0; i < linhas - 1; i++)
    {
        int posmin = i;
        for(int j = i + 1; j < linhas; j++)
        {
            if(strcmp(names[j], names[posmin]) < 0)
            {
                posmin = j;
            }
        }

        if(posmin != i)
        {
            char buffer[coluna];
            strcpy(buffer, names[i]);
            strcpy(names[i], names[posmin]);
            strcpy(names[posmin], buffer);
        }
    }

    printf("Resultado\n");
    for(int i = 0; i < linhas; i++)
    {
        printf("%s\n", names[i]);    
    }
}
