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
node*buildfromlevelordertraversal(node*&root){
	queue<node*>q;
	cout<<"enter data for root"<<endl;
	int data;
	cin >>data;
root=createnode(data);
	q.push(root);
	
	while(!q.empty()){
		node*temp=q.front();
		q.pop();
		cout<<"enter left node for"<<temp->data<<endl;
		int leftData;
		cin>>leftData;
		if(leftData!=-1){
			temp->left=createnode(leftData);
			q.push(temp->left);
			}
			cout<<"enter right  node for"<<temp->data<<endl;
		int rightData;
		cin>>rightData;
		if(rightData!=-1){
			temp->right=createnode(rightData);
			q.push(temp->right);
			}
			
		}
	}



//for displaying purpose:
void levelordertraversal(node* root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*temp=q.front();//for removing
		q.pop();                                                         //in queue 1 and null is push so while part is skip it will come to else part 
		if(temp==NULL){
			//purana level complete traverse ho chuka ha
			cout<<endl;
			if(!q.empty()){                                                                //step 1: 1 is push in in queue and also null is pushed now front=temp
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

int main(){
	node*root=NULL;
buildfromlevelordertraversal(root);
levelordertraversal(root);
}
