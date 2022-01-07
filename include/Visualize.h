#ifndef VISUALIZE
#define VISUALIZE_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>

using namespace std;



class Visualizer{
    typedef pair<int,int> intpair;
    public:
        Visualizer();
        ~Visualizer();

    void drawClusters(const vector<Node> &dataPoints, const set<intpair> &identityAndClusterSet);

    public:
    vector <double> xCoorOfNodes;
    vector <double> yCoorOfNodes;
    vector <double> classColor;


};

#endif