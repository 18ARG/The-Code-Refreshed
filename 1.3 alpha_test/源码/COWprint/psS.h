void psS() {
	for(int i=0; i<=lts*2; i++) {
		int j=i>>1;
		if(i==lts-3) {
			printf("   1  2  3  4  5  ");
			if(lts>=6)printf("6  ");
			if(lts>=7)printf("7  ");
			if(lts>=8)printf("8  ");
			if(lts>=9)printf("9  ");
		} else if(i<2*lts-2&&i>lts-3) {
			color(7);
			printf("%d ",i-lts+3);
			for(int j=0; j<lts; j++) {
				printnode2(i-lts+2,j);
			}
		} else {
			printf("                 ");
			if(lts>=6)printf("   ");
			if(lts>=7)printf("   ");
			if(lts>=8)printf("   ");
			if(lts>=8)printf("   ");
		}
		if(i%2==0)printf("\t\t-------------------");
		else {
			color(7);
			printf("\t\t| ");
			color(10+j);
			printnode(j);
			color(7);
			//printf("| %c %c | %c %c |",scr[j][0],scr[j][1],scr[j][2],scr[j][3]);
			printf("|");
			int co1=7;
			if(luck[0]==j)co1+=3;
			else if(tip[j][0])co1+=7;
			if(bgc[j][0]==1)co1+=64;
			else if(bgc[j][0]==2)co1+=16;
			else if(bgc[j][0]==3)co1+=32;
			color(co1);
			printf(" %c ",scr[j][0]);
			color(7);
			co1=7;
			if(luck[1]==j)co1+=3;
			else if(tip[j][1])co1+=7;
			if(bgc[j][1]==1)co1+=64;
			else if(bgc[j][1]==2)co1+=16;
			else if(bgc[j][1]==3)co1+=32;
			color(co1);
			printf(" %c ",scr[j][1]);
			color(7);
			printf("|");
			co1=7;
			if(luck[2]==j)co1+=3;
			else if(tip[j][2])co1+=7;
			if(bgc[j][2]==1)co1+=64;
			else if(bgc[j][2]==2)co1+=16;
			else if(bgc[j][2]==3)co1+=32;
			color(co1);
			printf(" %c ",scr[j][2]);
			color(7);
			co1=7;
			if(luck[3]==j)co1+=3;
			else if(tip[j][3])co1+=7;
			if(bgc[j][3]==1)co1+=64;
			else if(bgc[j][3]==2)co1+=16;
			else if(bgc[j][3]==3)co1+=32;
			color(co1);
			printf(" %c ",scr[j][3]);
			color(7);
			printf("|");
		}
		puts("");
	}
	puts("");
}
