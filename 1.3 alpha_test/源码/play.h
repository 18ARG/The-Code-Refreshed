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
			printf("按T获取提示(5分) 按W购买移动次数(10分)\n按S为格点设置标记底色(免费) 按M为地图设置标记底色(免费)\n");
			scanf("%s",dire);
			if(dire[0]=='W') {
				if(tct>=lts+2) {
					printf("你氮腾啊，真是土豪，可惜已经卖空了\n");
					loading(1.5);
				}
				printf("确认付款？按Y确定\n");
				scanf("%s",dire+2);
				if(dire[2]=='Y') {
					tct++;
					ct++;
					cost+=10;
				}
			} else if(dire[0]=='T') {
				printf("输入所需格点\n");
				char di[10];
				scanf("%s",di);
				if(!tip[di[0]-'A'][di[1]-'1']&&'A'<=di[0]&&'A'+lts-1>=di[0]&&'1'<=di[1]&&'4'>=di[1]&&luck[di[1]-'1']!=di[0]-'A'&&luck[di[1]-'1']!=di[0]-'A') {
					tip[di[0]-'A'][di[1]-'1']=1;
					guess[di[0]-'A'][di[1]-'1']=ans[di[0]-'A'][di[1]-'1'];
					scr[di[0]-'A'][di[1]-'1']=ans[di[0]-'A'][di[1]-'1'];
				} else {
					printf("请求错误!\n");
					loading(1);
				}
			} else if(dire[0]=='M') {
				printf("输入所需坐标\n");
				int x,y;
				scanf("%d%d",&x,&y);
				char colour[10];
				printf("输入底色(1代表红色,2代表蓝色,3代表绿色,0代表撤销底色,其他代表取消)\n");
				scanf("%s",colour);
				if(x<1||x>lts||y<1||y>lts)printf("请求错误!\n");
				else if('0'<=colour[0]&&colour[0]<='3') mbgc[x-1][y-1]=colour[0]-'0';
			} else if(dire[0]=='S') {
				printf("输入所需格点\n");
				char di[10],colour[10];
				scanf("%s",di);
				int x=di[0]-'A',y=di[1]-'1';
				printf("输入底色(1代表红色,2代表蓝色,0代表撤销底色,3代表绿色,其他代表取消)\n");
				scanf("%s",colour);
				if(x<0||x>lts-1||y<0||y>3)printf("请求错误!\n");
				else if('0'<=colour[0]&&colour[0]<='3')  bgc[x][y]=colour[0]-'0';
			}
		} else if(doer[0]=='H') {
			char ansss[5];
			printf("输入上交格点,按N取消\n");
			scanf("%s",dire);
			if('A'>dire[0]||'A'+lts-1<dire[0]||'1'>dire[1]||'4'<dire[1]||luck[dire[1]-'1']==dire[0]-'A') {
				if(dire[0]!='N')printf("请求错误!\n");
				loading(1);
				continue;
			}
			printf("输入答案,按0取消,按#撤销已上交答案\n");
			scanf("%s",ansss);
			if(ansss[0]=='0') {
			}
			if(ansss[0]=='#') {
				guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=' ';
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
