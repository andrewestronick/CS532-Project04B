#include "mst.h"

MST::MST(const std::string fileName)
{
    fin.open(fileName);
    if(!fin)
        exit(EXIT_FAILURE);

    fin >> size;

    vertices = new Tree(size);

    for(int i = 0, start, end, weight; i < 9; ++i)
    {
        fin >> start >> end >> weight;
        edges.emplace(start, end, weight);
    }

    fin.close();

    while(!edges.empty())
    {
        Edge e = edges.top();
        edges.pop();
        if(!vertices->intersect(e.getStart(), e.getEnd()))
        {
            vertices->wunion(e.getStart(), e.getEnd());
            results.emplace_back(e);
        }
    }
}


MST::~MST()
{
    delete vertices;
}


void MST::printTree()
{
    for(unsigned i = 0; i < results.size(); ++i)
        std::cout << results[i].getStart() << "<---" << results[i].getWeight() << "--->" << results[i].getEnd() << std::endl;
}
