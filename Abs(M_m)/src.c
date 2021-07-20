
int Max(int a,int b,int c,int d)
{
int M=a;

  if(b>M)
  {
    M=b;
  }
  if(c>M)
  {
    M=c;
  }
  if(d>M)
  {
    M=d;
  }
  return M;
}

int Min(int a, int b, int c, int d)
{
int m=a;

  if(m>b)
  {
    m=b;
  }
  if(m>c)
  {
    m=c;
  }
  if(m>d)
  {
    m=d;
  }
  return m;
}

int Abs(int M, int m)
{
int abs=M-m;

  if(abs<0)
  {
    abs=-abs;
  }

  return abs;
}


