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
node*maxval(node*root){
	node*temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	return temp;
}
int main(){
	node*root=nullptr;
	cout<<"enter data to create bst"<<endl;
	takeinput(root);
	cout<<"printing bst"<<endl;
	levelordertraversal(root);
cout<<"max val in bst is "<<	maxval(root)->data;
cout<<"min val in bst is "<<	minval(root)->data;
   
	
}
