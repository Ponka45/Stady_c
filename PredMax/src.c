int Max(int a, int b)
{
  if(a >= b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int Min(int a, int b)
{
  if(a <= b)
  {
    return a;
  }
  else
  {
    return b;
  }
}




//������ ����
int Max4(int a, int b, int c, int d)
{
  int M1, M2, M;
  M1 = Max(a, b);
  M2 = Max(c, d);
  M = Max(M1, M2);
  return M;
}

int Min4(int a, int b, int c, int d)
{
  int m1, m2, m;
  m1 = Min(a, b);
  m2 = Min(c, d);
  m = Min(m1, m2);
  return m;
}
//1 ������
int PredMax(int a, int b, int c, int d)
{
  int M=Max4(a,b,c,d);
  int ans;
  int m=Min4(a,b,c,d);

  if(a==M)
  {
      ans=Max4(m,b,c,d);
  }
  else if(b==M)
  {
        ans=Max4(a,m,c,d);
  }
  else if(c==M)
  {
        ans=Max4(a,b,m,d);
  }
  else if(d==M)
  {
      ans=Max4(a,b,c,m);
  }
        return ans;
}
