void psS() {
	for(int i=0; i<=lts*2; i++) {
		int j=i>>1;
		if(i==lts-3) {
			printf("  1 2 3 4 5 ");
			if(lts>=6)printf("6 ");
			if(lts>=7)printf("7 ");
			if(lts>=8)printf("8 ");
			if(lts>=9)printf("9 ");
		} else if(i<2*lts-2&&i>lts-3) {
			color(7);
			printf("%d ",i-lts+3);
			for(int j=0; j<lts; j++) {
				printnode(mp[i-lts+2][j]);
			}
		} else {
			printf("            ");
			if(lts>=6)printf("  ");
			if(lts>=7)printf("  ");
			if(lts>=8)printf("  ");
			if(lts>=8)printf("  ");
		}
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
