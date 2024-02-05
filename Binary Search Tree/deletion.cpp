#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
		node(int d){
		
		this->data=d;
		this->left=nullptr;
		this->right=nullptr;	
		
		}
};
node* inserttoBST(node*&root,int d){
	//base case
	if(root==nullptr){
		root=new node(d);//create that node an just retrn it
		return root;
	}
	if(d>root->data){
		root->right=inserttoBST(root->right,d);               //d is the next data that is coming for compairing...a
	}
	else{
	
	root->left=inserttoBST(root->left,d);
}
return root;
}

void takeinput(node*&root){
	int data;
	cin>>data;
	while(data!=-1){
		inserttoBST(root,data);
		cin>>data;
	}
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
node*minval(node*root){
	node*temp=root;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	return temp;
}
node*delfrombst(node*root,int val){
	//base case
	if(root==NULL){
		return root;
	}
	if(root->data==val){
		// 0 child
		if(root->left==NULL&&root->right==NULL){
			delete root;
			return NULL;
		}
		// 1 child
		//left child
		if(root->left!=NULL&&root->right==NULL){
			node*temp=root->left;
			delete root;
			return temp;
		}
			//right child
		if(root->left==NULL&&root->right!=NULL){
			node*temp=root->right;
			delete root;
			return temp;
		}
			
		// 2 child
		if(root->left!=NULL&&root->right!=NULL){
			int mini=minval(root->right)->data;
			root->data=mini;
			root->right=delfrombst(root->right,mini);
			return root;
			
		}
	}
	else if(root->data>val){//val small
		root->left=delfrombst(root->left,val);
		
	}
	else{
		root->right=delfrombst(root->right,val);
		return root;
	}
	
}
int main(){
	node*root=nullptr;
	cout<<"enter data to create bst"<<endl;
	takeinput(root);
	cout<<"printing bst"<<endl;
	levelordertraversal(root);
root=delfrombst(root,5);
cout<<"after deletion"<<endl;
	cout<<"printing bst"<<endl;
	levelordertraversal(root);
   
	
}
