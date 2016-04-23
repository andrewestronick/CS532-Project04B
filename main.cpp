#include <iostream>
#include "mst.h"

using namespace std;

int main(int argc, char *argv[])
{
    const string path = "F:/Andrew/_code/CS532/CS532-Project04B/";
    // const string path = "C:/Users/Andrew/Documents/QT/CS532-Project04B/";

    MST mst(path + "input.txt");
    mst.printTree();

    return 0;
}
