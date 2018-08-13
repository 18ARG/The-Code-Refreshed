void printnode(int a) {
	if(a==6)color(6);
	else if(a==7)color(5);
	else if(a==8)color(9);
	else color(10+a);
	printf("%c",a+'A');
	color(7);
	printf(" ");
}
