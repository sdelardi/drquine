#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[2];
	str[1] = '\0';
	str[0] = (i - 1) + 48;
	char *c = "#include <stdio.h>%1$c#include <stdlib.h>%1$cint main()%1$c{%1$c%2$cchar *c = %3$c%5$s%3$c;%1$c%2$cchar *d = %3$c%4$s%3$c;%1$c%2$cint i = 5;%1$c%2$cif (i == 5)%1$c%2$c%2$cFILE *fp = fopen(%3$cSully_5.c%3$c, %3$cw%3$c);%1$c%2$cfprintf(fp,c,10,9,34,c);%1$c%2$cfclose(fp)%1$c%2$cfp = fopen(strcat(strcat(%3$cSully_%3$c, str), %3$c.c%3$c), %3$cw%3$c);%1$c%2$cfprintf(fp,d,10,9,34,str[0],d);%1$c%2$cfclose(fp);%1$c%2$csystem(strcat(strcat(strcat(strcat(%3$cgcc -Wall -Wextra -Werror -o Sully_%3$c, str[0]), %3$c Sully_%3$c), str[0]), %3$c.c%3$c));%1$c%2$csystem(strcat(%3$c./Sully_%3$c, str[0]));%1$c}";
	char *d = "#include <stdio.h>%1$c#include <stdlib.h>%1$cint main()%1$c{%1$c%2$cchar *c = %3$c%5$s%3$c;%1$c%2$cchar *d = %3$c%6$s%3$c;%1$c%2$cint i = %4$c;%1$c%2$cif (i == 5)%1$c%2$c%2$cFILE *fp = fopen(%3$cSully_5.c%3$c, %3$cw%3$c);%1$c%2$cfprintf(fp,c,10,9,34,c);%1$c%2$cfclose(fp)%1$c%2$cfp = fopen(strcat(strcat(%3$cSully_%3$c, str), %3$c.c%3$c), %3$cw%3$c);%1$c%2$cfprintf(fp,d,10,9,34,str[0],d);%1$c%2$cfclose(fp);%1$c%2$csystem(strcat(strcat(strcat(strcat(%3$cgcc -Wall -Wextra -Werror -o Sully_%3$c, str[0]), %3$c Sully_%3$c), str[0]), %3$c.c%3$c));%1$c%2$csystem(strcat(%3$c./Sully_%3$c, str[0]));%1$c}";
	int i = 5;
	if (i == 5)
		FILE *fp = fopen("Sully_5.c", "w");
	fprintf(fp,c,10,9,34,d,c);
	fclose(fp);
	fp = fopen(strcat(strcat("Sully_", str), ".c"), "w");
	fprintf(fp,d,10,9,34,str[0],c,d);
	fclose(fp);
	system(strcat(strcat(strcat(strcat("gcc -Wall -Wextra -Werror -o Sully_", str[0]), " Sully_"), str[0]), ".c"));
	system(strcat("./Sully_", str[0]));
}
