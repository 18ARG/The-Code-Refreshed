bool end() {
	printf("确定要结束吗？如果确定输入Y，否则输入其他任意字符\n");
	char dire[5];
	scanf("%s",dire);
	if(dire[0]=='Y')return 0;
	else return 1;
}
