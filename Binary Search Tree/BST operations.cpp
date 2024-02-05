#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

class BST{
    Node *root;
    public:
    BST(){
        this->root=NULL;
    }
    // Function to insert values
    void insert(int value){
        root=insert(value,root);
    }
    Node* insert(int value,Node *node){
        if(node==NULL){
            Node* newNode=new Node(value);
            return newNode;
        }
        if(value>node->data){
            node->right=insert(value,node->right);
        }else{
            node->left=insert(value,node->left);
        }
        return node;
    }
    
    // Level Order Traversal
    void levelOrder(){
        levelOrder(root);
    }
    void levelOrder(Node *root){
        if(root == NULL){  // Tree is empty
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node *temp=q.front();
            q.pop();
            if(temp==NULL){
                cout<<endl;
                if(q.empty()){   // no elements remaining
                    break;
                }else{
                    q.push(NULL);    // if not empty then we khow there are elenents present so add Null 
                }
            
            }else{
                cout<<temp->data<<" ";
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }

        
        }

    }

                           // Types of Traversals

// i) Pre ordered Travals
void preOrder(){
    preOrder(root);
}

void preOrder(Node* node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}

// ii) In Order Travals

void inOrder(){
    inOrder(root);
}

void inOrder(Node* node){
    if(node==NULL){
        return;
    }
    inOrder(node->left);
    cout<<node->data<<" ";
    inOrder(node->right);
}

// iii) Post Order Travals

void postOrder(){
    postOrder(root);
}

void postOrder(Node* node){
    if(node==NULL){
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<" ";
}

// Search_Recursively  in BST

bool Search (int value){
    // return Search_Recursively (value,root);
    return Search_Iteratively (value,root);
}

bool Search_Recursively (int value,Node* node){
    if(node==NULL){ // Reach at the end of tree and element not found 
        return false;
    }
    if(value==node->data){  // Element found
        return true;
    }
    if(value>node->data){ // Search_Recursively  on right side of tree
        return Search_Recursively (value,node->right);
    }else{
        return Search_Recursively (value,node->left); // Search_Recursively  on left side of tree
    }
}

bool Search_Iteratively(int value,Node* root){   // space complexity constant
    Node *temp=root;
    while (temp!=NULL){
        if(temp->data==value){
            return true;
        }
        if(temp->data>value){
            temp=temp->left;
        }else{
            temp=temp->right;
        }
    }
        return false;
    

}
// Function to find minimum in the BST

int minValue( ){
    return minValue(root);
}

int minValue(Node* root){
    Node *temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;

}

// Function to find maximum in the BST

int maxValue( ){
    return maxValue(root);
}

int maxValue(Node* root){
    Node *temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;

}

// Function to Delete from BST

void deleteNode(int value){
    root=deleteNode(value,root);
}

Node* deleteNode(int value,Node* node){
    // base case
    if(node==NULL){
        return NULL;
    }
    if(node->data== value){
                    // 0 child case:
        if(node->left==NULL && node->right==NULL){
            delete node;
            return NULL;
        }

                    // 1 child case:
        // left Child
            if(node->left !=NULL && node->right == NULL){
                Node *temp=node->left;
                delete node;
                return temp;
            }
        // right Child
            if(node->right!=NULL && node->left == NULL){
                Node *temp=node->right;
                delete node;
                return temp;
            }

                    // 2 child case:
        if(node->left!=NULL && node->right!=NULL){
            int min=minValue(node->right);
            root->data=min; //replace node value with min 
            root->right=deleteNode(min,node->right);
            return node;
            }            
        

    }else if(node->data >value){
        node->left=deleteNode(value,node->left);
        return node;

    }else{
        node->right=deleteNode(value,node->right);
        return node;
    }
}





};

int main(){
    BST bst;
    bst.insert(10);
    bst.insert(9);
    bst.insert(21);
    bst.insert(7);
    bst.insert(27);
    bst.insert(5);
    bst.insert(4);
    
    cout<<"Printing Level order traversal"<<endl;
    bst.levelOrder();
    cout<<endl;
    cout<<"Printing Pre order traversal"<<endl;
    bst.preOrder();
    cout<<endl;
    cout<<"Printing In order traversal"<<endl;
    bst.inOrder();
    cout<<endl;
    cout<<"Printing Post order traversal"<<endl;
    bst.postOrder();

    cout<<endl;
    cout<<bst.Search (85)<<endl;// 0 Fslse 1 True

    cout<<"Minimun value of Node in BST is : "<<bst.minValue()<<endl;
    cout<<"Maximun value of Node in BST is : "<<bst.maxValue()<<endl;

    bst.deleteNode(5);
    bst.levelOrder();


}

