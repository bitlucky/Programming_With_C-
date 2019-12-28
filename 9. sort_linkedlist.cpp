void sort(struct node *start)
{
	struct node *ptr= start , *temp;
	while(ptr->next!=NULL)
	{
		ptr1=ptr->next;
		while(ptr1->next!=NULL)
		{
			if(ptr->data > ptr1->data)
			{

				temp= ptr->data;
				ptr->data = ptr1->data;
				ptr1->data=temp;
			}
		ptr1=ptr1->next;
		}
		ptr=ptr->next;
	}

}

	
