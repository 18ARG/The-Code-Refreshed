void mapfill() {
	color(12);
	printf("地图生成中...\n");
	int yet[10];
	memset(yet,0,sizeof(yet));
	for(int i=0; i<lts; i++) {
		for(int j=0; j<lts; j++) {
			int x=rand()%lts;
			while(yet[x]>=lts)x=rand()%lts;
			mp[i][j]=x;
			yet[x]++;
		}
	}
	loading(0.3);
	color(7);
	printf("地图生成完毕!按任意键查看地图\n\n");
	system("pause");
	psS();
	system("pause");
	system("cls");
}
