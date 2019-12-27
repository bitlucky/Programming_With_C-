void printMiddle(struct node *start)
{
	struct node *slow_ptr=start;
	struct node *fast_ptr=start;
	while(start!==NULL)
	{
		while(fast_ptr!==NULL && fast_ptr->next=NULL)
		{
			fast_ptr=fast_ptr->next;
			slow_ptr=slow-ptr->next;
		}
	cout<<"The Middle element is" <<slow_ptr->data<<;
	}
}
