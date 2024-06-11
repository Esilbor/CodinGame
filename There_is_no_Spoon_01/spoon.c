#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct s_data
{
    int x1;
    int x2;
    int x3;
    int y1;
    int y2;
    int y3;
}   t_data;

void    init_data(t_data *data)
{
    data->x1 = -1;
    data->x2 = -1;
    data->x3 = -1;
    data->y1 = -1;
    data->y2 = -1;
    data->y3 = -1;
}
/**
 * Don't let the machines win. You are humanity's last hope...
 **/

void    get_next_node(char *line, int x,)
{
    int i = 0;
    while (line[i])
    {
        if (line[i] == '0') 
        {
            // printf("%d %d ",i, x);
            // break ;
            
        }
        i++;
    }
    // printf("\n");
}

int main()
{
    int x1 = -1;
    int y1 = -1;
    int x2 = -1;
    int y2 = -1;
    int x3 = -1;
    int y3 = -1;
    // t_data *data;
    // the number of cells on the X axis
    int width;
    scanf("%d", &width);
    // the number of cells on the Y axis
    int height;
    scanf("%d", &height); fgetc(stdin);
    // init_data(data);
    for (int i = 0; i < height; i++)
    {
        // width characters, each either 0 or .
        char line[32];
        scanf("%[^\n]", line); fgetc(stdin);
        get_next_node(line, i);
        // print_under_node
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");


    // Three coordinates: a node, its right neighbor, its bottom neighbor
    printf("0 0 1 0 0 1\n 1 0 -1 -1 -1 -1\n0 1 -1 -1 -1 -1\n");

    return 0;
}