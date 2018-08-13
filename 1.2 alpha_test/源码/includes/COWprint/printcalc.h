void printcalc(){
	system("cls");
	for(int i=0; i<lts; i++) {
		for(int j=0; j<4; j++) {
			if(guess[i][j]=='\0') {
				printnode(i);
				color(240);
				printf("%d(%c)",j+1,' ');
				printf(" NULL \n");
				continue;
			}
			if(luck[j]==i) {
				printnode(i);
				color(208);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" given\n");
				continue;
			}
			if(tip[i][j]) {
				printnode(i);
				color(224);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" tips \n");
				tot-=5;
				continue;
			}
			if(j==2&&ans[i][3]=='0'+(lts>>1)) {
				if(ans[i][2]=='D'||ans[i][2]=='U') {
					if(guess[i][j]=='D'||guess[i][j]=='U') {
						printnode(i);
						color(160);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" right\n");
						color(7);
						tot+=6;
					} else {
						printnode(i);
						color(192);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" wrong\n");
						color(7);
					}
				} else {
					if(guess[i][j]=='L'||guess[i][j]=='R') {
						printnode(i);
						color(160);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" right\n");
						color(7);
						tot+=6;
					} else {
						printnode(i);
						color(192);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" wrong\n");
						color(7);
					}
				}
			} else if(guess[i][j]==ans[i][j]) {
				printnode(i);
				color(160);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" right\n");
				color(7);
				tot+=6;
			} else {
				printnode(i);
				color(192);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" wrong\n");
				color(7);
			}
		}
	}
	tot-=cost;
	color(7);
	printf("你的总分是——");
	int all=24*(lts-1);
	if(tot>=all)color(10);
	else if(tot>=0.8*all)color(11);
	else if(tot>=0.5*all)color(14);
	else if(tot>0)color(12);
	else color(4);
	printf("%d！\n",tot);
	color(7);
	for(int i=0; i<lts; i++) {
		for(int j=0; j<4; j++) {
			scr[i][j]=ans[i][j];
		}
	}
	psS();
	for(int i=tct; i>0; i--)printcar(i);
	system("pause");
}
