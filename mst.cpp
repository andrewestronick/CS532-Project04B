#include <iostream>
#include "mst.h"

MST::MST(const std::string fileName)
{
    fin.open(fileName);
    if(!fin)
        exit(EXIT_FAILURE);

    fin >> size;

    for(int i = 0, start, end, weight; i < 9; ++i)
    {
        fin >> start >> end >> weight;
        edges.emplace(start, end, weight);
    }

    for(;!edges.empty();)
    {
        Edge e = edges.top();
        edges.pop();
        std::cout << e.getStart() << "<---" << e.getWeight() << "--->" << e.getEnd() << std::endl;
    }
    /*

    while(std::getline(fileName, line))
    {
        std::string code;
        char character, colon;
        int frequency;

        std::stringstream(line) >> character >> colon >> frequency;
        code = character;
        node *tempNode = new node(code, frequency);
        queue.push(tempNode);
        nodePtrs.insert(nodePtrs.begin(), tempNode);
    }
    */

    fin.close();
}
