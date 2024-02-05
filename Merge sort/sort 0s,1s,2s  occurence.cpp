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
}
node* sortlist(node*head){
	int zerocount=0;
	int onecount=0;
	int twocount=0;
	node*temp=head;
	while(temp!=NULL){
		if(temp->data==0){
			zerocount++;
		}
		else if(temp->data==1){
			onecount++;}
			else if(temp->data==2){
				twocount++;
			}
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		if(zerocount!=0){
			temp->data=0;
			zerocount--;
			
		}
		else if(onecount!=1){
			temp->data=1;
			onecount--;
			
		
	}
	else if(twocount!=2){
			temp->data=2;
			twocount--;
			
}
temp=temp->next;
}
return head;
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
	//node*element;
int n;
	for(int i=0;i<5;i++){
		cin>>n;
		createnode(n);

}
head=	sortlist(head);
displayList(head);
}
