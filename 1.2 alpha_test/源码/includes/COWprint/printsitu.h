void printsitu() {
	psS();
	for(int i=tct; i>0; i--)printcar(i);
	printf("你位于(%d,%d)",x+1,y+1);
	printnode(mp[x][y]);
	printf(",");
	printf("输入M移动(机会还有%d次),输入Q请求提示,输入H提交,输入O结束全局\n",ct);
}
