//Remove duplicates from a sorted linked list
void rm_duplicates(struct node *start)
{
	struct node *slow_ptr= start , *next;
	while(slow_ptr->next!=NULL)
	{
		if(slow_ptr->data = slow_ptr->next_>data)
		{
			next = slow_ptr->next->next;
			free(slow_ptr->next);
			slow_ptr->next=next;
		}
		slow_ptr= slow_ptr->next;
	}
}


