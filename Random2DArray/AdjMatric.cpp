//
//  AdjMatric.cpp
//  Random2DArray
//
//  Created by Roneil on 15/11/24.
//  Copyright © 2015年 CSCI 6212. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include "AdjMatrix.h"


int NodeCount() {
    ifstream fin("data.txt");
    string s;
    int nodeNumber;
    while(getline(fin,s))
        cout<<"Read from file:"<<s<<endl;
    return nodeNumber;
}



GraphMatrix::CreateGraph(GraphMatrix *matrixGraph) {
    
    ifstream inputData("test.txt");
    string inputString;
    matrixGraph.numVertexes = 0;
    
    while (getline(inputData, inputString) {
        
    }
    matrixGraph.numVertexes
}
