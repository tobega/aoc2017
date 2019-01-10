BEGIN	{valid = 0}
	{delete a; fail = 0;
	  for(i=1; i<=NF; i++) {
	    if ($i in a) {fail = 1; break;}
            a[$i] = 1;
	  }
	  if (fail == 0) valid++}
END	{print valid}
