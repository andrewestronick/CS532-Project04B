// Andrew Estronick
// March 5th, 2016
// Computer Science 532 - Advanced Data Structures

#include "tree.h"

Tree::Tree(int size)
{
    node = new int[size];
    this->size = size;

    for(int i=0; i < size; ++i)
        node[i]=-1;
}


Tree::~Tree()
{
    delete node;
}


bool Tree::intersect(int firstNode, int secondNode)
{
    return (pcfind(firstNode) == pcfind(secondNode));
}


int Tree::pcfind(int searchNode)
{
    if(node[searchNode] < 0)
        return searchNode;

    return node[searchNode] = pcfind(node[searchNode]);
}


void Tree::printArray()
{
    for(int i=0; i < size; ++i)
        std::cout << node[i] << "  ";

    std::cout << std::endl;
}


void Tree::wunion(int firstNode, int secondNode)
{
    if(!intersect(firstNode, secondNode))
    {
        int firstRoot = pcfind(firstNode);
        int secondRoot = pcfind(secondNode);

        if(node[secondRoot] < node[firstRoot])
        {
            node[secondRoot] += node[firstRoot];
            node[firstRoot] = secondRoot;
        }
        else
        {
            node[firstRoot] += node[secondRoot];
            node[secondRoot] = firstRoot;
        }
    }
}
