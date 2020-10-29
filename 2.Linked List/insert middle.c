// Enter elements after a node

void insertAfter(struct Node*prev, int new_data)
{
    // if the previous node is not present, then return nothing
    if(prev == NULL)
    printf("Previous node cannot be null\n");
    return;
    
    else
    {
        //allocate the nodes
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        
        new_node -> data = new_data;//assign new data
        
        new_node -> next = prev->next;//replace next of previous with the next of the new node
        
        prev -> next = new_node;//make the next of previous node as the new node
    }
}