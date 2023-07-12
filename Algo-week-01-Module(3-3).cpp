/*
Graph Representation>>>>
Topic:Adjacency Matrix:2D Array

A->0
B->1
C->2
D->3


A-----B
    /  \
   C----D
0-----1
    /  \
   2----3

totoal node=4
total edge=4

Undirected+Unweighted
matrix::#of nodes * #of nodes
        -> 4*4
        matrix[i][j]=1
        if and only if(i -> j) //hobe jodi akti matro edge use kore i teke j a jaoa jai

0->1
1->0
1->2
2->1
2->3
3->2
3->1
1->3




*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
int nodes = 4;
//int matrix[nodes][nodes];

int matrix[4][4] = {};
//for(int i=0;i<nodes;i++)
//{
   // for(int j=0;j<nodes;j++)
   // {
   //     matrix[i][j]=0;
    //}
//}

for(int i=0;i<nodes;i++)
{
    for(int j=0;j<nodes;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
return 0;


}
