#include <iostream>
#include <string.h>
#include "node.h"
#include "iomanip"
#include <vector>
#include <set>
#include "../include/Visualize.h"
#include "matplot/matplot.h"

using namespace std;
using namespace matplot;


Visualizer::Visualizer()
{
    // cout << "Visualize constructor is called." << endl;

}



Visualizer::~Visualizer()
{

    //cout << "Visualizer destructor is called." << endl;

}

void Visualizer::drawClusters(const vector<Node> &dataPoints, const set<intpair> &identityAndClusterSet)
{
    set<intpair>::const_iterator it = identityAndClusterSet.begin();
    for(vector<Node>::const_iterator dataiterator = dataPoints.begin();dataiterator!=dataPoints.end();++dataiterator)
    {
        xCoorOfNodes.push_back((*dataiterator).getX());
        yCoorOfNodes.push_back((*dataiterator).getY());
        classColor.push_back((*it).second);
        it++;

    }

    auto l = scatter(xCoorOfNodes, yCoorOfNodes,8.0,classColor);
    l->marker_face(true);
    show();
    

    string save_path = "img.jpg"; 
    save("Plot.jpg");
    cout << "****************************" << endl;
    cout << "Plot saved: " << save_path << endl;    
    cout << "****************************" << endl;

    

}


