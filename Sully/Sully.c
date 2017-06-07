#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int i = 5;
	if (i <= 0)
		return(0);
	if (strcmp(__FILE__, "Sully.c"))
		i--;
	char buf[200];
	sprintf(buf, "Sully_%d.c", i);
	FILE *f = fopen(buf, "w");
	char*c="#include <stdio.h>%1$c#include <string.h>%1$c#include <stdlib.h>%1$cint main(){%1$c%5$cint i = %4$d;%1$c%5$cif (i <= 0)%1$c%5$c%5$creturn(0);%1$c%5$cif (strcmp(__FILE__, %2$cSully.c%2$c))%1$c%5$c%5$ci--;%1$c%5$cchar buf[200];%1$c%5$csprintf(buf, %2$cSully_%%d.c%2$c, i);%1$c%5$cFILE *f = fopen(buf, %2$cw%2$c);%1$c%5$cchar*c=%2$c%3$s%2$c;%1$c%5$cfprintf(f, c, 10, 34, c, i, 9);%1$c%5$cfclose(f);%1$c%5$cchar buf2[200];%1$c%5$csprintf(buf2, %2$cclang -Wall -Wextra -Werror -o %%.*s %%s%2$c, (int)strlen(buf)-2, buf, buf);%1$c%5$csystem(buf2);%1$c%5$csprintf(buf2, %2$c./%%.*s%2$c, (int)strlen(buf)-2, buf);%1$c%5$csystem(buf2);%1$c}%1$c";
	fprintf(f, c, 10, 34, c, i, 9);
	fclose(f);
	char buf2[200];
	sprintf(buf2, "clang -Wall -Wextra -Werror -o %.*s %s", (int)strlen(buf)-2, buf, buf);
	system(buf2);
	sprintf(buf2, "./%.*s", (int)strlen(buf)-2, buf);
	system(buf2);
}
