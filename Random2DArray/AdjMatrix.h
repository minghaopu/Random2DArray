//
//  AdjMatrix.h
//  Random2DArray
//
//  Created by Roneil on 15/11/24.
//  Copyright © 2015年 CSCI 6212. All rights reserved.
//



#ifndef AdjMatrix_h
#define AdjMatrix_h

#include <string>
using namespace std;

#define ERROR 0
#define OK 1
#define FALSE 0
#define TRUE 1
#define MAX_VERTEX_NUM 20
#define INFINITY INT_MAX
#define MAXSIZE 100
#define OVERFLOW -2
typedef int VertexType;
typedef int AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

class GraphMatrix {
    
public:
//    void CreateGraph(GraphMatrix *matrixGraph);  //创建邻接矩阵图
//    void ClearGraph(GraphMatrix *matrixGraph);   //清空矩阵
//    void OutGraph(GraphMatrix *matrixGraph);     //输出邻接矩阵
    GraphMatrix();
    // 创建图(用已提供的矩阵)
    GraphMatrix(char vexs[], int vlen, char edges[][2], int elen);
    ~GraphMatrix();
    
    VertexType vexs[MAX_VERTEX_NUM];
    
    AdjMatrix arcs;
    
    int numVertexes,numEdges;
    
};


#endif /* AdjMatrix_h */
