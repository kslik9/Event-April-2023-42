print "Enter a string: ";
my $s = <STDIN>;
chomp($s);

my $s1 = "";
my $j = 0;
my $i = length($s) - 1;

while ($i >= 0) 
{
    $s1 .= substr($s, $i, 1);
    $i--;
    $j++;
}

if ($s eq $s1)
{
    print "The string is a palindrome.\n";
}
else
{
    print "The string is not a palindrome.\n";
}