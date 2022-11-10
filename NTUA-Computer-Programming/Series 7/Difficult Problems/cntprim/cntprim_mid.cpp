// 70 % of test cases

PROGRAM primes ()
{
  int p, t, N;
  int count = 1;

  N = READ_INT();
  if (N < 2) {
    WRITELN(0);
    return;
  }

  FOR (p, 3 TO N STEP 2)
  {
    t = 3;
    while (p % t != 0) t = t+2;
    if (p == t) count = count+1;
  }
  WRITELN(count);
}