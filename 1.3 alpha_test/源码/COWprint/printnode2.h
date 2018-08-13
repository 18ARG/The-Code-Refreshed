void printnode2(int x,int y) {
	int a=mp[x][y];
	int col;
	if(a==6)col=6;
	else if(a==7)col=5;
	else if(a==8)col=9;
	else col=10+a;
	if(mbgc[x][y]==1)col+=64;
	else if(mbgc[x][y]==2)col+=16;
	else if(mbgc[x][y]==3)col+=32;
	color(col);
	printf(" %c ",a+'A');
	color(7);
}
