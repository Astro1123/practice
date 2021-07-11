sub Fibonacci {
	$_[0] < 2 ? $_[0] : &Fibonacci($_[0]-1)+&Fibonacci($_[0]-2);
}

print "n = ";
my $n = <STDIN>;
if ($n < 0) {
  $n = 0;
}
print "\n";
for ($i = 0; $i <= $n; $i++){
	print "".$i." : ".&Fibonacci($i)."\n";
}
print "\n";