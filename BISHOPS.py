import sys
for line in sys.stdin:
  n = int(line)
  print "1" if(n == 1) else 2 * (n - 1)