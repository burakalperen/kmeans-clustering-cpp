#include <iostream>
#include <string.h>
#include <vector>
#include "iomanip"
#include <stdexcept>
#include "../include/Kmeans.h"
#include "../include/Visualize.h"

using namespace std;

int main(){
    srand(time(NULL));
    
    int k = 15; // number of clusters
    int iterationNumber = 30; // iteration for KMeans algorithm
    string filePath = "50.txt"; // txt file path
   
    KMeans kmeanAlgorithm;

    // If we get params with cin, plot doesn't hold on the screen. 
    // cout << "Enter k value(number of clusters):";
    // cin >> k;
    // cout << "Enter number of iteration: ";
    // cin >> iterationNumber;

    try{
        kmeanAlgorithm.setClusterNumber(k);
        kmeanAlgorithm.setIterateNumber(iterationNumber);
    }
    catch(invalid_argument &e){
        cout << "\nException: " << e.what() << endl << endl;
        return 0;
    }

    
    kmeanAlgorithm.printParams();
    kmeanAlgorithm.readFile(filePath);
    kmeanAlgorithm.createNodesVector();
    kmeanAlgorithm.startClustering();
    //kmeanAlgorithm.printClusters();
    Visualizer vis;
    vis.drawClusters(kmeanAlgorithm.getDataPoints(), kmeanAlgorithm.getClusters());
    

    return 0;
}