int func2(int x, int y){
  y = y - x;
  return y;
}

int func1(int x, int y){
  y = y + x;
  x = y;
  x = x + y;
  y = x;
  x = func2(3, y);
  return x;
}

int main(){
  int a = func1(6,4);
  return 0;
}
