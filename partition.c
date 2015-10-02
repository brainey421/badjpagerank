#include "graph.h"

/* Partition a BADJ/BADJT graph into a BADJBLK/BADJTBLK graph. */
int main(int argc, char *argv[])
{
    // Check arguments
    if (argc < 4)
    {
        fprintf(stderr, "Usage: ./partition [graphfile] [badj|badjt] [outdirectory]\n");
        return 1;
    }
    
    // Verify BADJ format
    char format;
    if (!strcmp(argv[2], "badj"))
    {
        format = BADJ;
    }
    else if (!strcmp(argv[2], "badjt"))
    {
        format = BADJT;
    }
    else
    {
        fprintf(stderr, "Unknown format.\n");
        return 1;
    }

    // Initialize graph
    graph g;
    if (initialize(&g, argv[1], format))
    {
        return 1;
    }

    // Print numbers of nodes and edges
    fprintf(stderr, "Nodes: %llu\n", g.n);
    fprintf(stderr, "Edges: %llu\n\n", g.m);

    // Partition graph
    partition(&g, argv[3]);

    return 0;
}
