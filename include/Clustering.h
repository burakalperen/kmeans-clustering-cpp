#ifndef CLUSTERING
#define CLUSTERING_H

#include <iostream>
#include <string>
#include <vector>
#include "node.h"
using namespace std;

class Clustering{

    public:
        Clustering();
        ~Clustering();

        void createNodesVector();
        void readFile(const string &);
        void printLines();

        void setIterateNumber(int);
        void setClusterNumber(int);

        int getClusterNumber() const;
        int getIterateNumber() const;
        vector<Node> getDataPoints();
        vector<string> getLines() const;

    private:
        int clusterNumber;
        int iterateNumber;
        vector<Node> dataPoints;
        vector <string> lines;


};


#endif