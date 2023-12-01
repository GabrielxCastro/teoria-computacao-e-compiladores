#include <stdio.h>
#include <stdbool.h>

#define MAX_CITIES 3

int graph[MAX_CITIES][MAX_CITIES];
int inDegrees[MAX_CITIES] = {0};
int outDegrees[MAX_CITIES] = {0};

void addEdge(int from, int to, int distance)
{
    graph[from][to] = distance;
    outDegrees[from]++;
    inDegrees[to]++;
}

int findDistance(int from, int to)
{
    return graph[from][to];
}

bool hasCycleUtil(int v, bool visited[], bool recStack[])
{
    if (!visited[v])
    {
        visited[v] = true;
        recStack[v] = true;

        for (int i = 0; i < MAX_CITIES; i++)
        {
            if (graph[v][i])
            {
                if (!visited[i] && hasCycleUtil(i, visited, recStack))
                {
                    return true;
                }
                else if (recStack[i])
                {
                    return true;
                }
            }
        }
    }
    recStack[v] = false;
    return false;
}

bool hasCycle()
{
    bool visited[MAX_CITIES] = {false};
    bool recStack[MAX_CITIES] = {false};

    for (int i = 0; i < MAX_CITIES; i++)
    {
        if (hasCycleUtil(i, visited, recStack))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    addEdge(0, 1, 450);
    addEdge(0, 2, 500);
    addEdge(1, 0, 1);
    addEdge(2, 0, 2);
    addEdge(2, 1, 600);

    int from, to;
    printf("Informe a cidade de origem (0, 1, 2): ");
    scanf("%d", &from);
    printf("Informe a cidade de destino (0, 1, 2): ");
    scanf("%d", &to);

    int distance = findDistance(from, to);
    if (distance > 0)
    {
        printf("\nComprimento do caminho entre cidade %d e cidade %d: %d km\n\n", from, to, distance);
    }
    else
    {
        printf("\nNao ha caminho direto entre cidade %d e cidade %d.\n\n", from, to);
    }

    if (hasCycle())
    {
        printf("O grafo possui ciclos.\n");
    }
    else
    {
        printf("O grafo nao possui ciclos.\n");
    }

    printf("\nGrau de entrada de cada no:\n");
    for (int i = 0; i < MAX_CITIES; i++)
    {
        printf("Cidade %d: %d\n", i, inDegrees[i]);
    }

    printf("\nGrau de saida de cada no:\n");
    for (int i = 0; i < MAX_CITIES; i++)
    {
        printf("Cidade %d: %d\n", i, outDegrees[i]);
    }

    return 0;
}
