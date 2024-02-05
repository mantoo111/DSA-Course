#include<iostream>
using namespace std;
#include<queue>
struct node{
	int data;
	node*left;
	node*right;
};
node*createnode(int x){

node*newnode=new node;
newnode->data=x;
newnode->left=nullptr;
newnode->right=nullptr;
return newnode;
}
node*buildtree(){
cout<<"enter the data"<<endl;
int z;
cin>>z;
 
 if(z==-1){
 	return nullptr;
 }
 node* root = createnode(z);
 cout<<"enter data for inserting in left of" <<z<<endl;
    root->left = buildtree();
cout<<"enter data for inserting in right of" <<z<<endl;
    root->right = buildtree();//recursive calls
    
    return root;
}
/*void displayTree(node* root, int level = 0) {
    if (root == nullptr) {
        return;
    }

    displayTree(root->right, level + 1);

    for (int i = 0; i < level; ++i) {
        cout << "    ";
    }

    cout << root->data << endl;

    displayTree(root->left, level + 1);
}*/
void levelordertraversal(node* root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){//front will atomaticcaly inc by one
		node*temp=q.front();//for removing
		q.pop();                                                         //in queue 1 and null is push so while part is skip it will come to else part 
		if(temp==NULL){
			//purana level complete traverse ho chuka ha
			cout<<endl;
			if(!q.empty())
{                                                                //step 1: 1 is push in in queue and also null is pushed now front=temp
//                                                                  step 2:pop that 1 as our temp is not equal to one so come in else part     
	//queue still has some child nodes
	q.push(NULL);
		}	
			}
		
		else{   // 1 ka left and right
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

void inordertraversal(node*root){//LNR
	if(root==NULL){
		return;
	}
	inordertraversal(root->left);
	cout<<root->data;
	inordertraversal(root->right);
}
void preordertraversal(node*root){//NLR
	if(root==NULL){
		return;
	}
		cout<<root->data;
	preordertraversal(root->left);

	preordertraversal(root->right);
}
void postordertraversal(node*root){//lrn
	if(root==NULL){
		return;
	}
	preordertraversal(root->left);
preordertraversal(root->right);
	cout<<root->data;

}
int main(){
	node*root=nullptr;
	root=buildtree();
	cout << "Tree structure:" << endl;
  //  displayTree(root);
  cout<<"printing level order traversal"<<endl;
  levelordertraversal(root);
  cout<<"printing  inorder traversal"<<endl;
  inordertraversal(root);
  cout<<"printing  preorder traversal"<<endl;
  	preordertraversal(root);
  	postordertraversal(root);

}
