#include <iostream>
#include <string.h>
#include "../include/node.h"
#include "iomanip"

using namespace std;


Node::Node(const int id, const double x_, const double y_):identity(id),x(x_),y(y_)
{
   //print();   
   
}


Node::~Node(){

    //cout << "Node destructor is called." << endl;

}

// Get functions
int Node::getId() const{
    return this->identity;
}

double Node::getX() const{
    return this->x;
}

double Node::getY() const{
    return this->y;
}

void Node::print() const{
    cout << "Created node(id,x,y): " << "(" << getId() << ", " << getX() << ", " << getY() << ")" << endl;   
} 
