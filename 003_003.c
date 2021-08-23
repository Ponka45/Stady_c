

int Max( int a,  int b,  int c,  int d)
{
	int M;
	M=a;

if(M<b)
  {
	M=b;
  }
	else if (M<c)
  {
    M=c;
  }
  else if (M<d)
  {
	  M=d;
  }
 return M;
}

int Min (int a, int b, int c, int d)
{
	int m=a;
	if (m>b)
	{
		m=b;
	}
	else if (m>c)
	{
		m=c;
	}
	else if (m>d)
	{
		m=d;
	}
	return m;
}
int PreMax (int a, int b, int c, int d)
{
	int ans;
	int M=Max(a,b,c,d);
	int m=Min(a,b,c,d);
	if (a==M)
	{
		ans = Max(m,b,c,d);
	}
	else if(b==M)
	{
		ans = Max(a,m,c,d);
	}
	else if(c==M)
	{
		ans = Max(a,b,m,d);
	}
	else if(d==M)
	{
		ans = Max (a,b,c,m);
	}
	return ans;
}









