print "n = ";
my $n = <STDIN>;
if ($n < 1) {
  $n = 100;
}
print "\n";
for ($i = 0; $i < $n; $i++){
	if (($i+1) % 15 == 0) {
		print "Fizz Buzz\n";
	} elsif (($i+1) % 5 == 0) {
		print "Buzz\n";
	} elsif (($i+1) % 3 == 0) {
		print "Fizz\n";
	} else {
		print "".($i+1)."\n";
	}
}
print "\n";