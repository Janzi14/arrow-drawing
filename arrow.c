#include <stdio.h>

int get_height();
void draw_tree(int height);

const int MAX_HEIGHT = 20;
const int MIN_HEIGHT = 2;

int main(void)
{
    int height = get_height();
    draw_tree(height);
}

int get_height()
{
    int size;

    printf("Height: ");
    while (1)
    {
        if (scanf("%d", &size) == 1)
        {
            if (size >= MIN_HEIGHT && size <= MAX_HEIGHT)
            {
                break;
            }
        }
        while (getchar() != '\n')
            ;
        printf("Please enter a number between %i and %i: ", MIN_HEIGHT, MAX_HEIGHT);
    };
    return size;
}

void draw_tree(int height)
{
    int max_width = height * 2 + 1;
    int midline = height + 1;

    for (int i = 0; i < height; i++)
    {
        int left_space = height - i;
        int right_space = height + i + 2;

        for (int j = 1; j <= max_width; j++)
        {
            if (j == midline || j < left_space || j > right_space)
            {
                printf("-");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}