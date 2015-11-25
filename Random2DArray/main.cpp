//
//  main.cpp
//  Random2DArray
//
//  Created by Roneil on 15/11/24.
//  Copyright © 2015年 CSCI 6212. All rights reserved.
//

#include<iostream>
#include<fstream>
#include<time.h>
#include<iomanip>//控制输出格式的头文件
#include<stdlib.h>
#define N 1000
using namespace std;

int CreateArray();//函数原型声明
int ReadArray();//函数原型声明

int main()
{
    CreateArray();
    ReadArray();
    return 1;
}

int CreateArray()
{//生成一个数据元素随机生成的二维数组
    ofstream outfile;//定义文件输出流
    outfile.open("MyArray.txt",ios::out);
    int i,k,j;
    srand((unsigned)time(NULL));
    outfile.setf(ios::left);//设置数字输出时的对齐方式，可只设置一次
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            k=rand()%99;
            //outfile.width(3);//设置数字输出时的宽度，每一次输出都要设置
            outfile<<k<<" ";
        }
        outfile<<endl<<endl;
    }
    outfile.close();
    cout<<endl;
    return 1;
}
int ReadArray()
{//从文件中读出二维数组并存入二维数组Array[][]
    int Array[N][N],i,j;
    ifstream infile("MyArray.txt",ios::in);//定义输入文件流
    cout.setf(ios::right);//设置数字输出时的对齐方式，只设置一次即可
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {//将文件中的数据读二维数组
            infile>>Array[i][j];
        }
    for(i=0;i<N;i++)
    {//在控制台输出数组
        for(j=0;j<N;j++)
        {
            cout.width(4);//设置数字输出时的宽度，每一次输出都要设置
            cout<<Array[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
    infile.close();
    return 1;
}