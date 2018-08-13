void ansfill() {
	color(6);
	printf("数据生成中...\n");
	color(7);
	loading(0.3);
	for(int i=0; i<6; i++) {
		int a1=rand()%5;
		if(a1==0||a1==2)ans[i][0]='+';
		else if(a1==1||a1==3)ans[i][0]='-';
		else ans[i][0]='*';
		if(ans[i][0]=='*')ans[i][1]=rand()%2+'2';
		else ans[i][1]=rand()%3+'1';
		int a2=rand()%4;
		if(a2==0)ans[i][2]='U';
		else if(a2==1)ans[i][2]='D';
		else if(a2==2)ans[i][2]='L';
		else ans[i][2]='R';
		ans[i][3]=rand()%3+'1';
	}
	for(int i=0; i<4; i++) {
		luck[i]=rand()%6;
		guess[luck[i]][i]=1;
	}
	for(int i=0; i<6; i++) {
		for(int j=0; j<4; j++) {
			if(i!=luck[j])scr[i][j]=' ';
			else scr[i][j]=ans[i][j];
		}
	}
	x=rand()%6;
	y=rand()%6;
	printf("数据生成完毕!\n\n");
}
