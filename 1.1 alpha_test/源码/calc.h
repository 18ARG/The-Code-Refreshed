void calc() {
	system("cls");
	for(int i=0; i<6; i++) {
		for(int j=0; j<4; j++) {
			if(scr[i][j]==' ') {
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
			if(j==2&&ans[i][3]=='3') {
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
	if(tot>=120)color(10);
	else if(tot>=72)color(7);
	else if(tot>0)color(12);
	else color(4);
	loading(1);
	printf("%d！\n",tot);
	color(7);
	for(int i=0; i<6; i++) {
		for(int j=0; j<4; j++) {
			scr[i][j]=ans[i][j];
		}
	}
	printf("按任意键查看答案\n");
	system("pause");
	psS();
	for(int i=tct; i>0; i--)printcar(i);
	system("pause");
}
