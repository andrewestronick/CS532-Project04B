#ifndef MST_H
#define MST_H

#include <fstream>
#include <string>
#include <queue>
#include <vector>
#include "edge.h"

class MST
{
public:

    MST(const std::string fileName);

private:

    std::ifstream fin;
    int size;
    std::priority_queue<Edge, std::vector<Edge>, edgeCompare> edges;
};

#endif // MST_H
