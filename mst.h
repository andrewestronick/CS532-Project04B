#ifndef MST_H
#define MST_H

#include <fstream>
#include <string>

class MST
{
public:

    MST(const std::string fileName);

private:

    std::ifstream fin;
    int size;
};

#endif // MST_H
