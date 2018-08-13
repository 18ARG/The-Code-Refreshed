void ansfill() {
	printf("请输入字母个数(注：只有5~9,默认为6)慎重选择!这与难度息息相关\n");
	lts=6;
	char ltss[5];
	scanf("%s",ltss);
	if(ltss[0]=='5'&&ltss[1]==0)lts--,tct--,ct--;
	else if(ltss[0]=='7'&&ltss[1]==0)lts++;
	else if(ltss[0]=='8'&&ltss[1]==0)lts=8,tct++,ct++;
	else if(ltss[0]=='9'&&ltss[1]==0)lts=9,tct++,ct++;
	int ruh=(lts>=8?4:3);
	color(6);
	printf("数据生成中...\n");
	color(7);
	loading(0.3);
	for(int i=0; i<lts; i++) {
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
		ans[i][3]=rand()%ruh+'1';
	}
	for(int i=0; i<4; i++) {
		luck[i]=rand()%lts;
		guess[luck[i]][i]=1;
	}
	for(int i=0; i<lts; i++) {
		for(int j=0; j<4; j++) {
			if(i!=luck[j])scr[i][j]=' ';
			else scr[i][j]=ans[i][j];
		}
	}
	x=rand()%lts;
	y=rand()%lts;
	printf("数据生成完毕!\n\n");
}
