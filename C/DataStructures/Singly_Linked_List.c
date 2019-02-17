#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char data[100];
    struct node* next;
}*head;
void create_list(int, struct node*);
void print_list(struct node*);
void add_start(struct node*,char[]);
void add_end(struct node*,char[]);
void add_middle(struct node*, int, char[]);

int main(){
    int n;
    head = (struct node*)malloc(sizeof(struct node));
    int temp;
    while(1){
        printf("_____________________________________________________________________________\n");
        printf("1\tCreate\n2\tAdd at Beginning\n3\tAdd at End\n4\tAdd in between\n5\tPrint Linked List\n0\tExit\nEnter your choice:");
        scanf("%d",&temp);
        printf("_____________________________________________________________________________\n");
        char val[1000];
        switch(temp){
            case 1:
                printf("Enter number of nodes to be created:");
                scanf("%d",&n);
                create_list(n,head);
                break;
            case 2:
                printf("Enter value to be inserted:");
                // char val[100];
                scanf("%s",val);
                add_start(head,val);
                break;
            case 3:
                printf("Enter value to be inserted:");
                // char val[100];
                scanf("%s",val);
                add_end(head,val);
                break;
            case 4:
                printf("Enter value to be inserted:");
                // char val[100];
                scanf("%s",val);
                printf("Enter position to be inserted:");
                int pos;
                scanf("%d",&pos);
                add_middle(head,pos,val);
                break;
            case 5:
                print_list(head);
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Please Enter a valid choice");
        }
    }
    return 0;
}


void create_list(int n, struct node* head){
    char val[100];
    struct node *next=NULL, *prev=NULL;
    for(int i=0;i<n;i++){
        if(i==0){
            next = head;
            printf("Enter Node %d:",i+1);
            scanf("%s",val);
            strcpy(next->data,val);
            prev = next;
        }
        else{
            printf("Enter Node %d:",i+1);
            scanf("%s",val);
            next = (struct node*)malloc(sizeof(struct node));
            strcpy(next->data,val);
            prev->next = next;
            prev = next;
        }
    }
    printf("Nodes Created\n");
}

void print_list(struct node* n){
    struct node *temp;
    temp = n;
    while(temp != NULL){
        printf("|%s| -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void add_start(struct node *h, char val[]){
    if(h->next == NULL)
        printf("You have not created List yet! Create linked list and then insert");
    else{
        struct node *temp = NULL;
        temp = (struct node*)malloc(sizeof(struct node));
        strcpy(temp->data,val);
        temp->next = h;
        head = temp;
        printf("Data inserted at beginning: \"%s\" \n",val);
    }
}
void add_end(struct node *h, char val[]){
    if(h->next == NULL)
        printf("You have not created List yet! Create linked list and then insert");
    else{
        struct node *temp = NULL;
        // temp = (struct node*)malloc(sizeof(struct node));
        
        while(h->next != NULL){
            h = h->next;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        h->next = temp;
        strcpy(temp->data,val);
        temp->next = NULL;
        printf("Data inserted at end: \"%s\"\n",val);
    }
}

void add_middle(struct node *h,int pos,char val[]){
    if(h->next == NULL)
        printf("You have not created List yet! Create linked list and then insert");
    else{
        struct node* temp = NULL;
        for(int i=0;i<pos;i++){
            if(h==NULL){
                printf("Please enter a valid position. Try again!");
                return;
            }
            h = h->next;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        temp->next = h->next;
        h->next = temp;
        strcpy(temp->data,val);
        printf("Data inserted in middle at position: %d, \"%s\"",pos,val);
    }
}