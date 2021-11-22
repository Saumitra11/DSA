#include <bits/stdc++.h>
using namespace std;
class Node {
 public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};
void print(Node* head) {
  Node* temp = head;
  cout << "Printing Data: ";
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
Node* takeInput(bool check=true) {
  int data;
  Node* head = NULL;  // LL is empty
  Node* tail = NULL;  // LL is empty
  cin >> data;
  while (data != -1) {
    Node* n = new Node(data);
    if (head == NULL) {
      head = n;
      tail = n;
    } else {
      if (check) {
        tail->next = n;  // to insert at tail
        tail = n;  // or
        // tail = tail->next;
      } else {
        n->next = head;  // to insert at head
        head = n;
      }
    }
    cin >> data;
  }
  return head;
}
int length(Node* head){
	Node* temp = head;
	int count = 0;
	while(temp!=NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
int print_ith(Node* head, int pos){
	Node* temp = head;
	if(pos<0) return -1;
	while(pos--!=0){
		temp = temp->next;
		if(temp==NULL) return -1;
	}
	return temp->data;
}
Node* insert(Node* &head, int val, int pos){
	Node* temp = head;
	Node* n = new Node(val);
	if(pos < 0) return head;
	if(pos==0){
		n->next = head;
		head = n;
		return head;
	}
	while(--pos!=0){
		temp = temp->next;
		if(temp==NULL) return head;
	}
	n->next = temp->next;
	temp->next = n;
	return temp;
}
Node* delete_ith(Node* head, int pos){
	Node* temp = head;
	if(pos<0 || head==NULL){
		return head;
	}
	if(pos==0){
		Node* newHead = head->next;
		head->next = NULL;
		delete head;
		return newHead;
	}
	while(--pos!=0){
		temp = temp->next;
	}
	if(temp->next == NULL) return head;
	Node* newTemp = temp->next;
	temp->next = (temp->next)->next;
	newTemp->next = NULL;
	delete newTemp;
	return head; 
	
}
int main() {
cout << "Enter first LL: ";
  Node* head = takeInput();
//  cout << endl << "Enter second LL: ";
//  Node* head2 = takeInput(false);
  print(head);
//  print(head2);
cout << endl << "Printing length: " << length(head);
int val, pos;
cout << endl << "Enter value to be entered: ";
cin >> val;
cout << endl << "Enter pos to be added: ";
cin >> pos;
Node* x = insert(head, val, pos); 
cout << endl;
print(head);
cout << endl << "Enter position: ";
cin >> pos;
cout << endl << print_ith(head, pos);
cout << endl << "Enter pos to be deleted: ";
cin >> pos;
head = delete_ith(head, pos);
cout << endl;
print(head);
  return 0;
}











  //	Node n1(1);
  //	Node* head = &n1;
  //	Node n2(2);
  //	Node n3(3);
  //	Node n4(4);
  //	Node n5(5);
  //	Node* tail = &n2;
  //	n1.next = &n2;
  //	n2.next = &n3;
  //	n3.next = &n4;
  //	n4.next = &n5;
  //	print(head);
  //	Node* n1 = new Node(1);
  //	Node* head = n1;
  //	Node* n2 = new Node(2);
  //	Node* n3 = new Node(3);
  //	Node* n4 = new Node(4);
  //	Node* n5 = new Node(5);
  //	n1->next = n2;
  //	n2->next = n3;
  //	n3->next = n4;
  //	n4->next = n5;
  //	print(head);
  //	//Static Object
  //	Node n1(1);
  //	Node n2(2);
  //	n1.next = &n2;
  //	cout << n1.data << " " << n2.data;
  //	Node *head = &n1;
  //	cout << endl << head->data;
  //
  //	//Dynamic Object
  //	Node *n3 = new Node(3);
  //	Node *n4 = new Node(4);
  //	n3->next = n4;
