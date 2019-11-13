int proglc(int t[])
{
	int i,m=0;
	for(i=0;i<5;i++)
		if(t[i]>m)
			m=t[i];
	return m;
}
