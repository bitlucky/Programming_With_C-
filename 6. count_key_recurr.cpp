int count(struct node *start , key)
{
	if(start==NULL)
		return frequency;
	if(start->data==key)
		{
			frequency++;
		}
	return count(start->next , key)
}
