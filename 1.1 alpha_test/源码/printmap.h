void printmap() {
	puts("\nµØÍ¼£º");
	printf("  1 2 3 4 5 6\n");
	for(int i=0; i<6; i++) {
		color(7);
		printf("%d ",i+1);
		for(int j=0; j<6; j++) {
			printnode(mp[i][j]);
		}
		puts("");
	}
	color(7);
}
