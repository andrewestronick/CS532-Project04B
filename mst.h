#ifndef MST_H
#define MST_H

#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <vector>
#include "edge.h"
#include "tree.h"

class MST
{
public:

    MST(const std::string fileName);
    ~MST();
    void printTree(void);

private:

    std::ifstream fin;
    int size;
    std::priority_queue<Edge, std::vector<Edge>, edgeCompare> edges;
    Tree *vertices;
    std::vector<Edge> results;
};

#endif // MST_H
