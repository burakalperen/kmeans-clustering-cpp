#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "../include/Clustering.h"
using namespace std;


Clustering::Clustering(){
    // cluster sayısı eğer eksi veya toplam data sayısından fazla ise error ver
    // iterate sayısı eksi veya 0 ise hata ver.
    
    //iterateNumber = it_number;
    //clusterNumber = c_number;


    cout << "Clustering class is created." << endl;
}


Clustering::~Clustering(){
    cout << "Clustering destructor is called." << endl;
}



void Clustering::readFile(const string &fname){
    
    
    ifstream file(fname);
    string word;

    while(getline(file,word))
    {
        lines.push_back(word);
    }
}



void Clustering::createNodesVector(){
    
    vector<string> tempLines = getLines();
    int idCounter = 0;
    string x,y;
    

    for(vector<string>::iterator it = tempLines.begin(); it != tempLines.end(); it++,idCounter++)
    {
        
        string text = *it;
        string space_delimiter = " ";
        vector<string> words{};

        size_t pos = 0;
        pos = text.find(space_delimiter);
        x = text.substr(0, pos);
        text.erase(0, pos + space_delimiter.length());

        pos = text.find(space_delimiter);
        y = text.substr(0, pos);

        dataPoints.push_back(Node(idCounter,stold(x),stold(y)));
    }

}

// setter
void Clustering::setIterateNumber(int number){    
    
    if(number <= 0 ){
        throw invalid_argument("Number of iteration must be positive.");
    }
    else
        iterateNumber = number;  
    
}

void Clustering::setClusterNumber(int clusterNum){
    

    if(clusterNum <= 0){
        throw invalid_argument("Number of cluster must be positive.");
    }

    else
       clusterNumber = clusterNum; 
    
}


// getter
vector<Node> Clustering::getDataPoints(){
    return this->dataPoints;
}

int Clustering::getClusterNumber() const{
    return clusterNumber;
}

int Clustering::getIterateNumber() const{
    return iterateNumber;
}

vector<string> Clustering::getLines() const{
    return lines;
}

void Clustering::printLines(){
    for(vector<string>::iterator it = lines.begin(); it != lines.end(); it++)
        cout << *it << endl;
}
