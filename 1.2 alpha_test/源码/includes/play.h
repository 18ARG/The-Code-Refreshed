void play() {
	bool over=0;
	char doer[5],dire[5],d2[5];
	while(!over) {
		scanf("%s",doer);
		if(doer[0]=='M') {
			printf("输入移动方向，按0取消\n");
			scanf("%s",dire);
			cardo(dire[0]);
		} else if(doer[0]=='Q') {
			printf("获取提示(5分) 购买次数(10分) 输入所需格点 或输入W购买步数\n");
			scanf("%s",dire);
			if(dire[0]=='W') {
				if(tct>=lts+2){
					printf("你氮腾啊，真是土豪，可惜已经卖空了\n");
					loading(1.5);
					system("cls");
					printsitu();
					continue;
				}
				printf("确认付款？按Y确定\n");
				scanf("%s",dire+2);
				if(dire[2]=='Y') {
					tct++;
					ct++;
					cost+=10;
				}
			} else if(!tip[dire[0]-'A'][dire[1]-'1']&&'A'<=dire[0]&&'F'>=dire[0]&&'1'<=dire[1]&&'4'>=dire[1]&&luck[dire[1]-'1']!=dire[0]-'A')
				tip[dire[0]-'A'][dire[1]-'1']=1,cost+=5;
			else {
				printf("请求错误!\n");
				loading(1);
				system("cls");
				printsitu();
				continue;
			}
			guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=ans[dire[0]-'A'][dire[1]-'1'];
			system("cls");
			printsitu();
		} else if(doer[0]=='H') {
			char ansss[5];
			printf("输入上交格点,按N取消\n");
			scanf("%s",dire);
			if('A'>dire[0]||'A'+lts-1<dire[0]||'1'>dire[1]||'4'<dire[1]) {
				if(dire[0]!='N')printf("格点不存在");
				loading(1);
				system("cls");
				printsitu();
				continue;
			}
			printf("输入答案,按0取消\n");
			scanf("%s",ansss);
			if(ansss[0]=='0') {
				system("cls");
				printsitu();
				continue;
			}
			guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=ansss[0];
		} else if(doer[0]=='O') {
			printf("确定要结束吗？如果确定输入Y，否则输入其他任意字符\n");
			scanf("%s",dire);
			if(dire[0]=='Y')over=1;
		} else {
			printf("错误的命令!\n");
		}
		system("cls");
		printsitu();
	}
}
