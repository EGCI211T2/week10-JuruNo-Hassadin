struct Time{
	int h,m,s;
};
void getTime(struct Time &t){
	
	cin>>t.h>>t.m>>t.s;
}
struct Time subtract(struct Time t2,struct Time t1){
	struct Time t3;//t3=t2-t1
	int sec1 = t1.h*3600 + t1.m*60 + t1.s;
	int sec2 = t2.h*3600 + t2.m*60 + t2.s;
	int diff = sec2 - sec1;
	if (diff < 0) diff += 24*3600; 
	t3.h = diff / 3600;
	t3.m = (diff % 3600) / 60;
	t3.s = diff % 60;
	return t3;
}
void display(struct Time t){
	cout<<"t3 ";
	if(t.h<10) cout<<"0";
	cout << t.h<<":";
	if(t.m<10) cout<<"0";
	cout << t.m<<":";
	if(t.s<10) cout<<"0";
	cout << t.s<< endl;
}

//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions