int calc(int b, int c, int d){
  if(d<b){
    c = c + d;
    d++;
    return d;
  }else{
     return 0;
  }
}

int main(){
  int a = 4;
  int b = 0;
  int c = 0;
  int d;
  if(a == 1){
	b = 1;
	d = 0;
	return calc(b, c, d);
  }else if(a == 4){
	b = 2;
	d = 0;
	return calc(b, c, d);
  }else{
	b = 3;
	return a;
  }
}
