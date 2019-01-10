BEGIN	{print "<nodes>";}
	{ gsub(",", ""); gsub("\)", ""); gsub("\\(", "");
	  print "<node name=\"" $1 "\" weight=\"" $2 "\">";
	  for (i = 4; i <= NF; i++) {
	    print "<child name=\"" $i "\"/>";
	  }
	  print "</node>";
	}
END	{print "</nodes>";}

