void play() {
	bool over=0;
	char doer[5],dire[5],d2[5];
	while(!over) {
		scanf("%s",doer);
		if(doer[0]=='M') {
			printf("�����ƶ����򣬰�0ȡ��\n");
			scanf("%s",dire);
			cardo(dire[0]);
		} else if(doer[0]=='Q') {
			printf("��T��ȡ��ʾ(5��) ��W�����ƶ�����(10��)\n��SΪ������ñ�ǵ�ɫ(���) ��MΪ��ͼ���ñ�ǵ�ɫ(���)\n");
			scanf("%s",dire);
			if(dire[0]=='W') {
				if(tct>=lts+2) {
					printf("�㵪�ڰ���������������ϧ�Ѿ�������\n");
					loading(1.5);
				}
				printf("ȷ�ϸ����Yȷ��\n");
				scanf("%s",dire+2);
				if(dire[2]=='Y') {
					tct++;
					ct++;
					cost+=10;
				}
			} else if(dire[0]=='T') {
				printf("����������\n");
				char di[10];
				scanf("%s",di);
				if(!tip[di[0]-'A'][di[1]-'1']&&'A'<=di[0]&&'A'+lts-1>=di[0]&&'1'<=di[1]&&'4'>=di[1]&&luck[di[1]-'1']!=di[0]-'A'&&luck[di[1]-'1']!=di[0]-'A') {
					tip[di[0]-'A'][di[1]-'1']=1;
					guess[di[0]-'A'][di[1]-'1']=ans[di[0]-'A'][di[1]-'1'];
					scr[di[0]-'A'][di[1]-'1']=ans[di[0]-'A'][di[1]-'1'];
				} else {
					printf("�������!\n");
					loading(1);
				}
			} else if(dire[0]=='M') {
				printf("������������\n");
				int x,y;
				scanf("%d%d",&x,&y);
				char colour[10];
				printf("�����ɫ(1�����ɫ,2������ɫ,3������ɫ,0��������ɫ,��������ȡ��)\n");
				scanf("%s",colour);
				if(x<1||x>lts||y<1||y>lts)printf("�������!\n");
				else if('0'<=colour[0]&&colour[0]<='3') mbgc[x-1][y-1]=colour[0]-'0';
			} else if(dire[0]=='S') {
				printf("����������\n");
				char di[10],colour[10];
				scanf("%s",di);
				int x=di[0]-'A',y=di[1]-'1';
				printf("�����ɫ(1�����ɫ,2������ɫ,0��������ɫ,3������ɫ,��������ȡ��)\n");
				scanf("%s",colour);
				if(x<0||x>lts-1||y<0||y>3)printf("�������!\n");
				else if('0'<=colour[0]&&colour[0]<='3')  bgc[x][y]=colour[0]-'0';
			}
		} else if(doer[0]=='H') {
			char ansss[5];
			printf("�����Ͻ����,��Nȡ��\n");
			scanf("%s",dire);
			if('A'>dire[0]||'A'+lts-1<dire[0]||'1'>dire[1]||'4'<dire[1]||luck[dire[1]-'1']==dire[0]-'A') {
				if(dire[0]!='N')printf("�������!\n");
				loading(1);
				continue;
			}
			printf("�����,��0ȡ��,��#�������Ͻ���\n");
			scanf("%s",ansss);
			if(ansss[0]=='0') {
			}
			if(ansss[0]=='#') {
				guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=' ';
			}
			guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=ansss[0];
		} else if(doer[0]=='O') {
			printf("ȷ��Ҫ���������ȷ������Y�������������������ַ�\n");
			scanf("%s",dire);
			if(dire[0]=='Y')over=1;
		} else {
			printf("���������!\n");
		}
		system("cls");
		printsitu();
	}
}
