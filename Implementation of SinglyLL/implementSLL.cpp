#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
  struct Node* head = NULL;
  void insert(int newdata) 
{
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = newdata;
   newnode->next = head;
   head = newnode;
}
void display() 
{
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) 
{
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() 
{
   insert(12);
   insert(19);
   insert(17);
   insert(34);
   insert(18);
   cout<<"The linked list is: ";
   display();
   return 0;
}
