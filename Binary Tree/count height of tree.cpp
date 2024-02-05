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
int height(node*root){
	if(root==nullptr){
		return 0;
	}
	int left=height(root->left);
	int right=height(root->right);
	int ans=max(left,right)+1;
	return ans;
}





int main(){
	node*root=nullptr;
	root=buildtree();
	cout << "Tree structure:" << endl;
	levelordertraversal(root);
	cout<<"height of tree is "<<height(root);
	}
