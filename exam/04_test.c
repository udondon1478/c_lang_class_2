struct Member { 
  int jap; 
  int mat;
  int sci;
};

int n;
scanf("%d", &n);
struct Member member[n]; 
for(int i=0; i<n; i++){
    scanf("%d %d %d", &member[i].jap, &member[i].mat, &member[i].sci);
    // 各学生の平均点を算出する処理を記述してください
}
