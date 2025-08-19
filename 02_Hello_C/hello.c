#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
    printf("=== command Line Arguments ===\n");
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    printf("\n");

    printf("=== Environment Variables ===\n");
    for (int i = 0; envp[i] != NULL; i++)
    {
        printf("%s\n", envp[i]);
    }
    printf("\n");
   
    FILE* file = fopen("sample.txt", "r");
    if (file == NULL)
    {
        perror("Failed to open sample.txt");
        return 1;
    }
   
    char buffer[256];
    printf("=== Contents of sample.txt ===\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(file);
    return 0;
}
