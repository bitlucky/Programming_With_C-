//Count and detect the number of nodes in a loops
int detect(struct node *start)
{
	struct node *fast_ptr = start , *slow_ptr= start;
	while(slow_ptr && fast_ptr && fast_ptr->next)
{
	slow_ptr= slow_ptr->next;
	fast_ptr=fast_ptr->next->next;
	if(slow_ptr==fast_ptr)
	{
		cout<<"CYCLE IS FOUND";
		count(slow_ptr);
	}
}
}
void count(struct node *n)
{
	int res=1;
	struct node *temp = n ;
	while(tmp->next!=n)
	{
		res++;
		temp=tmp->next;
	}
}

