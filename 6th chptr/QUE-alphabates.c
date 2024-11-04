
int main(){
  char ch= 122;
  char chr =90;
  char *abc = &ch;
  char *ABC = &chr;
  for(int i=97; i<=*abc; i++){
    printf("%c ", i);
  }for(int j =65; j<=*ABC; j++){
      printf("%c ", j);
    }
  return 0;