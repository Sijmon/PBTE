/**
 * @struct edge 
 * this struct caontains the information used to connect verticies in the graph.
 */
typedef struct Edge {
    /**
     * This is the distance between the two verticies
    */
    double distance;
    
    /**
     * This is the calculated weight for this edge
     */
    double weight;
} Edge;
