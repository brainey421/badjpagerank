#include "graph.h"

/* Purely reads through the edge file of a directed graph in
 * BADJ format. */
int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        fprintf(stderr, "Usage: ./readedges [graphfile] [badj|badjt|badjblk|badjtblk] [niterations]\n");
        return 1;
    }
    
    // TODO

    return 0;
}
