BEGIN	{total = 0}
	{min = $1; max = $1;
	  for(i=2; i<=NF; i++) {if ($i < min) min = $i; if ($i > max) max = $i;}
	  total += max - min;}
END	{print total}
