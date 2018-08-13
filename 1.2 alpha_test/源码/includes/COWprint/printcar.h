void printcar(int i) {
	printf("No.%d: ",tct+1-i);
	if(i>ct) {
		printf("(%d,%d)",car[i][0].xx+1,car[i][0].yy+1);
		printnode(mp[car[i][0].xx][car[i][0].yy]);
		printf(" a=%d-->%d-->%d-->",car[i][0].aa,car[i][1].aa,car[i][2].aa);
		printf("(%d,%d)",car[i][3].xx+1,car[i][3].yy+1);
		printnode(mp[car[i][3].xx][car[i][3].yy]);
		printf(" a=%d",car[i][3].aa);
		puts("");
	} else printf("δ֪...\n");
}
