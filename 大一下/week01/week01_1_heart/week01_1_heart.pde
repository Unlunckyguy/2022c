//(x*x+y*y-1)^3-x*x*y*y*y==0
size(400,400); //視窗大小
fill(255,0,0);//red
noStroke(); //不要用外框的stroke
ellipse(200,200,100,150); //先是橢圓
for(int i=0;i<400;i++){ //左手i對應y座標
  for(int j=0;j<400;j++){ //右手j對應x座標
    //要把 大的座標 j,i換成數學 -2~+2的x,y
    //0...400減200變-200..+200 再除100.0 -2..+2
    float x=(j-200)/100.0;
    float y=-(i-200)/100.0; //y要改成負號
    if((x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1)-x*x*y*y*y<0){
      ellipse(j,i,2,2);
      }
   }
}
