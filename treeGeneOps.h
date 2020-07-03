#include "basicFunctions.h"

GOftn* createRandomNode(int depth);
GOftn* createRandomTree(int depth=0);
void printTree(GOftn* inTree, int depth=0);
void mutateTree(GOftn** inTree, int depth=0);
void crossOver(GOftn* treeToAlter, GOftn* donatingTree);
void deleteTree(GOftn* inTree);
bool treeSortPredIncre(GOftn* t1, GOftn* t2);
