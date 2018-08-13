void intodo() {
	printf("请按任意键进入");
	color(3);
	puts("THE CODE OF THE WASHER");
	color(7);
	puts("温馨提示：请开大写锁定\n");
	printf("18");
	color(11);
	printf("A");
	color(14);
	printf("R");
	color(10);
	printf("G");
	color(7);
	printf("出品\n制作人：三千焦\n测试人：裹严实\n设计人：三千焦&还有谁\n");
	puts("测试版本,如有bug或规则错误请联系制作人\n");
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
	printf("\n加载完毕！");
	loading(0.5);
	system("cls");
	//printf("输入S查看开场动画(温馨提示：五毛钱特效)\n输入其他字符直接进入游戏\n\n请输入：");
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
