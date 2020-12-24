#include<iostream>
using namespace std;

struct node{
    int info;
    struct node*next;
    struct node*prev;
};
struct node*head = NULL;
struct node*tail = NULL;
void insert_at_beg(struct node*head,struct node*tail, int data);
void insert_at_end(struct node*tail, int data);
void insert_at_middle(struct node*head, int data);
void delete_at_beg(struct node*head);
void delete_at_end(struct node*tail); 
void delete_at_middle(struct node*head, int pos);
void traversal(struct node*head);
void reverse_traversal(struct node*tail);


int main(){
    insert_at_beg(head, tail, 12);
    // insert_at_beg(head, tail, 13);
    // insert_at_beg(head, tail, 14);
    // insert_at_beg(head, tail, 15);
    // insert_at_beg(head, tail, 16);
    // insert_at_beg(head, tail, 17);
    traversal(head);
    return 0;
}

void traversal(struct node*head){
    struct node*p = head;
    do
    {
        cout<<" "<<p->info;
        p = p->next;
    }while(p->next!=NULL);
}
void insert_at_beg(struct node*head,struct node*tail, int data){
    struct node*ptr = new struct node;
    ptr->info = data;
    if(head == NULL){
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
        tail = ptr;
    }
    else{
        /* code */
        ptr->prev = NULL;
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
    
}