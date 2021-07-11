sub Prime {
	if ($_[0] < 2) {
		return -1;
	}
	if ($_[0] == 2) {
		return 1;
	}
	if ($_[0]%2 == 0) {
		return 0;
	}
	for ($i = 3; $i <= sqrt($_[0]); $i+=2) {
		if ($_[0]%$i == 0) {
			return 0;
		}
	}
	1;
}

sub PrintPrime {
	if ($_[0] < 0) {
		return "Error";
	}
	if ($_[0] == 0) {
		return "Composite number";
	}
	"Prime number";
}

while(1) {
	print "number : ";
	my $n = <STDIN>;
	if ($n < 0) {
	  $n = 0;
	}
	print &PrintPrime(&Prime($n))."\n\n";
	print("Continue? (Yes : 1 / No : 0) : ");
	my $i = <STDIN>;
	print "\n";
	if($i == 0) {
		last;
	}
}