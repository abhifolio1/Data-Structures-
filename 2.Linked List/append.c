// Enter elements at the end

void append(struct Node** head_ref, int new_data)
{
    
        //allocate the nodes
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        
        new_node -> data = new_data;//assign new data
        
        new_node -> next = NULL;// assign next as null as we are adding at the end
        
        if(*head_ref == NULL)// if linked list is empty
        {
            *head_ref = new_node;// add a new node
            return;
        }
        
        struct Node *last = *head_ref;// head of the new node must be pointing towards last node of the LL
        
        while(last -> next = new_node)
        
        last = last -> next;// last pointer of existing list is its next 
        
        last -> next = new_node;// assign new node to last of linked list
        return;
    
}