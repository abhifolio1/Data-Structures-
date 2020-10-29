// Insert elements in the front C 

void push (struct Node **head_ref, int new_data)
{
  /* dynamic allocation of a node */
  struct Node *new_node = (struct Node *) malloc (sizeof (struct Node))
  
  new_node->data = new_data;	// assign new_data to new_node

  new_node->next = (*head_ref);	// set new_node next to head_ref

  (*head_ref) = new_node;	// move the head to point to a new node

}
