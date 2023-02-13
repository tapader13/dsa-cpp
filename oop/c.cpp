#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Open the "answers.txt" file for writing
    FILE *fp = fopen("answers.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating answers file\n");
        return 1;
    }

    // Write the answers to the file
    fprintf(fp, "B\nC\nD\nA\n");

    // Close the file
    fclose(fp);

    return 0;
}
