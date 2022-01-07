#include <iostream>
#include <string.h>
#include <cmath>
#include <bits/stdc++.h>
#include <ctime>
#include "../include/Kmeans.h"

using namespace std;

typedef pair<int,int> intpair;


KMeans::KMeans()
{
    cout << "Kmeans object is constructed." << endl;
}

KMeans::~KMeans()
{
    cout << "Kmeans object is destructured." << endl;
}

void KMeans::startClustering()
{
    /*
    Method to run K-means algorithm to call necessary member functions.
    */

    initializeKmean(); // Initalize centroids with k-means++ algorithm after that first cluster process is called. 
    iterate(); // iterate over dataPoints with Kmeans algorithm.

}

void KMeans::initializeKmean()
{

    vector<Node> tempDataPoints = getDataPoints();

    /*
   
    Method to initialize centroids with K-means++ algorithm.
    K-means++ select one random point in data points. First random point will be first centroid.
    For each observation x, determine minimal distance from x to a current cluster center.
    Every observation x has d(x) that minimal distance to nearest cluster center.
    Choose next cluster center from data points by selecting max distances in d(x).
    Repeat step until you have chosen right number of clusters.
   
    */

    int random = rand() % getDataPoints().size();
    //cout << "Random number: " << random << endl; //debug
    centroids.push_back(tempDataPoints.at(random));

    
    for (int i=0; i< getClusterNumber()-1;i++)
    {
    vector<double> distances;


        for(vector<Node>::iterator dataiterator = tempDataPoints.begin();dataiterator!=tempDataPoints.end();++dataiterator)
        {
            vector<double> temp_distances;

            for(vector<Node>::iterator it = centroids.begin();it!=centroids.end();++it)
            {
                
                temp_distances.push_back(CalculateEuclidean((*it).getX(), (*it).getY(), (*dataiterator).getX(), (*dataiterator).getY())); // It keeps the distance of a data point to the cluster centers.
            }

            distances.push_back(*min_element(temp_distances.begin(), temp_distances.end())); // It keeps the distance closest to the cluster center.
        }
    centroids.push_back(tempDataPoints.at(max_element(distances.begin(), distances.end()) - distances.begin())); // make centroid the point with the highest distance from the closest distances to the cluster center.
  
    }

    createClusters();
}

void KMeans::iterate(){

    /*
   
    Method to manage the iterations of the algorithm.
    Firstly update centroids. After that it is clustering again according to the new centroids.
   
    */
    vector<Node> tempDataPoints = getDataPoints();

    vector<double> totalX;
    vector<double> totalY;
    vector<double> temp_distances;

    cout << "************" << endl;
    cout << "Training..." <<endl;

    for (int i = 0; i < getIterateNumber(); i++)
    {

       
        centroids.clear();
        for(int j = 0; j < getClusterNumber(); j++)
        {
            
             for (set<intpair>::iterator it = clusters.begin();it!=clusters.end();it++)
             {
                
                if((*it).second == j)
                {
                        
                        totalX.push_back(tempDataPoints[(*it).first].getX()); // keep sum of x coordinates in each cluster
                        totalY.push_back(tempDataPoints[(*it).first].getY()); // keep sum of y coordinates in each cluster
                }
            }

            double avgX = accumulate(totalX.begin(), totalX.end(),0) / totalX.size(); //calculate average of x coordinates in each cluster
            double avgY = accumulate(totalY.begin(), totalY.end(),0) / totalY.size(); //calculate average of y coordinates in each cluster
            totalX.clear(); 
            totalY.clear();


            for(vector<Node>::iterator dataiterator = tempDataPoints.begin();dataiterator!=tempDataPoints.end();++dataiterator)
            {
                
                temp_distances.push_back(CalculateEuclidean(avgX, avgY, (*dataiterator).getX(), (*dataiterator).getY()));
            }
            
            centroids.push_back(tempDataPoints.at(min_element(temp_distances.begin(), temp_distances.end()) - temp_distances.begin())); // push new centroids

            temp_distances.clear();
        }

    createClusters(); // again cluster with new centroid points.
    }

    


}

void KMeans::createClusters(){
    /*

    Method to cluster data points.
    
    */
    
    vector<Node> tempDataPoints = getDataPoints();
    vector<double> temp_distances;
    int classNumber;

    clusters.clear();

    for(vector<Node>::iterator dataiterator = tempDataPoints.begin();dataiterator!=tempDataPoints.end();++dataiterator)
        {
           
            for(vector<Node>::iterator it = centroids.begin();it!=centroids.end();++it)
            {
                
                temp_distances.push_back(CalculateEuclidean((*it).getX(), (*it).getY(), (*dataiterator).getX(), (*dataiterator).getY())); // we keep the distance of the point from the cluster centers

            }


        classNumber = min_element(temp_distances.begin(), temp_distances.end()) - temp_distances.begin(); // assign point to class by looking at distance from cluster center
        
        intpair x = make_pair((*dataiterator).getId(),classNumber);
        clusters.insert(x); // push cluster set
        temp_distances.clear();


        }

}

double KMeans::CalculateEuclidean(const double x1, const double y1, const double x2, const double y2){
    /*

    Method to compute calculate euclidean distance between two points.
    @arg x1 first point x
    @arg y1 first point y
    @arg x2 second point x
    @arg y2 second point y  
    @returns euclidean distance

    */


    return sqrt( pow((x1-x2),2) + pow((y1-y2),2));
}

set<intpair> KMeans::getClusters(void) const{
    /*

    Method to return set includes of data points identity and assigned class.
    @return set [identity,assigned_class]

    */
    
    return clusters;
}

void KMeans::printCentroids() const{

    cout << "*****************" << endl;
    cout << "Centroids: " << endl;
    for(vector<Node>::const_iterator it = centroids.begin();it!=centroids.end();++it)
        cout << "Identity: " << (*it).getId() << "\t" << "Coordinates: " << "(" << (*it).getX() << "," << (*it).getY()  << ")" << endl;
    cout << "*****************" << endl;

}

void KMeans::printClusters() const{

    set<intpair> tempCluster = getClusters();


    cout << "*****************" << endl;
    cout << "Clusters: " << endl;
    for (set<intpair>::iterator it = tempCluster.begin();it!=tempCluster.end();it++)
        cout << "Identity: " << (*it).first << "\t" << "Class: " << (*it).second << endl;

    cout << "*****************" << endl;

}


void KMeans::printParams() const{
    cout << "****************************" << endl;
    cout << "Parameters of Kmeans algorithm"<< endl;
    cout << "Class number: " << getClusterNumber() << endl;
    cout << "iteration number: " << getIterateNumber() << endl;
    cout << "****************************" << endl;
}