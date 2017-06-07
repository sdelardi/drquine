i = 5;
if (i <= 0)
	exit;
end
if (__FILE__ != "Sully.rb")
	i -= 1;
end
name = "Sully_" + i.to_s + ".rb";
file = File.open(name, 'w');
c = "i = %d;%cif (i <= 0)%c%cexit;%cend%cif (__FILE__ != %cSully.rb%c)%c%ci -= 1;%cend%cname = %cSully_%c + i.to_s + %c.rb%c;%cfile = File.open(name, 'w');%cc = %c%s%c;file.printf(c, i, 10, 10, 9, 10, 10, 34, 34, 10, 9, 10, 10, 34, 34, 34, 34, 10, 10, 34, c, 34, 34, 34, 10);file.close();system(%cruby %c + name);%c";file.printf(c, i, 10, 10, 9, 10, 10, 34, 34, 10, 9, 10, 10, 34, 34, 34, 34, 10, 10, 34, c, 34, 34, 34, 10);file.close();system("ruby " + name);
