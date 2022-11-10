PROGRAM primes ()
{
  int count = 0;
  int N, i, j;
  
  bool isprime[5000001];

  // read input
  N = READ_INT();

  // easy for small N
  if (N < 2) {
    WRITELN(0);
    return;
  }

  // initialize
  FOR (i, 2 TO N) isprime[i] = true;

  // count primes up to the sqrt
  i = 2;
  while (i*i <= N) {
    if (isprime[i]) {
      count = count + 1;
      FOR (j, i*i TO N STEP i) isprime[j] = false;
    }
    i = i+1;
  }

  // count the rest of the primes
  FOR (j, i TO N) if (isprime[j]) count = count + 1;

  // output
  WRITELN(count);
}