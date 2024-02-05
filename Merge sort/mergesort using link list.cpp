#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*head=nullptr;
node*tail=nullptr;
void createnode(int x){
	node*element=new node;
	element->data=x;
	if(head==nullptr){
		head=element;
		tail=element;
		
	}
	else{
		element->next=nullptr;
		tail->next=element;
		tail=element;
	}
}//finding mid 
node*findmid(node*head){
	node*slow=head;
	node*fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;//remember fast will move twice
	}
	return slow;//means returning mid;
}
node*merge(node*left,node*right){
	if(left==NULL){
		return left;
	}
	if(right==NULL){
		return right;
	}
	node*ans=new node;
	ans->data=-1;
	node*temp=ans;
//	merge 2  link list
	while(left!=NULL&&right!=NULL){
		if(left->data< right->data){
			temp->next=left;
			temp=left;
			left=left->next;
		}
		else
		{
			temp->next=right;
			temp=right;
			right=right->next;
			
		}
	}                         //from here the case is when left and right ll does not reach null so we are doing this 
	while(left!=NULL){
			temp->next=left;
			temp=left;
			left=left->next;
	}
	while(right!=NULL){
			temp->next=right;
			temp=right;
			right=right->next;
	}
	ans=ans->next;
	return ans;
}
node*mergesort(node*head){
	//base case
	if(head==NULL||head->next==NULL){
		return head;
		
	}//breaking ll into 2 half after finding mid
	node*mid=findmid(head);
	node*left=head;//first half
	node*right=mid->next;//second half
	mid->next=NULL;//this line means that when ll is halfed ,left side ll last node point to null
	left=mergesort(left);//recursive call to sort
	right=mergesort(right);
	//merge both left and right half
node*result=merge(left,right);
return result;
}
void displayList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
	

        createnode(8);
        createnode(0);
        createnode(9);
        createnode(4);
    

    cout << "Original List: ";
    displayList(head);

    head = mergesort(head);

    cout << "Sorted List: ";
    displayList(head);

    return 0;
}
