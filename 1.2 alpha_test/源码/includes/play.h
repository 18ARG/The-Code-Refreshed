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
			printf("��ȡ��ʾ(5��) �������(10��) ���������� ������W������\n");
			scanf("%s",dire);
			if(dire[0]=='W') {
				if(tct>=lts+2){
					printf("�㵪�ڰ���������������ϧ�Ѿ�������\n");
					loading(1.5);
					system("cls");
					printsitu();
					continue;
				}
				printf("ȷ�ϸ����Yȷ��\n");
				scanf("%s",dire+2);
				if(dire[2]=='Y') {
					tct++;
					ct++;
					cost+=10;
				}
			} else if(!tip[dire[0]-'A'][dire[1]-'1']&&'A'<=dire[0]&&'F'>=dire[0]&&'1'<=dire[1]&&'4'>=dire[1]&&luck[dire[1]-'1']!=dire[0]-'A')
				tip[dire[0]-'A'][dire[1]-'1']=1,cost+=5;
			else {
				printf("�������!\n");
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
			printf("�����Ͻ����,��Nȡ��\n");
			scanf("%s",dire);
			if('A'>dire[0]||'A'+lts-1<dire[0]||'1'>dire[1]||'4'<dire[1]) {
				if(dire[0]!='N')printf("��㲻����");
				loading(1);
				system("cls");
				printsitu();
				continue;
			}
			printf("�����,��0ȡ��\n");
			scanf("%s",ansss);
			if(ansss[0]=='0') {
				system("cls");
				printsitu();
				continue;
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
