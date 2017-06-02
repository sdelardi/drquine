/*
	comment
*/
#include <stdio.h>
#define D1 23
#define D2 14
#define DM int main(){FILE*fp=fopen("Grace_kid.c", "w");char*c="/*%c%ccomment%c*/%c#include <stdio.h>%c#define D1 23%c#define D2 14%c#define DM int main(){FILE*fp=fopen(%cGrace_kid.c%c, %cw%c);char*c=%c%s%c;fprintf(fp,c,10,9,10,10,10,10,10,34,34,34,34,34,c,34,10);fclose(fp);}%cDM";fprintf(fp,c,10,9,10,10,10,10,10,34,34,34,34,34,c,34,10);fclose(fp);}
DM