void intodo() {
	printf("�밴���������");
	color(3);
	puts("THE CODE OF THE WASHER");
	color(7);
	puts("��ܰ��ʾ���뿪��д����\n");
	printf("18");
	color(11);
	printf("A");
	color(14);
	printf("R");
	color(10);
	printf("G");
	color(7);
	printf("��Ʒ\n�����ˣ���ǧ��\n�����ˣ�����ʵ\n����ˣ���ǧ��&����˭\n");
	puts("���԰汾,����bug������������ϵ������\n");
	system("pause");
	puts("");
	for(int i=1; i<=100; i++) {
		loading(0.005);
		//system("cls");
		printf("Loading...%03d%%\t",i);
		for(int j=0; j<50; j++) {
			if(i>(j<<1))printf("%%");
			else printf(".");
		}
		puts("");
	}
	printf("\n������ϣ�");
	loading(0.5);
	system("cls");
	//printf("����S�鿴��������(��ܰ��ʾ����ëǮ��Ч)\n���������ַ�ֱ�ӽ�����Ϸ\n\n�����룺");
	//char tyty[5];
	//scanf("%s",tyty);
	/*	if(tyty[0]=='S') {
		system("cls");
		loading(2);
		color(10);
		puts("I am walking about");
		loading(2);
		color(14);
		puts("I am talking aloud");
		loading(2);
		color(9);
		puts("Here We Go");
		loading(2);
		puts("Here We Go");
		color(7);
		loading(2);
		printf("Welcome to");
		loading(0.5);
		printf(".");
		loading(0.5);
		printf(".");
		loading(0.5);
		printf(".");
		loading(2);
		color(11);
		printf("\nTHE CODE OF THE WASHER!\n\n");
		color(7);
		loading(1.8);
	}//*/
	loading(0.2);
	system("cls");
}
