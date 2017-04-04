#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
        int numInputs;
        int *input;

        printf("Total number of inputs: ");
        scanf("%d", &numInputs);

        input = malloc(numInputs * sizeof(int));

        int i;

        for (i=0; i < numInputs; i++)
        {
                printf("Input #%d: ", i+1);
                scanf("%d", &input[i]);
        }

        // Do Stuff, for example print them:
        for (i=0; i < numInputs; i++)
        {
                printf("Input #%d = %d\n", i+1, input[i]);
        }

        free(input);
}
