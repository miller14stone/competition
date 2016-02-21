#include <stdio.h>

int main()
{
  // (a,b) (c,d) (e,f) (g,f)
  double a, b, c, d, e, f;

  scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

  if ((c - a) * (f - b) > (d -b))
  {
      printf("%f\n", ((c - a) * (f - b) * (d - b) * (e - a)) / 2);
  } else {
      printf("%f\n", ((d - b) * (e - a) - (c - a) * (f - b)) / 2);
  }
  return 0;
}
