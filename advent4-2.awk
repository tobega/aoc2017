function join(a,    i, s) {
  s = "";
  for (i=1; i in a; i++) {
    s = s a[i];
  }
  return s;
}
BEGIN	{valid = 0}
	{delete pw; delete ana; fail = 0;
	  for(i=1; i<=NF; i++) {
            split($i, ana, "");
            asort(ana);
	    w = join(ana);
	    if (w in pw) {fail = 1; break;}
            pw[w] = 1;
	  }
	  if (fail == 0) valid++}
END	{print valid}
