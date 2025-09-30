#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}*head,*temp;

//it is not necessary to write createnode if we didnt make this function we have to always allocate memory newnode
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    return head;
}

struct Node *insertatend(struct Node* head, int value){
    struct Node* newNode = createNode(value);
    if(head==NULL){
        return newNode;
    }
    else {
        struct Node* temp = head;
        while(temp!=NULL){
            temp= temp->next;
        }
        temp->next=newNode;
        return head;
    }
}

struct Node* deleteBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }
    struct Node* temp = head;
    head = head->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
    return head;
}

struct Node* deleteEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }
    if (head->next == NULL) {
        printf("Deleted: %d\n", head->data);
        free(head);
        return NULL;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    printf("Deleted: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
    return head;
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct node *head;
    head=NULL;

}
