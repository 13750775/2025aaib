//week06-4
//程式模仿備份 week04_5 及 week03_4
void setup(){
    size(600, 400);
}

float fishX = 300, fishY = 200; // 魚座標
float [] x = new float[100];  // Java 的陣列
float [] y = new float[100];  // 最多有100個釣桿

int N = 0;  // 目前已儲存的釣桿

void draw(){
    background(#C0ffee);
    for(int i=0; i<N; i++){  // for 迴圈
        ellipse(x[i], y[i], 8, 8);  // 飼料的陣列
        y[i]++;
        if(y[i]>400){
        for(int k=i; k<N;k++){
          x[k]=x[k+1];
          y[k]=y[k+1];
        }
        N--;
       }
    }
    ellipse(fishX, fishY, 30, 10);  // 魚
}

void mousePressed(){
    x[N] = mouseX;
    y[N] = mouseY;
    N++;
}
