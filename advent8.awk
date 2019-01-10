BEGIN	{op["<"] = "lt";
	 op[">"] = "gt";
	 op["=="] = "eq";
	 op["<="] = "le";
	 op[">="] = "ge";
	 op["!="] = "ne";
	 print "/inc {add} def /dec {sub} def";
	 print "/registers 1000 dict def";
	 print "0";
	}

	{print "{ registers","/" $1,
	  "registers /" $1 " known {registers /" $1 " get} {0} ifelse",
	  $3,$2," dup 4 1 roll put","2 copy lt {exch} if pop}",
	  "registers /" $5 " known {registers /" $5 " get} {0} ifelse",
	  $7,op[$6],"exch if";
	}

END	{print "registers {exch pop} forall";
	 print "registers length 1 sub {2 copy lt {exch} if pop} repeat";
	 print "== == quit";
	}

