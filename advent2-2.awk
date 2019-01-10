BEGIN	{total = 0}
	{
	  for(i=1; i<NF; i++) {
	    for(j=i+1; j <= NF; j++) { if ($i % $j == 0) {total += $i/$j;} else if ($j % $i == 0) {total += $j/$i;};}
	  }
	}
END	{print total}
