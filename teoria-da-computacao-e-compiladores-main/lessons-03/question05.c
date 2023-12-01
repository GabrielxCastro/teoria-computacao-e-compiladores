#include <stdio.h>
#include <string.h>

#define MAX_CITIES 4

int graph[MAX_CITIES][MAX_CITIES];

void insertDistance(int city1, int city2, int distance)
{
    if (city1 >= 0 && city1 < MAX_CITIES && city2 >= 0 && city2 < MAX_CITIES)
    {
        graph[city1][city2] = distance;
        graph[city2][city1] = distance;
    }
}

int countRoads(int city)
{
    int roads = 0;
    for (int i = 0; i < MAX_CITIES; i++)
    {
        if (graph[city][i] > 0)
        {
            roads++;
        }
    }
    return roads;
}

void printMatrix()
{
    for (int i = 0; i < MAX_CITIES; i++)
    {
        printf("--------------------\n");
        for (int j = 0; j < MAX_CITIES; j++)
        {
            printf("| ");
            printf("%d", graph[i][j]);
            printf(" |");
        }
        printf("\n");
    }
    printf("--------------------\n\n");
}

int findDistance(int city1, int city2)
{
    if (city1 >= 0 && city1 < MAX_CITIES && city2 >= 0 && city2 < MAX_CITIES)
    {
        if (graph[city1][city2] > 0)
        {
            return graph[city1][city2];
        }
        else
        {
            for (int i = 0; i < MAX_CITIES; i++)
            {
                if (i != city1 && graph[city1][i] > 0)
                {
                    int distance = findDistance(i, city2);
                    if (distance > 0)
                    {
                        return graph[city1][i] + distance;
                    }
                }
            }
        }
    }
    return 0;
}

int main()
{
    memset(graph, 0, sizeof(graph));

    insertDistance(0, 1, 4);
    insertDistance(0, 3, 5);
    insertDistance(1, 2, 2);
    insertDistance(1, 3, 4);
    insertDistance(2, 3, 3);

    printf("Matriz de distancias:\n");
    printMatrix();

    printf("Quantidade de estradas saindo da cidade 1: %d\n\n", countRoads(1));

    int distance = findDistance(0, 3);
    if (distance > 0)
    {
        printf("Distancia entre cidade 0 e cidade 3: %d\n", distance);
    }
    else
    {
        printf("Nao ha estrada ligando cidade 0 e cidade 3.\n");
    }

    return 0;
}
