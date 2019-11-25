#include <stdio.h>
#include <stdlib.h>
#include "FileHandler.h"
#include "Graph.h"

int readFile(char *fileName) {
    Graph graph;
    FILE *DBFile = fopen(fileName, "r");
    if(DBFile == NULL)
        return EXIT_FAILURE;
    
    fread(&graph, sizeof(graph), 1, DBFile);
    fclose(DBFile);
    return EXIT_SUCCESS;
}

int writeFile(char *fileName, Graph graph) {
    FILE *DBFile = fopen(fileName, "w");
    if(DBFile == NULL)
        return EXIT_FAILURE;
    fwrite(&graph, sizeof(graph), 1, DBFile);
    fclose(DBFile);
    return EXIT_SUCCESS;
}

int readVehicle(char *fileName) {
    
}