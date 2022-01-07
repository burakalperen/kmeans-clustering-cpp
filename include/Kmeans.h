#ifndef KMEANS_
#define KMEANS_H

#include <iostream>
#include <string>
#include <map>
#include <set>

#include "Clustering.h"
using namespace std;



class KMeans:public Clustering
{
    typedef pair<int,int> intpair;

    public:
        KMeans();
        ~KMeans();

        void iterate();
        void initializeKmean();
        void startClustering();
        void createClusters();
        double CalculateEuclidean(const double, const double, const double, const double);
        
        set<intpair> getClusters() const;
        void printClusters() const;
        void printCentroids() const;
        void printParams() const;
    private:
        
        vector<Node> centroids;
        set<intpair> clusters;            


};

#endif