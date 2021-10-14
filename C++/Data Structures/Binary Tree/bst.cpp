// Binary Search Tree - Implemenation in C++
//Insertion annd Searching the element
#include<bits/stdc++.h>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* getNode(int x){
    BstNode* temp = new BstNode;
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}
BstNode* ROOT = NULL;

/* We try to find the correct position of node
    using recursion and when we'll find the suitable
    position we'll find an empty subtree (Node).
*/
void insert(BstNode* ROOT,int x){
    if(ROOT == NULL){                   // if tree is empty, assign a node
        ROOT = getNode(x);
    }
    else if(ROOT->data >= x){       // if data is larger we move to LST.
        insert(ROOT->left, x);
    }
    else if(ROOT->data <= x){       //if data is smaller we move to RST.
        insert(ROOT->right,x);
    }
}
/* Similarly we try to find the best suitable postion 
where we can find the Number, if it's  empty we'll return false
*/
void search(int x){
    if(ROOT == NULL){           // if Tree /Node at expected Positoin is empty
        cout << x<< " Number is not in BST \n";
        return;
    }
    else if(ROOT->data == x){      // if we data = x at expected position
        cout << x << " is in the given BST \n";
        return;
    }
    else if(ROOT->data > x){        // if data is larger we move to LST.
        search(x);
    }
    else if(ROOT->data  < x){       //if data is smaller we move to RST.
        search(x);
    }
}

int main(){
    
    insert(ROOT,10);
    insert(ROOT,11);
    insert(ROOT,230);
    insert(ROOT,100);
    search(10);
    search(15);
    search(100);
}
