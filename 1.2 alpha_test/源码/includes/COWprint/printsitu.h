void printsitu() {
	psS();
	for(int i=tct; i>0; i--)printcar(i);
	printf("��λ��(%d,%d)",x+1,y+1);
	printnode(mp[x][y]);
	printf(",");
	printf("����M�ƶ�(���ỹ��%d��),����Q������ʾ,����H�ύ,����O����ȫ��\n",ct);
}
