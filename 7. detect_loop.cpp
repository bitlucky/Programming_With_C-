int detect_loop(struct node *head)
{
	node *fast_ptr=head , *slow_ptr=head;
	while(slow_ptr && head-ptr && fast_ptr->next)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(fast_ptr==slow_ptr)
		{
			cout<<"CYCLE IS FOUND";
		}

	}
return 0; 
}
