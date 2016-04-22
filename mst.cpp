#include "mst.h"

MST::MST(const std::string fileName)
{
    fin.open(fileName);
    if(!fin)
        exit(EXIT_FAILURE);

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
}
