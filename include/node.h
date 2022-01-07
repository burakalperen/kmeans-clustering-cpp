#ifndef NODE
#define NODE_H

#include <iostream>
#include <string>
#include <map>

using namespace std;



class Node{

    public:
        Node(const int, const double, const double);
        ~Node();

        int getId() const;
        double getX() const;
        double getY() const;
        void print() const;     



    private:
        const int identity;
        const double x;
        const double y;


};


















#endif