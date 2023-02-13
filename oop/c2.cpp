#include <stdio.h>
#include <stdlib.h>

#define NUM_QUESTIONS 30
#define NUM_CHOICES 4

int main(int argc, char *argv[])
{
    // Create the OMR sheet
    char omr_sheet[NUM_QUESTIONS][NUM_CHOICES];

    // Initialize the OMR sheet with answers
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        for (int j = 0; j < NUM_CHOICES; j++)
        {
            // Assume the correct answer is choice 'A' for every question
            omr_sheet[i][j] = (j == 0) ? 'X' : ' ';
        }
    }

    // Read in the student's answers from a file
    FILE *fp = fopen("answers.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening answers file\n");
        return 1;
    }
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        fscanf(fp, "%c", &omr_sheet[i][0]);
    }
    fclose(fp);

    // Grade the OMR sheet
    int num_correct = 0;
    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        if (omr_sheet[i][0] == 'X')
        {
            num_correct++;
        }
    }

    // Print the results
    printf("Number of correct answers: %d\n", num_correct);

    return 0;
}
