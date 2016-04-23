// Andrew Estronick
// March 5th, 2016
// Computer Science 532 - Advanced Data Structures

#ifndef TREE_H
#define TREE_H

#include<iostream>

class Tree
{
public:

    Tree(int elements);
    ~Tree(void);
    bool intersect(int firstNode, int secondNode);
    int pcfind(int searchNode);
    void printArray(void);
    void wunion(int firstNode, int secondNode);

private:

    int *node;
    int size;
};

#endif // TREE_H
