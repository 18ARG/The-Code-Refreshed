void psS() {
	for(int i=0; i<=12; i++) {
		int j=i>>1;
		if(i==3)printf("  1 2 3 4 5 6");
		else if(i<10&&i>3) {
			color(7);
			printf("%d ",i-3);
			for(int j=0; j<6; j++) {
				printnode(mp[i-4][j]);
			}
		} else printf("              ");
		if(i%2==0)printf("\t\t-----------------");
		else {
			color(7);
			printf("\t\t| ");
			color(10+j);
			printnode(j);
			color(7);
			printf("| %c %c | %c %c |",scr[j][0],scr[j][1],scr[j][2],scr[j][3]);
		}
		puts("");
	}
	puts("");
}
