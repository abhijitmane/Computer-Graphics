#include "guitar.h"

void DrawPoints(float points[][3]) {
  int i; 
  glPointSize(2.5f);
  // Loop through all control points for this example
  glBegin(GL_POINTS);
  for(i = 0; i < SUBPOINT; i++)
    glVertex3fv(points[i]);
  glEnd();
}
void DrawLine(int no,float rectang[][3]) {
  int i; // Counting variable
  glPointSize(2.5f);
  // Loop through all control points for this example
  glBegin(GL_LINE_LOOP);
  for(i = 0; i < no; i++)
    glVertex3fv(rectang[i]);
  glEnd();
}
void DrawLine4(int cnt,float rectang2[][3])
{
  int i; // Counting variable
  glPointSize(3.0f);
  // Loop through all control points for this example
  glBegin(GL_LINE);
  for(i = 0; i < cnt ; i++){
    glVertex3fv(rectang2[i]);
    if(i+1 < cnt)
      glVertex3fv(rectang2[i+1]);
  }
  glEnd();
}
void drawTriangle()
{
  int i;
  for(i = 1; i <= NCONTORL; i++){
    glBegin(GL_LINE_LOOP);//GL_LINE_LOOP : To draw lines between specified Vertices, and join the first and last.
    {
      glVertex3fv(circlePoints1[i-1]);
      glVertex3fv(circlePoints[(i)%NCONTORL]);
      glVertex3fv(circlePoints1[i-1]);
    }
    glEnd();
  }
}
void drawTriangle1()
{
  int i;
  //glColor3f(1.0,0.0,1.0);
  for(i = 1; i <= SUBPOINT; i+=25){
    glBegin(GL_LINE_LOOP);//GL_LINE_LOOP : To draw lines between specified Vertices, and join the first and last.
    {
      glVertex3fv(points[i]);
      //if(i + 25 < SUBPOINT )
	//glVertex3fv(points2[(i+25)]);
      glVertex3fv(points2[i]);
    }
    glEnd();
  }
  glBegin(GL_LINE_LOOP);//GL_LINE_LOOP : To draw lines between specified Vertices, and join the first and last.
    {
      glVertex3fv(points[i-25]);
      //glVertex3fv(points2[i-2]);
      glVertex3fv(points2[i-25]);
    }
    glEnd();
    glBegin(GL_LINE);//GL_LINE_LOOP : To draw lines between specified Vertices, and join the first and last.
    {
      glVertex3fv(points[i-2]);
      glVertex3fv(points2[i-2]);
    }
    glEnd();
    
    for(i = 1; i < SUBPOINT; i+=25){
    glBegin(GL_LINE_LOOP);//GL_LINE_LOOP : To draw lines between specified Vertices, and join the first and last.
    {
      glVertex3fv(points1[i]);
      // if(i+25 < SUBPOINT)
      //glVertex3fv(points3[(i+25)]);
      glVertex3fv(points3[i]);
    }
    glEnd();
    }
    glBegin(GL_LINE_LOOP);//GL_LINE_LOOP : To draw lines between specified Vertices, and join the first and last.
    {
      glVertex3fv(points1[i-25]);
      // glVertex3fv(points3[i-2]);
      glVertex3fv(points3[i-25]);
    }
    glEnd();
}


void drawGride(void) {
  
  int i,j;
  
  for(i = 1; i <= SUBPOINT/2; i +=25) {
    glBegin(GL_LINE);
    glVertex3fv(points2[i]);
    glVertex3fv(points2[SUBPOINT-i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT/2; i += 25) {
    glBegin(GL_LINE);
    glVertex3fv(points3[i]);
    glVertex3fv(points3[SUBPOINT-i]);
    glEnd();
    }
  for(i = 1; i <= SUBPOINT; i += 60) {
    glBegin(GL_LINE);
    glVertex3fv(curvL[i]);
    glVertex3fv(curvR[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG[i]);
    glVertex3fv(curvG1[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG2[i]);
    glVertex3fv(curvG5[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG3[i]);
    glVertex3fv(curvG6[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG4[i]);
    glVertex3fv(curvG7[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG8[i]);
    glVertex3fv(curvG16[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG9[i]);
    glVertex3fv(curvG17[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG10[i]);
    glVertex3fv(curvG18[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG11[i]);
    glVertex3fv(curvG19[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG12[i]);
    glVertex3fv(curvG20[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG13[i]);
    glVertex3fv(curvG21[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG14[i]);
    glVertex3fv(curvG22[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG15[i]);
    glVertex3fv(curvG23[i]);
    glEnd();
  }
  ///
  for(i = 1; i < SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG9[i]);
    glVertex3fv(curvG13[i]);
    glEnd();
  }
  
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG17[i]);
    glVertex3fv(curvG21[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG2[i]);
    glVertex3fv(curvG10[SUBPOINT-i]);
    glEnd();
  }
  for(i = 0; i < SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG4[i]);
    glVertex3fv(curvG14[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG7[i]);
    glVertex3fv(curvG22[i]);
    glEnd();
  }
  for(i = 1; i <= SUBPOINT; i += 100) {
    glBegin(GL_LINE);
    glVertex3fv(curvG5[i]);
    glVertex3fv(curvG18[SUBPOINT-i]);
    glEnd();
  }
  
  ///
  for(i = 0; i < 8; i += 1) {
    glBegin(GL_LINE);
    glVertex3fv(rectang5[i]);
    glVertex3fv(rectang6[i]);
    glEnd();
  }
  for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle1[i]);
    glVertex3fv(circle4[i]);
    glEnd();
  }
  for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle2[i]);
    glVertex3fv(circle5[i]);
    glEnd();
  }
  for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle3[i]);
    glVertex3fv(circle6[i]);
    glEnd();
  }
  for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle11[i]);
    glVertex3fv(circle21[i]);
    glEnd();
  }

  for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle12[i]);
    glVertex3fv(circle22[i]);
    glEnd();
  }

for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle13[i]);
    glVertex3fv(circle23[i]);
    glEnd();
  }

for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle14[i]);
    glVertex3fv(circle24[i]);
    glEnd();
  }

for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle15[i]);
    glVertex3fv(circle25[i]);
    glEnd();
  }

for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle16[i]);
    glVertex3fv(circle26[i]);
    glEnd();
  }
 
for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle31[i]);
    glVertex3fv(circle41[i]);
    glEnd();
 }
 for(i = 0; i < INCRTL; i += 2) {
  glBegin(GL_LINE);
    glVertex3fv(circle32[i]);
    glVertex3fv(circle42[i]);
    glEnd();
  }
for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle33[i]);
    glVertex3fv(circle43[i]);
    glEnd();
  }
for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle34[i]);
    glVertex3fv(circle44[i]);
    glEnd();
  }
for(i = 0; i < INCRTL; i += 2) {
    glBegin(GL_LINE);
    glVertex3fv(circle35[i]);
    glVertex3fv(circle45[i]);
    glEnd();
  }
 for(i = 0; i < INCRTL; i += 2) {
   glBegin(GL_LINE);
    glVertex3fv(circle36[i]);
    glVertex3fv(circle46[i]);
    glEnd();
  }
}

void makeCircle(float center[3],float radius,float circlePoints[][3],int flg)
{
  
  float theta = 0.0;
  int i=0;
  if(flg == 0){
  for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(NCONTORL))
    {
      circlePoints[i][0] = center[0]+ (radius * cos(theta));
      circlePoints[i][1] = center[1]+ (radius * sin(theta));
      circlePoints[i][2] = 0.0;
      i++;
    }
  }
  else if (flg == 1){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(NCONTORL))
      {
	circlePoints1[i][0] = center[0]+ (radius * cos(theta));
	circlePoints1[i][1] = center[1]+ (radius * sin(theta));
	circlePoints1[i][2] = 0.0;
	i++;
      }
  }
  else if (flg == 2){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle1[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle1[i][1] = -1.0;
	circle1[i][2] = (center[2]+0.8)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 3){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle2[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle2[i][1] = -1.2;
	circle2[i][2] = (center[2]+1.0)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 4){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle3[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle3[i][1] = -1.4;
	circle3[i][2] = (center[2]+1.2)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 5){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle4[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle4[i][1] = 1.0;
	circle4[i][2] = (center[2]+0.8)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 6){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle5[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle5[i][1] = 1.2;
	circle5[i][2] = (center[2]+1.0)+ (radius * sin(theta));
	i++;
      }
  }
  else if(flg == 7) {
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle6[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle6[i][1] = 1.4;
	circle6[i][2] = (center[2]+1.2)+ (radius * sin(theta));
	i++;
      }
  }
  
  else if (flg == 8){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle11[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle11[i][1] = -1.5;
	circle11[i][2] = (center[2]+1.8)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 9){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle12[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle12[i][1] = -1.7;
	circle12[i][2] = (center[2]+2.0)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 10){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle13[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle13[i][1] = -1.9;
	circle13[i][2] = (center[2]+2.2)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 11){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle14[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle14[i][1] = 1.5;
	circle14[i][2] = (center[2]+1.8)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 12){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle15[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle15[i][1] = 1.7;
	circle15[i][2] = (center[2]+2.0)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 13){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle16[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle16[i][1] = 1.9;
	circle16[i][2] = (center[2]+2.2)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 14){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle21[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle21[i][1] = -1.4;
	circle21[i][2] = (center[2]+1.8)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 15){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle22[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle22[i][1] = -1.6;
	circle22[i][2] = (center[2]+2.0)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 16){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle23[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle23[i][1] = -1.8;
	circle23[i][2] = (center[2]+2.2)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 17){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle24[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle24[i][1] = 1.4;
	circle24[i][2] = (center[2]+1.8)+ (radius * sin(theta));
	i++;
      }
  }
  else if (flg == 18){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle25[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle25[i][1] = 1.6;
	circle25[i][2] = (center[2]+2.0)+ (radius * sin(theta));
	i++;
      }
  }
  else if(flg == 19) {
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle26[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle26[i][1] = 1.8;
	circle26[i][2] = (center[2]+2.2)+ (radius * sin(theta));
	i++;
      }
  }
  
  else if (flg == 20){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle31[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle31[i][1] = (center[2]-1.3) + (radius * sin(theta));
	circle31[i][2] = 0.4;
	i++;
      }
  }
  else if (flg == 21){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle32[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle32[i][1] =(center[2]-1.5)+ (radius * sin(theta));
	circle32[i][2] = 0.8;
	i++;
      }
  }
  else if (flg == 22){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle33[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle33[i][1] = (center[2]-1.7)+ (radius * sin(theta));
	circle33[i][2] = 1.0;
	i++;
      }
  }
  else if (flg == 23){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle34[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle34[i][1] = (center[2]+1.3)+ (radius * sin(theta));
	circle34[i][2] = 0.4;
	i++;
      }
  }
  else if (flg == 24){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle35[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle35[i][1] = (center[2]+1.5)+ (radius * sin(theta));
	circle35[i][2] = 0.8;
	i++;
      }
  }
  else if(flg == 25){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle36[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle36[i][1] = (center[2]+1.7)+ (radius * sin(theta));
	circle36[i][2] = 1.0;
	i++;
      }
  }
  else if (flg == 26){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle41[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle41[i][1] = (center[2]-1.4) + (radius * sin(theta));
	circle41[i][2] = 1.6;
	i++;
      }
  }
  else if (flg == 27){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle42[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle42[i][1] =(center[2]-1.6)+ (radius * sin(theta));
	circle42[i][2] = 1.8;
	i++;
      }
  }
  else if (flg == 28){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle43[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle43[i][1] = (center[2]-1.8)+ (radius * sin(theta));
	circle43[i][2] = 2.0;
	i++;
      }
  }
  else if (flg == 29){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle44[i][0] = (center[0]+11.5)+ (radius * cos(theta));
	circle44[i][1] = (center[2]+1.4)+ (radius * sin(theta));
	circle44[i][2] = 1.6;
	i++;
      }
  }
  else if (flg == 30){
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle45[i][0] = (center[0]+12.1)+ (radius * cos(theta));
	circle45[i][1] = (center[2]+1.6)+ (radius * sin(theta));
	circle45[i][2] = 1.8;
	i++;
      }
  }
  else {
    for(theta = 0.0;theta < (2.0*PI); theta += (2.0*PI)/(INCRTL))
      {
	circle46[i][0] = (center[0]+12.7)+ (radius * cos(theta));
	circle46[i][1] = (center[2]+1.8)+ (radius * sin(theta));
	circle46[i][2] = 2.0;
	i++;
      }
  }
}

void drawPolygon(float polygonPts[][3],int sizePolygon)
{
	int i;
	glBegin(GL_LINE_LOOP);
	{
	  for(i=0;i<sizePolygon;i++)
		{
		  glVertex3fv(polygonPts[i]);
		}
	}
	glEnd();
}
void drawRectrangle(float polygonPts[][3],int sizePolygon)
{
	int i;
	glBegin(GL_LINE_LOOP);
	{
	  for(i=0;i<sizePolygon;i++)
		{
		  glVertex3fv(polygonPts[i]);
		}
	}
	glEnd();
}

void funCall(void) {
  DrawPoints(points); //upper curve left 
  DrawPoints(points1);//upper right
   DrawPoints(points2);
  DrawPoints(points3);
  DrawLine4(6,rectang2);
  DrawLine4(6,rectang1);
  drawTriangle1();
  
  drawPolygon(circlePoints,NCONTORL);
  drawPolygon(circlePoints1,NCONTORL);
  drawPolygon(circle1,INCRTL);
  drawPolygon(circle2,INCRTL);
  drawPolygon(circle3,INCRTL);
  drawPolygon(circle4,INCRTL);
  drawPolygon(circle5,INCRTL);
  drawPolygon(circle6,INCRTL);
  
  drawPolygon(circle11,INCRTL);
  drawPolygon(circle12,INCRTL);
  drawPolygon(circle13,INCRTL);
  drawPolygon(circle14,INCRTL);
  drawPolygon(circle15,INCRTL);
  drawPolygon(circle16,INCRTL);
  
  drawPolygon(circle21,INCRTL);
  drawPolygon(circle22,INCRTL);
  drawPolygon(circle23,INCRTL);
  drawPolygon(circle24,INCRTL);
  drawPolygon(circle25,INCRTL);
  drawPolygon(circle26,INCRTL);
  
  drawPolygon(circle31,INCRTL);
  drawPolygon(circle32,INCRTL);
  drawPolygon(circle33,INCRTL);
  drawPolygon(circle34,INCRTL);
  drawPolygon(circle35,INCRTL);
  drawPolygon(circle36,INCRTL);
  
  drawPolygon(circle41,INCRTL);
  drawPolygon(circle42,INCRTL);
  drawPolygon(circle43,INCRTL);
  drawPolygon(circle44,INCRTL);
  drawPolygon(circle45,INCRTL);
  drawPolygon(circle46,INCRTL);
  
  drawTriangle();
  DrawPoints(curvR);
  DrawPoints(curvL);
  DrawPoints(curvG);
  DrawPoints(curvG1);
  
  DrawPoints(curvG2);
  DrawPoints(curvG3);
  DrawPoints(curvG4);
  DrawPoints(curvG5);
  DrawPoints(curvG6);
  DrawPoints(curvG7);
  DrawPoints(curvG8);
  DrawPoints(curvG9);
  DrawPoints(curvG10);
  DrawPoints(curvG11);
  DrawPoints(curvG12);
  DrawPoints(curvG13);
  DrawPoints(curvG14);
  DrawPoints(curvG15);
  DrawPoints(curvG16);
  DrawPoints(curvG17);
  DrawPoints(curvG18);
  DrawPoints(curvG19);
  DrawPoints(curvG20);
  DrawPoints(curvG21);
  DrawPoints(curvG22);
  DrawPoints(curvG23);
  DrawLine(4,rectang);
  DrawLine(4,rectangT);
  
  DrawLine4(2,rectang3);
  DrawLine4(2,rectang4);
  DrawLine4(8,rectang5);
  DrawLine4(8,rectang6);
  
  DrawLine4(3,rectangA);
  DrawLine4(3,rectangB);
  DrawLine4(3,rectangC);
  DrawLine4(3,rectangD);
  DrawLine4(3,rectangE);
  DrawLine4(3,rectangF);

  DrawLine(6,degn);
  DrawLine(6,degn1);
  DrawLine(4,rectangAA);
  DrawLine(4,rectangBB);
  DrawLine(4,rectangCC);
  DrawLine(4,rectangDD);
  DrawLine(4,rectangEE);
  DrawLine(4,rectangFF);
  drawGride();
}

void makecheckImage(char *file, int flg)
{
  int i, j;
  GLubyte c[3];
  int file_handle;
  FILE *pFile;
  head = (HEADER *)malloc(sizeof(HEADER));
  infohead = (INFOHEADER *)malloc(sizeof(INFOHEADER));
  pFile = fopen(file,"rb");
  char buff[4];
  fread(head->type,2,1,pFile);
  fread(&(head->size),sizeof(unsigned int),1,pFile);
  fread(&(head->reserved1),sizeof(unsigned short int),1,pFile);
  fread(&(head->reserved2),sizeof(unsigned short int),1,pFile);
  fread(&(head->offset),sizeof(unsigned int),1,pFile);
  fread(&(infohead->size),sizeof(unsigned int),1,pFile);
  fread(&(infohead->width),sizeof(unsigned int),1,pFile);	  
  tex_width = infohead->width;
  fread(&(infohead->height),sizeof(unsigned int),1,pFile);	  
  tex_height = infohead->height;
  if(flg == 1) {
    for (i = 0; i < tex_height*tex_width*3;i+=3) 
      {
	fread(buff,3,1,pFile);	  
	checkImage[i] = buff[0];
	checkImage[i+1] = buff[1];
	checkImage[i+2] = buff[2];
	//checkImage[i+3] = buff[3];
      }
  }
  else if(flg == 2) {
    for (i = 0; i < tex_height*tex_width*3; i+=3) 
      {
	fread(buff,3,1,pFile);	  
	checkImage1[i] = buff[0];
	checkImage1[i+1] = buff[1];
	checkImage1[i+2] = buff[2];
	//checkImage1[i+3] = buff[3];
      }
  }
  else if(flg == 3) {
    for (i = 0; i < infohead->height*infohead->width*3;i+=3) 
      {
	fread(buff,3,1,pFile);	  
	checkImage2[i] = buff[0];
	checkImage2[i+1] = buff[1];
	checkImage2[i+2] = buff[2];
	//	checkImage2[i+3] = buff[3];
      }
  }
  else if(flg == 4) {
    for (i = 0; i < infohead->height*infohead->width*3;i+=3) 
      {
	fread(buff,3,1,pFile);	  
	checkImage3[i] = buff[0];
	checkImage3[i+1] = buff[1];
	checkImage3[i+2] = buff[2];
	//checkImage3[i+3] = buff[3];
      }
  }
  else if(flg == 5) {
    for (i = 0; i < infohead->height*infohead->width*3;i+=3) 
      {
	fread(buff,3,1,pFile);	  
	checkImage4[i] = buff[0];
	checkImage4[i+1] = buff[1];
	checkImage4[i+2] = buff[2];
	//checkImage4[i+3] = buff[3];
      }
  }
}

void keyboard(unsigned char key, int x, int y)
{
  switch (key) 
    {
    case 27:    exit(0);          break;
    case 'x':   angle[0]+=1.0;    break;
    case 'X' :  angle[0]-=1.0;    break;
    case 'y':   angle[1]+=1.0;    break;
    case 'Y':   angle[1]-=1.0;    break;
    case 'z':   angle[2]+=1.0;    break;
    case 'Z':   angle[2]-=1.0;    break;
    case '1':   scale[0]+=0.05;   break;
    case '!':   scale[0]-=0.05;   break;
    case '2':   scale[1]+=0.05;   break;
    case '@':   scale[1]-=0.05;   break;
    case '3':   scale[2]+=0.05;   break;
    case '#':   scale[2]-=0.05;   break;
    case 'p' :  translate[0]+=0.05;    break;
    case 'P' :  translate[0]-=0.05;    break;
    case 'o' :  translate[1]+=0.05;    break;
    case 'O' :  translate[1]-=0.05;    break;
    case 'i' :  translate[2]+=0.05;    break;
    case 'I' :  translate[2]-=0.05;    break;
    }
  glutPostRedisplay();
}


void bcurve(GLfloat n, GLfloat part,float ctrpoints[][3], int flg) {
  GLfloat  lam, cnt = 0;
  GLfloat x1 = 0.0,y1 = 0.0,z1 = 0.0;
  int j,i;
  GLfloat delta;
  delta = 1.0/part;
  j = 0;
  for(lam = 0.0 ; lam < 1.0; lam+=delta) {
    cnt++;
    for(i = 0; i < n; i++)  {
      x1 += ctrpoints[i][0] * Bfunc(n-1,lam,i);
      y1 += ctrpoints[i][1] * Bfunc(n-1,lam,i);
      z1 += ctrpoints[i][2] * Bfunc(n-1,lam,i);

    }
    if(flg == 0) {
    points[j][0]= x1;
    points[j][1]= y1;
    points[j][2]= z1;
    }
    else if(flg == 1){
      points1[j][0]= x1;
      points1[j][1]= y1;
      points1[j][2]= z1;
    }
    else if(flg == 2) {
      points2[j][0]= x1;
      points2[j][1]= y1;
      points2[j][2]= z1;
    }
    else if(flg == 3) {
      points3[j][0]= x1;
      points3[j][1]= y1;
      points3[j][2]= z1;
    }
    else if(flg == 4){
      curvL[j][0]= x1;
      curvL[j][1]= y1;
      curvL[j][2]= z1;
    }
    else if (flg == 5){
      curvR[j][0]= x1;
      curvR[j][1]= y1;
      curvR[j][2]= z1;
    }
    else if(flg == 6){
      curvG[j][0]= x1;
      curvG[j][1]= y1;
      curvG[j][2]= z1;
    }
    else if(flg == 7){
      curvG1[j][0]= x1;
      curvG1[j][1]= y1;
      curvG1[j][2]= z1;
    }
    else if(flg == 8){
      curvG2[j][0]= x1;
      curvG2[j][1]= y1;
      curvG2[j][2]= z1;
    }
    else if(flg == 9){
      curvG3[j][0]= x1;
      curvG3[j][1]= y1;
      curvG3[j][2]= z1;
    }
    else if(flg == 10) {
      curvG4[j][0]= x1;
      curvG4[j][1]= y1;
      curvG4[j][2]= z1;
    }
    else if(flg == 11){
      curvG5[j][0]= x1;
      curvG5[j][1]= y1;
      curvG5[j][2]= z1;
    }
    else if(flg == 12){
      curvG6[j][0]= x1;
      curvG6[j][1]= y1;
      curvG6[j][2]= z1;
    }
    else if(flg == 13){
      curvG7[j][0]= x1;
      curvG7[j][1]= y1;
      curvG7[j][2]= z1;
    }
    else if(flg == 14) {
      curvG8[j][0]= x1;
      curvG8[j][1]= y1;
      curvG8[j][2]= z1;
    }
    else if(flg == 15){
      curvG9[j][0]= x1;
      curvG9[j][1]= y1;
      curvG9[j][2]= z1;
    }
    else if(flg == 16){
      curvG10[j][0]= x1;
      curvG10[j][1]= y1;
      curvG10[j][2]= z1;
    }
    else if(flg == 17){
      curvG11[j][0]= x1;
      curvG11[j][1]= y1;
      curvG11[j][2]= z1;
    }
    else if(flg == 18) {
      curvG12[j][0]= x1;
      curvG12[j][1]= y1;
      curvG12[j][2]= z1;
    }
    else if(flg == 19){
      curvG13[j][0]= x1;
      curvG13[j][1]= y1;
      curvG13[j][2]= z1;
    }
    else if(flg == 20){
      curvG14[j][0]= x1;
      curvG14[j][1]= y1;
      curvG14[j][2]= z1;
    }
    else if(flg == 21) {
      curvG15[j][0]= x1;
      curvG15[j][1]= y1;
      curvG15[j][2]= z1;
    }
    else if(flg == 22) {
      curvG16[j][0]= x1;
      curvG16[j][1]= y1;
      curvG16[j][2]= z1;
    }
    else if(flg == 23){
      curvG17[j][0]= x1;
      curvG17[j][1]= y1;
      curvG17[j][2]= z1;
    }
    else if(flg == 24){
      curvG18[j][0]= x1;
      curvG18[j][1]= y1;
      curvG18[j][2]= z1;
    }
    else if(flg == 25) {
      curvG19[j][0]= x1;
      curvG19[j][1]= y1;
      curvG19[j][2]= z1;
    }
    else if(flg == 26) {
      curvG20[j][0]= x1;
      curvG20[j][1]= y1;
      curvG20[j][2]= z1;
    }
    else if(flg == 27){
      curvG21[j][0]= x1;
      curvG21[j][1]= y1;
      curvG21[j][2]= z1;
    }
    else if(flg == 28){
      curvG22[j][0]= x1;
      curvG22[j][1]= y1;
      curvG22[j][2]= z1;
    }
    else if(flg == 29) {
      curvG23[j][0]= x1;
      curvG23[j][1]= y1;
      curvG23[j][2]= z1;
    }
    else {
      Extrapoints[j][0]= x1;
      Extrapoints[j][1]= y1;
      Extrapoints[j][2]= z1;
    }
    j++;
    x1 = y1 = z1 = 0.0;
  }
  return;
}

GLfloat Bfunc(GLfloat n, GLfloat lam, GLfloat i) {
  GLfloat ans, res;

  res = ((GLfloat)factorial(n) / (((GLfloat)factorial(n-i)) * (GLfloat)factorial(i)));
  ans = res * pow(lam, i) * pow((1-lam), (n-i));
  return ans;
}

long int factorial(int n) {
  if (n<=1) {
    return(1);
  }
  else{
    n=n*factorial(n-1);
  }
  return(n);
}


void callBcurv(void ) {
  bcurve(2,SUBPOINT,curv26,29);
  bcurve(3,SUBPOINT,curv25,28);
  bcurve(2,SUBPOINT,curv24,27);
  bcurve(3,SUBPOINT,curv23,26);
  
  bcurve(2,SUBPOINT,curv22,25);
  bcurve(3,SUBPOINT,curv21,24);
  bcurve(2,SUBPOINT,curv20,23);
  bcurve(3,SUBPOINT,curv19,22);
  
  bcurve(2,SUBPOINT,curv18,21);
  bcurve(3,SUBPOINT,curv17,20);
  bcurve(2,SUBPOINT,curv16,19);
  bcurve(3,SUBPOINT,curv15,18);
  
  bcurve(2,SUBPOINT,curv14,17);
  bcurve(3,SUBPOINT,curv13,16);
  bcurve(2,SUBPOINT,curv12,15);
  bcurve(3,SUBPOINT,curv11,14);

  bcurve(3,SUBPOINT,curv10,13);
  bcurve(3,SUBPOINT,curv9,12);
  bcurve(3,SUBPOINT,curv8,11);
  bcurve(3,SUBPOINT,curv7,10);
  bcurve(3,SUBPOINT,curv6,9);
  bcurve(3,SUBPOINT,curv5,8);
  bcurve(3,SUBPOINT,curv4,7);
  bcurve(3,SUBPOINT,curv3,6);
  bcurve(3,SUBPOINT,curv2,5);
  bcurve(3,SUBPOINT,curv1,4);
  bcurve(CNT,SUBPOINT,ctrpoints,0);
  bcurve(CNT,SUBPOINT,ctrpoints1,1);
  bcurve(CNT,SUBPOINT,ctrpoints2,2);
  bcurve(CNT,SUBPOINT,ctrpoints3,3);
  bcurve(2,SUBPOINT,line,30);
 
  makeCircle(circleCenter,0.05,circle46,31);
  makeCircle(circleCenter,0.05,circle45,30);
  makeCircle(circleCenter,0.05,circle44,29);
  makeCircle(circleCenter,0.05,circle43,28);
  makeCircle(circleCenter,0.05,circle42,27);
  makeCircle(circleCenter,0.05,circle41,26);
  
  
  makeCircle(circleCenter,0.05,circle36,25);
  makeCircle(circleCenter,0.05,circle35,24);
  makeCircle(circleCenter,0.05,circle34,23);
  makeCircle(circleCenter,0.05,circle33,22);
  makeCircle(circleCenter,0.05,circle32,21);
  makeCircle(circleCenter,0.05,circle31,20);
  

  makeCircle(circleCenter,0.2,circle26,19);
  makeCircle(circleCenter,0.2,circle25,18);
  makeCircle(circleCenter,0.2,circle24,17);
  makeCircle(circleCenter,0.2,circle23,16);
  makeCircle(circleCenter,0.2,circle22,15);
  makeCircle(circleCenter,0.2,circle21,14);
  
  
  makeCircle(circleCenter,0.2,circle16,13);
  makeCircle(circleCenter,0.2,circle15,12);
  makeCircle(circleCenter,0.2,circle14,11);
  makeCircle(circleCenter,0.2,circle13,10);
  makeCircle(circleCenter,0.2,circle12,9);
  makeCircle(circleCenter,0.2,circle11,8);
    
  makeCircle(circleCenter,0.1,circle6,7);
  makeCircle(circleCenter,0.1,circle5,6);
  makeCircle(circleCenter,0.1,circle4,5);
  makeCircle(circleCenter,0.1,circle3,4);
  makeCircle(circleCenter,0.1,circle2,3);
  makeCircle(circleCenter,0.1,circle1,2);
  makeCircle(circleCenter1,1.0,circlePoints,0);
  makeCircle(circleCenter1,1.4,circlePoints1,1);
 
}

void loadAllTextures(void) {			
    
  glPixelStorei(GL_UNPACK_ALIGNMENT, 1); 
  glGenTextures(1, &texName[0]); 
  glBindTexture(GL_TEXTURE_2D, texName[0]);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
  glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE); 
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, tex_height,tex_width, 0, GL_RGB, GL_UNSIGNED_BYTE,&checkImage);
    
  
  glPixelStorei(GL_UNPACK_ALIGNMENT, 1); 
  glGenTextures(1, &texName[1]); 
  glBindTexture(GL_TEXTURE_2D, texName[1]);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
  glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); 
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, tex_height,tex_width, 0, GL_RGB, GL_UNSIGNED_BYTE,&checkImage1);

  glPixelStorei(GL_UNPACK_ALIGNMENT, 1); 
  glGenTextures(1, &texName[2]); 
  glBindTexture(GL_TEXTURE_2D, texName[2]);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
  glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); 
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, tex_height,tex_width, 0, GL_RGB, GL_UNSIGNED_BYTE,&checkImage2);

  
  glPixelStorei(GL_UNPACK_ALIGNMENT, 1); 
  glGenTextures(1, &texName[3]); 
  glBindTexture(GL_TEXTURE_2D, texName[3]);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
  glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); 
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, tex_height,tex_width, 0, GL_RGB, GL_UNSIGNED_BYTE,&checkImage3);
  
  
  glPixelStorei(GL_UNPACK_ALIGNMENT, 1); 
  glGenTextures(1, &texName[4]); 
  glBindTexture(GL_TEXTURE_2D, texName[4]);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
  glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); 
  glTexImage2D(GL_TEXTURE_2D, 0, GL_BGR, tex_height,tex_width, 0, GL_BGR, GL_UNSIGNED_BYTE,&checkImage4);
    
  
}

void drawTextureObjects(void) {
  int i;
  int j =1;
   glBindTexture(GL_TEXTURE_2D,texName[0]);   
  j = 1;
  for(i = 0; i < SUBPOINT ;i+=1) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,0.0);glVertex3f(points[i][0],points[i][1],points[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(points[i+j][0],points[i+j][1],points[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(points[SUBPOINT-(i+j)][0],points[SUBPOINT-(i+j)][1],points[SUBPOINT-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(points[SUBPOINT-i][0],points[SUBPOINT-i][1],points[SUBPOINT-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(points1[i][0],points1[i][1],points1[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(points1[SUBPOINT-(i+j)][0],points1[SUBPOINT-(i+j)][1],points1[SUBPOINT-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(points1[SUBPOINT-i][0],points1[SUBPOINT-i][1],points1[SUBPOINT-i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(points1[i+j][0],points1[i+j][1],points1[i+j][2]);
    }
    glEnd();
  }
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(points[1][0],points[1][1],points[1][2]);
    glTexCoord2f(1.0,1.0);glVertex3f(points1[1][0],points1[1][1],points1[1][2]);
    glTexCoord2f(0.0,1.0);glVertex3f(points[SUBPOINT][0],points[SUBPOINT][1],points[SUBPOINT][2]);
    glTexCoord2f(1.0,0.0);glVertex3f(points1[SUBPOINT][0],points1[SUBPOINT][1],points1[SUBPOINT][2]);
  }
  glEnd();
  glBindTexture(GL_TEXTURE_2D,texName[1]);   
  for(i = 0; i < SUBPOINT-2;i+=1) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,1.0);glVertex3f(points[i+j][0],points[i+j][1],points[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(points[i][0],points[i][1],points[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(points2[i][0],points2[i][1],points2[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(points2[i+j][0],points2[i+j][1],points2[i+j][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(points1[i][0],points1[i][1],points1[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(points1[i+j][0],points1[i+j][1],points1[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(points3[i+j][0],points3[i+j][1],points3[i+j][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(points3[i][0],points3[i][1],points3[i][2]);
    }
    glEnd();
  }
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(points3[1][0],points3[1][1],points3[1][2]);
    glTexCoord2f(1.0,1.0);glVertex3f(points2[1][0],points2[1][1],points2[1][2]);
    glTexCoord2f(0.0,1.0);glVertex3f(points2[SUBPOINT-1][0],points2[SUBPOINT-1][1],points2[SUBPOINT-1][2]);
    glTexCoord2f(1.0,0.0);glVertex3f(points3[SUBPOINT-1][0],points3[SUBPOINT-1][1],points3[SUBPOINT-1][2]);
  }
  glEnd();
 
  j = 25;
  for(i = 1; i <= SUBPOINT/2 ;i+=25) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,0.0);glVertex3f(points2[i][0],points2[i][1],points2[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(points2[i+j][0],points2[i+j][1],points2[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(points2[SUBPOINT-(i+j)][0],points2[SUBPOINT-(i+j)][1],points2[SUBPOINT-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(points2[SUBPOINT-i][0],points2[SUBPOINT-i][1],points2[SUBPOINT-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(points3[i][0],points3[i][1],points3[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(points3[i+j][0],points3[i+j][1],points3[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(points3[SUBPOINT-(i+j)][0],points3[SUBPOINT-(i+j)][1],points3[SUBPOINT-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(points3[SUBPOINT-i][0],points3[SUBPOINT-i][1],points3[SUBPOINT-i][2]);
    }
    glEnd();
  }
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(points[1][0],points[1][1],points[1][2]);
    glTexCoord2f(0.0,1.0);glVertex3f(points1[1][0],points1[1][1],points1[1][2]);
    glTexCoord2f(1.0,1.0);glVertex3f(points2[1][0],points2[1][1],points2[1][2]);
    glTexCoord2f(1.0,0.0);glVertex3f(points3[1][0],points3[1][1],points3[1][2]);
  
    glTexCoord2f(0.0,0.0);glVertex3f(points[SUBPOINT-2][0],points[SUBPOINT-2][1],points[SUBPOINT-2][2]);
    glTexCoord2f(0.0,1.0);glVertex3f(points1[SUBPOINT-2][0],points1[SUBPOINT-2][1],points1[SUBPOINT-2][2]);
    glTexCoord2f(1.0,1.0);glVertex3f(points2[SUBPOINT-2][0],points2[SUBPOINT-2][1],points2[SUBPOINT-2][2]);
    glTexCoord2f(1.0,0.0);glVertex3f(points3[SUBPOINT-2][0],points3[SUBPOINT-2][1],points3[SUBPOINT-2][2]);
  
  }
  glEnd();
  
  j = 30;
  for(i = 0; i <= SUBPOINT-2;i+=30) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,1.0);glVertex3f(curvL[i+j][0],curvL[i+j][1],curvL[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvL[i][0],curvL[i][1],curvL[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvR[i][0],curvR[i][1],curvR[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvR[i+j][0],curvR[i+j][1],curvR[i+j][2]);
    }
    glEnd();
  }
  j = 10;
  for(i = 1; i <= SUBPOINT-10 ;i+=10) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,1.0);glVertex3f(curvG[i+j][0],curvG[i+j][1],curvG[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG[i][0],curvG[i][1],curvG[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG1[i][0],curvG1[i][1],curvG1[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG1[i+j][0],curvG1[i+j][1],curvG1[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG2[i+j][0],curvG2[i+j][1],curvG2[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG2[i][0],curvG2[i][1],curvG2[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG5[i][0],curvG5[i][1],curvG5[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG5[i+j][0],curvG5[i+j][1],curvG5[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG3[i+j][0],curvG3[i+j][1],curvG3[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG3[i][0],curvG3[i][1],curvG3[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG6[i][0],curvG6[i][1],curvG6[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG6[i+j][0],curvG6[i+j][1],curvG6[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG4[i+j][0],curvG4[i+j][1],curvG4[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG4[i][0],curvG4[i][1],curvG4[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG7[i][0],curvG7[i][1],curvG7[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG7[i+j][0],curvG7[i+j][1],curvG7[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG8[i+j][0],curvG8[i+j][1],curvG8[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG8[i][0],curvG8[i][1],curvG8[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG16[i][0],curvG16[i][1],curvG16[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG16[i+j][0],curvG16[i+j][1],curvG16[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG9[i+j][0],curvG9[i+j][1],curvG9[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG9[i][0],curvG9[i][1],curvG9[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG17[i][0],curvG17[i][1],curvG17[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG17[i+j][0],curvG17[i+j][1],curvG17[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG10[i+j][0],curvG10[i+j][1],curvG10[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG10[i][0],curvG10[i][1],curvG10[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG18[i][0],curvG18[i][1],curvG18[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG18[i+j][0],curvG18[i+j][1],curvG18[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG11[i+j][0],curvG11[i+j][1],curvG11[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG11[i][0],curvG11[i][1],curvG11[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG19[i][0],curvG19[i][1],curvG19[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG19[i+j][0],curvG19[i+j][1],curvG19[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG12[i+j][0],curvG12[i+j][1],curvG12[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG12[i][0],curvG12[i][1],curvG12[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG20[i][0],curvG20[i][1],curvG20[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG20[i+j][0],curvG20[i+j][1],curvG20[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG13[i+j][0],curvG13[i+j][1],curvG13[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG13[i][0],curvG13[i][1],curvG13[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG21[i][0],curvG21[i][1],curvG21[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG21[i+j][0],curvG21[i+j][1],curvG21[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG14[i+j][0],curvG14[i+j][1],curvG14[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG14[i][0],curvG14[i][1],curvG14[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG22[i][0],curvG22[i][1],curvG22[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG22[i+j][0],curvG22[i+j][1],curvG22[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG15[i+j][0],curvG15[i+j][1],curvG15[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG15[i][0],curvG15[i][1],curvG15[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG23[i][0],curvG23[i][1],curvG23[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG23[i+j][0],curvG23[i+j][1],curvG23[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG9[i+j][0],curvG9[i+j][1],curvG9[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG9[i][0],curvG9[i][1],curvG9[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG13[i][0],curvG13[i][1],curvG13[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG13[i+j][0],curvG13[i+j][1],curvG13[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG17[i+j][0],curvG17[i+j][1],curvG17[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG17[i][0],curvG17[i][1],curvG17[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG21[i][0],curvG21[i][1],curvG21[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG21[i+j][0],curvG21[i+j][1],curvG21[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG2[i+j][0],curvG2[i+j][1],curvG2[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG2[i][0],curvG2[i][1],curvG2[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG10[SUBPOINT-i][0],curvG10[SUBPOINT-i][1],curvG10[SUBPOINT-i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG10[SUBPOINT-(i+j)][0],curvG10[SUBPOINT-(i+j)][1],curvG10[SUBPOINT-(i+j)][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG4[i+j][0],curvG4[i+j][1],curvG4[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG4[i][0],curvG4[i][1],curvG4[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG14[i][0],curvG14[i][1],curvG14[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG14[i+j][0],curvG14[i+j][1],curvG14[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG7[i+j][0],curvG7[i+j][1],curvG7[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG7[i][0],curvG7[i][1],curvG7[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG22[i][0],curvG22[i][1],curvG22[i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG22[i+j][0],curvG22[i+j][1],curvG22[i+j][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG5[i+j][0],curvG5[i+j][1],curvG5[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG5[i][0],curvG5[i][1],curvG5[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG18[SUBPOINT-i][0],curvG18[SUBPOINT-i][1],curvG18[SUBPOINT-i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG18[SUBPOINT-(i+j)][0],curvG18[SUBPOINT-(i+j)][1],curvG18[SUBPOINT-(i+j)][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG3[i+j][0],curvG3[i+j][1],curvG3[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG3[i][0],curvG3[i][1],curvG3[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG3[SUBPOINT-i][0],curvG3[SUBPOINT-i][1],curvG3[SUBPOINT-i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG3[SUBPOINT-(i+j)][0],curvG3[SUBPOINT-(i+j)][1],curvG3[SUBPOINT-(i+j)][2]);
      
      glTexCoord2f(0.0,1.0);glVertex3f(curvG6[i+j][0],curvG6[i+j][1],curvG6[i+j][2]);
      glTexCoord2f(0.0,0.0);glVertex3f(curvG6[i][0],curvG6[i][1],curvG6[i][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(curvG6[SUBPOINT-i][0],curvG6[SUBPOINT-i][1],curvG6[SUBPOINT-i][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(curvG6[SUBPOINT-(i+j)][0],curvG6[SUBPOINT-(i+j)][1],curvG6[SUBPOINT-(i+j)][2]);
    }
    glEnd();
  }
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(12.4,1.0,0.2);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,1.0,0.1);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,-1.0,0.1);
    glTexCoord2f(1.0,1.0);glVertex3f(12.4,-1.0,0.2);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.4,1.0,1.1);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,1.0,1.0);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,-1.0,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(12.4,-1.0,1.1);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.3,0.6,0.2);
    glTexCoord2f(1.0,0.0);glVertex3f(12.6,0.3,0.1);
    glTexCoord2f(0.0,1.0);glVertex3f(12.6,-0.3,0.1);
    glTexCoord2f(1.0,1.0);glVertex3f(12.3,-0.6,0.2);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.3,0.6,1.1);
    glTexCoord2f(1.0,0.0);glVertex3f(12.6,0.3,1.0);
    glTexCoord2f(0.0,1.0);glVertex3f(12.6,-0.3,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(12.3,-0.6,1.1);
   
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,1.8,1.0);
    glTexCoord2f(0.0,0.0);glVertex3f(15.0,1.8,1.8);
    glTexCoord2f(1.0,0.0);glVertex3f(15.0,1.2,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(15.0,1.2,1.8);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,-1.8,1.0);
    glTexCoord2f(0.0,0.0);glVertex3f(15.0,-1.8,1.8);
    glTexCoord2f(1.0,0.0);glVertex3f(15.0,-1.2,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(15.0,-1.2,1.8);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,1.8,1.0);
    glTexCoord2f(0.0,0.0);glVertex3f(15.0,1.8,1.8);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,1.0,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,1.0,0.1);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,-1.8,1.0);
    glTexCoord2f(0.0,0.0);glVertex3f(15.0,-1.8,1.8);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,-1.0,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,-1.0,0.1);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.3,0.7,1.1);
    glTexCoord2f(0.0,1.0);glVertex3f(14.3,1.2,1.6);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,1.7,1.6);
    glTexCoord2f(1.0,1.0);glVertex3f(12.3,1.0,1.1);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.3,-0.7,1.1);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,-1.2,1.6);
    glTexCoord2f(0.0,1.0);glVertex3f(14.3,-1.7,1.6);
    glTexCoord2f(1.0,1.0);glVertex3f(12.3,-1.0,1.1);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.3,0.7,0.2);
    glTexCoord2f(0.0,1.0);glVertex3f(14.3,1.2,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,1.7,0.8);
    glTexCoord2f(1.0,1.0);glVertex3f(12.3,1.0,0.2);
   
    glTexCoord2f(0.0,0.0);glVertex3f(12.3,-0.7,0.2);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,-1.2,0.8);
    glTexCoord2f(0.0,1.0);glVertex3f(14.3,-1.7,0.8);
    glTexCoord2f(1.0,1.0);glVertex3f(12.3,-1.0,0.2);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,1.2,1.0);
    glTexCoord2f(0.0,0.0);glVertex3f(14.3,1.2,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,1.7,0.8);
    glTexCoord2f(1.0,1.0);glVertex3f(15.0,1.8,1.0);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.2,0.3,1.1);
    glTexCoord2f(0.0,0.0);glVertex3f(14.3,0.4,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,-0.4,0.8);
    glTexCoord2f(1.0,1.0);glVertex3f(15.2,-0.3,1.0);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,-1.2,1.0);
    glTexCoord2f(0.0,0.0);glVertex3f(14.3,-1.2,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,-1.7,0.8);
    glTexCoord2f(1.0,1.0);glVertex3f(15.0,-1.8,1.0);
   
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,1.2,1.8);
    glTexCoord2f(0.0,0.0);glVertex3f(14.3,1.2,1.6);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,1.7,1.6);
    glTexCoord2f(1.0,1.0);glVertex3f(15.0,1.8,1.8);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.2,0.3,1.9);
    glTexCoord2f(0.0,0.0);glVertex3f(14.3,0.4,1.6);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,-0.4,1.6);
    glTexCoord2f(1.0,1.0);glVertex3f(15.2,-0.3,1.9);
    
    glTexCoord2f(0.0,1.0);glVertex3f(15.0,-1.2,1.8);
    glTexCoord2f(0.0,0.0);glVertex3f(14.3,-1.2,1.6);
    glTexCoord2f(1.0,0.0);glVertex3f(14.3,-1.7,1.6);
    glTexCoord2f(1.0,1.0);glVertex3f(15.0,-1.8,1.8);
    
    //glTexCoord2f(0.0,0.0);glVertex3f(rectang1[0][0],rectang1[0][1],rectang1[0][2]);
    //glTexCoord2f(0.0,1.0);glVertex3f(rectang1[2][0],rectang1[2][1],rectang1[2][2]);
    //glTexCoord2f(1.0,1.0);glVertex3f(rectang1[3][0],rectang1[3][1],rectang1[3][2]);
    //glTexCoord2f(1.0,0.0);glVertex3f(rectang1[5][0],rectang1[5][1],rectang1[5][2]);
    
    glTexCoord2f(0.0,0.0);glVertex3f(rectang2[0][0],rectang2[0][1],rectang2[0][2]);
    glTexCoord2f(0.0,1.0);glVertex3f(rectang2[2][0],rectang2[2][1],rectang2[2][2]);
    glTexCoord2f(1.0,1.0);glVertex3f(rectang2[3][0],rectang2[3][1],rectang2[3][2]);
    glTexCoord2f(1.0,0.0);glVertex3f(rectang2[5][0],rectang2[5][1],rectang2[5][2]);
    
    glTexCoord2f(0.0,0.0);glVertex3f(rectang[0][0],rectang[0][1],rectang[0][2]);
    glTexCoord2f(0.0,1.0);glVertex3f(rectang[1][0],rectang[1][1],rectang[1][2]);
    glTexCoord2f(1.0,1.0);glVertex3f(rectang[2][0],rectang[2][1],rectang[2][2]);
    glTexCoord2f(1.0,0.0);glVertex3f(rectang[3][0],rectang[3][1],rectang[3][2]);
    
    
    glTexCoord2f(0.0,1.0);glVertex3f(5.0,1.1,2.2);
    glTexCoord2f(0.0,0.0);glVertex3f(4.5,1.1,2.2);
    glTexCoord2f(1.0,0.0);glVertex3f(4.5,-1.1,2.2);
    glTexCoord2f(1.0,1.0);glVertex3f(5.0,-1.1,2.2);
    
    glTexCoord2f(0.0,1.0);glVertex3f(5.0,1.1,2.2);
    glTexCoord2f(0.0,0.0);glVertex3f(4.5,1.1,2.2);
    glTexCoord2f(1.0,0.0);glVertex3f(4.5,1.1,0.2);
    glTexCoord2f(1.0,1.0);glVertex3f(4.8,1.0,1.2);
    
    glTexCoord2f(0.0,1.0);glVertex3f(4.75,1.0,1.2);
    glTexCoord2f(0.0,0.0);glVertex3f(5.5,1.1,0.1);
    glTexCoord2f(1.0,0.0);glVertex3f(4.5,1.1,0.1);
    glTexCoord2f(1.0,1.0);glVertex3f(4.5,1.0,1.2);
    
    glTexCoord2f(0.0,1.0);glVertex3f(5.0,-1.1,2.2);
    glTexCoord2f(0.0,0.0);glVertex3f(4.5,-1.1,2.2);
    glTexCoord2f(1.0,0.0);glVertex3f(4.5,-1.1,0.2);
    glTexCoord2f(1.0,1.0);glVertex3f(4.8,-1.0,1.2);
    
    glTexCoord2f(0.0,1.0);glVertex3f(4.75,-1.0,1.2);
    glTexCoord2f(0.0,0.0);glVertex3f(5.5,-1.1,0.1);
    glTexCoord2f(1.0,0.0);glVertex3f(4.5,-1.1,0.1);
    glTexCoord2f(1.0,1.0);glVertex3f(4.5,-1.0,1.2);
    
  }
  glEnd();
  
  glBindTexture(GL_TEXTURE_2D,texName[1]);   
  j = 1;
  for(i = 1; i < NCONTORL-1 ;i+=1) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,0.0);glVertex3f(circlePoints[i][0],circlePoints[i][1],circlePoints[i][2]-0.1);
      glTexCoord2f(0.0,1.0);glVertex3f(circlePoints[i+j][0],circlePoints[i+j][1],circlePoints[i+j][2]-0.1);
      glTexCoord2f(1.0,1.0);glVertex3f(circlePoints[NCONTORL-(i+j)][0],circlePoints[NCONTORL-(i+j)][1],circlePoints[NCONTORL-(i+j)][2]-0.1);
      glTexCoord2f(1.0,0.0);glVertex3f(circlePoints[NCONTORL-i][0],circlePoints[NCONTORL-i][1],circlePoints[NCONTORL-i][2]-0.1);
    }
    glEnd();
  }
  glBindTexture(GL_TEXTURE_2D,texName[2]);   
  
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(rectangT[0][0],rectangT[0][1],rectangT[0][2]);
    glTexCoord2f(0.0,1.0);glVertex3f(rectangT[1][0],rectangT[1][1],rectangT[1][2]);
    glTexCoord2f(1.0,1.0);glVertex3f(rectangT[2][0],rectangT[2][1],rectangT[2][2]);
    glTexCoord2f(1.0,0.0);glVertex3f(rectangT[3][0],rectangT[3][1],rectangT[3][2]);
  }
  glEnd();    
  
  j = 1;
  for(i = 1; i < NCONTORL-1 ;i+=1) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,0.0);glVertex3f(circlePoints1[i][0],circlePoints1[i][1],circlePoints1[i][2]-0.05);
      glTexCoord2f(0.0,1.0);glVertex3f(circlePoints1[i+j][0],circlePoints1[i+j][1],circlePoints[i+j][2]-0.05);
      glTexCoord2f(1.0,1.0);glVertex3f(circlePoints1[NCONTORL-(i+j)][0],circlePoints1[NCONTORL-(i+j)][1],circlePoints1[NCONTORL-(i+j)][2]-0.05);
      glTexCoord2f(1.0,0.0);glVertex3f(circlePoints1[NCONTORL-i][0],circlePoints1[NCONTORL-i][1],circlePoints1[NCONTORL-i][2]-0.05);
    }
    glEnd();
  }
  glBindTexture(GL_TEXTURE_2D,texName[3]);
  j = 1; 
  for(i = 1; i < NCONTORL-1 ;i+=1) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,0.0);glVertex3f(circle1[i][0],circle1[i][1],circle1[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle1[i+j][0],circle1[i+j][1],circle1[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle1[INCRTL-(i+j)][0],circle1[INCRTL-(i+j)][1],circle1[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle1[INCRTL-i][0],circle1[INCRTL-i][1],circle1[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle2[i][0],circle2[i][1],circle2[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle2[i+j][0],circle2[i+j][1],circle2[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle2[INCRTL-(i+j)][0],circle2[INCRTL-(i+j)][1],circle2[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle2[INCRTL-i][0],circle2[INCRTL-i][1],circle2[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle3[i][0],circle3[i][1],circle3[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle3[i+j][0],circle3[i+j][1],circle3[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle3[INCRTL-(i+j)][0],circle3[INCRTL-(i+j)][1],circle3[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle3[INCRTL-i][0],circle3[INCRTL-i][1],circle3[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle4[i][0],circle4[i][1],circle4[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle4[i+j][0],circle4[i+j][1],circle4[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle4[INCRTL-(i+j)][0],circle4[INCRTL-(i+j)][1],circle4[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle4[INCRTL-i][0],circle4[INCRTL-i][1],circle4[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle5[i][0],circle5[i][1],circle5[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle5[i+j][0],circle5[i+j][1],circle5[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle5[INCRTL-(i+j)][0],circle5[INCRTL-(i+j)][1],circle5[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle5[INCRTL-i][0],circle5[INCRTL-i][1],circle5[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle6[i][0],circle6[i][1],circle6[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle6[i+j][0],circle6[i+j][1],circle6[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle6[INCRTL-(i+j)][0],circle6[INCRTL-(i+j)][1],circle6[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle6[INCRTL-i][0],circle6[INCRTL-i][1],circle6[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle11[i][0],circle11[i][1],circle11[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle11[i+j][0],circle11[i+j][1],circle11[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle11[INCRTL-(i+j)][0],circle11[INCRTL-(i+j)][1],circle11[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle11[INCRTL-i][0],circle11[INCRTL-i][1],circle11[INCRTL-i][2]);
	
      glTexCoord2f(0.0,0.0);glVertex3f(circle12[i][0],circle12[i][1],circle12[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle12[i+j][0],circle12[i+j][1],circle12[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle12[INCRTL-(i+j)][0],circle12[INCRTL-(i+j)][1],circle12[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle12[INCRTL-i][0],circle12[INCRTL-i][1],circle12[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle13[i][0],circle13[i][1],circle13[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle13[i+j][0],circle13[i+j][1],circle13[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle13[INCRTL-(i+j)][0],circle13[INCRTL-(i+j)][1],circle13[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle13[INCRTL-i][0],circle13[INCRTL-i][1],circle13[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle14[i][0],circle14[i][1],circle14[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle14[i+j][0],circle14[i+j][1],circle14[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle14[INCRTL-(i+j)][0],circle14[INCRTL-(i+j)][1],circle14[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle14[INCRTL-i][0],circle14[INCRTL-i][1],circle14[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle15[i][0],circle15[i][1],circle15[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle15[i+j][0],circle15[i+j][1],circle15[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle15[INCRTL-(i+j)][0],circle15[INCRTL-(i+j)][1],circle15[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle15[INCRTL-i][0],circle15[INCRTL-i][1],circle15[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle16[i][0],circle16[i][1],circle16[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle16[i+j][0],circle16[i+j][1],circle16[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle16[INCRTL-(i+j)][0],circle16[INCRTL-(i+j)][1],circle16[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle16[INCRTL-i][0],circle16[INCRTL-i][1],circle16[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle21[i][0],circle21[i][1],circle21[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle21[i+j][0],circle21[i+j][1],circle21[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle21[INCRTL-(i+j)][0],circle21[INCRTL-(i+j)][1],circle21[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle21[INCRTL-i][0],circle21[INCRTL-i][1],circle21[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle23[i][0],circle23[i][1],circle23[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle23[i+j][0],circle23[i+j][1],circle23[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle23[INCRTL-(i+j)][0],circle23[INCRTL-(i+j)][1],circle23[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle23[INCRTL-i][0],circle23[INCRTL-i][1],circle23[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle24[i][0],circle24[i][1],circle24[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle24[i+j][0],circle24[i+j][1],circle24[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle24[INCRTL-(i+j)][0],circle24[INCRTL-(i+j)][1],circle24[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle24[INCRTL-i][0],circle24[INCRTL-i][1],circle24[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle25[i][0],circle25[i][1],circle25[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle25[i+j][0],circle25[i+j][1],circle25[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle25[INCRTL-(i+j)][0],circle25[INCRTL-(i+j)][1],circle25[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle25[INCRTL-i][0],circle25[INCRTL-i][1],circle25[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle26[i][0],circle26[i][1],circle26[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle26[i+j][0],circle26[i+j][1],circle26[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle26[INCRTL-(i+j)][0],circle26[INCRTL-(i+j)][1],circle26[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle26[INCRTL-i][0],circle26[INCRTL-i][1],circle26[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle31[i][0],circle31[i][1],circle31[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle31[i+j][0],circle31[i+j][1],circle31[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle31[INCRTL-(i+j)][0],circle31[INCRTL-(i+j)][1],circle31[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle31[INCRTL-i][0],circle31[INCRTL-i][1],circle31[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle32[i][0],circle32[i][1],circle32[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle32[i+j][0],circle32[i+j][1],circle32[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle32[INCRTL-(i+j)][0],circle32[INCRTL-(i+j)][1],circle32[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle32[INCRTL-i][0],circle32[INCRTL-i][1],circle32[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle33[i][0],circle33[i][1],circle33[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle33[i+j][0],circle33[i+j][1],circle33[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle33[INCRTL-(i+j)][0],circle33[INCRTL-(i+j)][1],circle33[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle33[INCRTL-i][0],circle33[INCRTL-i][1],circle33[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle34[i][0],circle34[i][1],circle34[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle34[i+j][0],circle34[i+j][1],circle34[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle34[INCRTL-(i+j)][0],circle34[INCRTL-(i+j)][1],circle34[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle34[INCRTL-i][0],circle34[INCRTL-i][1],circle34[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle35[i][0],circle35[i][1],circle35[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle35[i+j][0],circle35[i+j][1],circle35[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle35[INCRTL-(i+j)][0],circle35[INCRTL-(i+j)][1],circle35[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle35[INCRTL-i][0],circle35[INCRTL-i][1],circle35[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle36[i][0],circle36[i][1],circle36[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle36[i+j][0],circle36[i+j][1],circle36[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle36[INCRTL-(i+j)][0],circle36[INCRTL-(i+j)][1],circle36[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle36[INCRTL-i][0],circle36[INCRTL-i][1],circle36[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle41[i][0],circle41[i][1],circle41[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle41[i+j][0],circle41[i+j][1],circle41[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle41[INCRTL-(i+j)][0],circle41[INCRTL-(i+j)][1],circle41[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle41[INCRTL-i][0],circle41[INCRTL-i][1],circle41[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle42[i][0],circle42[i][1],circle42[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle42[i+j][0],circle42[i+j][1],circle42[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle42[INCRTL-(i+j)][0],circle42[INCRTL-(i+j)][1],circle42[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle42[INCRTL-i][0],circle42[INCRTL-i][1],circle42[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle43[i][0],circle43[i][1],circle43[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle43[i+j][0],circle43[i+j][1],circle43[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle43[INCRTL-(i+j)][0],circle43[INCRTL-(i+j)][1],circle43[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle43[INCRTL-i][0],circle43[INCRTL-i][1],circle43[INCRTL-i][2]);
	
      glTexCoord2f(0.0,0.0);glVertex3f(circle44[i][0],circle44[i][1],circle44[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle44[i+j][0],circle44[i+j][1],circle44[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle44[INCRTL-(i+j)][0],circle44[INCRTL-(i+j)][1],circle44[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle44[INCRTL-i][0],circle44[INCRTL-i][1],circle44[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle45[i][0],circle45[i][1],circle45[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle45[i+j][0],circle45[i+j][1],circle45[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle45[INCRTL-(i+j)][0],circle45[INCRTL-(i+j)][1],circle45[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle45[INCRTL-i][0],circle45[INCRTL-i][1],circle45[INCRTL-i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle46[i][0],circle46[i][1],circle46[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle46[i+j][0],circle46[i+j][1],circle46[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle46[INCRTL-(i+j)][0],circle46[INCRTL-(i+j)][1],circle46[INCRTL-(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle46[INCRTL-i][0],circle46[INCRTL-i][1],circle46[INCRTL-i][2]);
    }
    glEnd();
  }
  ////
  j = 2;
  for(i = 1; i < INCRTL-1 ;i+=2) {
    glBegin(GL_QUADS);
    {
      glTexCoord2f(0.0,0.0);glVertex3f(circle1[i][0],circle1[i][1],circle1[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle1[i+j][0],circle1[i+j][1],circle1[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle4[(i+j)][0],circle4[(i+j)][1],circle4[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle4[i][0],circle4[i][1],circle4[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle2[i][0],circle2[i][1],circle2[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle2[i+j][0],circle2[i+j][1],circle2[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle5[(i+j)][0],circle5[(i+j)][1],circle5[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle5[i][0],circle5[i][1],circle5[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle3[i][0],circle3[i][1],circle3[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle3[i+j][0],circle3[i+j][1],circle3[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle6[(i+j)][0],circle6[(i+j)][1],circle6[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle6[i][0],circle6[i][1],circle6[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle11[i][0],circle11[i][1],circle11[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle11[i+j][0],circle11[i+j][1],circle11[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle21[(i+j)][0],circle21[(i+j)][1],circle21[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle21[i][0],circle21[i][1],circle21[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle12[i][0],circle12[i][1],circle12[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle12[i+j][0],circle12[i+j][1],circle12[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle22[(i+j)][0],circle22[(i+j)][1],circle22[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle22[i][0],circle22[i][1],circle22[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle13[i][0],circle13[i][1],circle13[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle13[i+j][0],circle13[i+j][1],circle13[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle23[(i+j)][0],circle23[(i+j)][1],circle23[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle23[i][0],circle23[i][1],circle23[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle14[i][0],circle14[i][1],circle14[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle14[i+j][0],circle14[i+j][1],circle14[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle24[(i+j)][0],circle24[(i+j)][1],circle24[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle24[i][0],circle24[i][1],circle24[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle15[i][0],circle15[i][1],circle15[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle15[i+j][0],circle15[i+j][1],circle15[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle25[(i+j)][0],circle25[(i+j)][1],circle25[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle25[i][0],circle25[i][1],circle25[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle16[i][0],circle16[i][1],circle16[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle16[i+j][0],circle16[i+j][1],circle16[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle26[(i+j)][0],circle26[(i+j)][1],circle26[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle26[i][0],circle26[i][1],circle26[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle31[i][0],circle31[i][1],circle31[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle31[i+j][0],circle31[i+j][1],circle31[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle41[(i+j)][0],circle41[(i+j)][1],circle41[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle41[i][0],circle41[i][1],circle41[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle32[i][0],circle32[i][1],circle32[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle32[i+j][0],circle32[i+j][1],circle32[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle42[(i+j)][0],circle42[(i+j)][1],circle42[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle42[i][0],circle42[i][1],circle42[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle33[i][0],circle33[i][1],circle33[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle33[i+j][0],circle33[i+j][1],circle33[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle43[(i+j)][0],circle43[(i+j)][1],circle43[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle43[i][0],circle43[i][1],circle43[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle34[i][0],circle34[i][1],circle34[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle34[i+j][0],circle34[i+j][1],circle34[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle44[(i+j)][0],circle44[(i+j)][1],circle44[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle44[i][0],circle44[i][1],circle44[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle35[i][0],circle35[i][1],circle35[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle35[i+j][0],circle35[i+j][1],circle35[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle45[(i+j)][0],circle45[(i+j)][1],circle45[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle45[i][0],circle45[i][1],circle45[i][2]);
      
      glTexCoord2f(0.0,0.0);glVertex3f(circle36[i][0],circle36[i][1],circle36[i][2]);
      glTexCoord2f(0.0,1.0);glVertex3f(circle36[i+j][0],circle36[i+j][1],circle36[i+j][2]);
      glTexCoord2f(1.0,1.0);glVertex3f(circle46[(i+j)][0],circle46[(i+j)][1],circle46[(i+j)][2]);
      glTexCoord2f(1.0,0.0);glVertex3f(circle46[i][0],circle46[i][1],circle46[i][2]);
    }
    glEnd();
  }
  float k; 
  for(i =0;i < 21;i++){
    if(i == 0 ) {
      glBegin(GL_QUADS);
      {	  
	glTexCoord2f(0.0,0.0);glVertex3f(2.0,1.2,-0.2);
	glTexCoord2f(0.0,1.0);glVertex3f(2.1,1.2,-0.2);
	glTexCoord2f(1.0,1.0);glVertex3f(2.1,-1.2,-0.2);
	glTexCoord2f(1.0,0.0);glVertex3f(2.0,-1.2,-0.2);
      }
      glEnd();
    }  
    if(i < 10){
      k = (float)i/(float)2;
      glBegin(GL_QUADS);
      {
	glTexCoord2f(0.0,0.0);glVertex3f(2.0+k,1.1,-0.2);
	glTexCoord2f(0.0,1.0);glVertex3f(2.1+k,1.1,-0.2);
	glTexCoord2f(1.0,1.0);glVertex3f(2.1+k,-1.1,-0.2);
	glTexCoord2f(1.0,0.0);glVertex3f(2.0+k,-1.1,-0.2);
      }
      glEnd();
    }
    if(i < 21){
      k = (float)i/(float)2;
      glBegin(GL_QUADS);
      {
	glTexCoord2f(0.0,0.0);glVertex3f(2.0+k,1.0,-0.2);
	glTexCoord2f(0.0,1.0);glVertex3f(2.1+k,1.0,-0.2);
	glTexCoord2f(1.0,1.0);glVertex3f(2.1+k,-1.0,-0.2);
	glTexCoord2f(1.0,0.0);glVertex3f(2.0+k,-1.0,-0.2);
      }
      glEnd();
    }
  }
  //
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(-3.95,-1.1,-0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.95,-0.9,-0.3);
    glTexCoord2f(1.0,1.0);glVertex3f(-3.7,-0.9,-0.3);
    glTexCoord2f(1.0,0.0);glVertex3f(-3.7,-1.1,-0.3);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.95,-0.7,-0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.95,-0.5,-0.3);
    glTexCoord2f(1.0,1.0);glVertex3f(-3.7,-0.5,-0.3);
    glTexCoord2f(1.0,0.0);glVertex3f(-3.7,-0.7,-0.3);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.95,-0.3,-0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.95,-0.1,-0.3);
    glTexCoord2f(1.0,1.0);glVertex3f(-3.7,-0.1,-0.3);
    glTexCoord2f(1.0,0.0);glVertex3f(-3.7,-0.3,-0.3);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.95,0.3,-0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.95,0.1,-0.3);
    glTexCoord2f(1.0,1.0);glVertex3f(-3.7,0.1,-0.3);
    glTexCoord2f(1.0,0.0);glVertex3f(-3.7,0.3,-0.3);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.95,0.7,-0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.95,0.5,-0.3);
    glTexCoord2f(1.0,1.0);glVertex3f(-3.7,0.5,-0.3);
    glTexCoord2f(1.0,0.0);glVertex3f(-3.7,0.7,-0.3);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.95,1.1,-0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.95,0.9,-0.3);
    glTexCoord2f(1.0,1.0);glVertex3f(-3.7,0.9,-0.3);
    glTexCoord2f(1.0,0.0);glVertex3f(-3.7,1.1,-0.3);
  }
  glEnd();
  //
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(-3.7,-1.0,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.7,-1.05,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,-0.85,-0.4);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,-0.8,-0.4);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.0,-0.8,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,-0.85,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(13.0,-0.85,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(13.0,-0.8,0.8);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.7,-0.6,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.7,-0.65,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,-0.55,-0.4);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,-0.5,-0.4);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.0,-0.5,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,-0.55,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(13.5,-0.75,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(13.5,-0.7,0.8);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.7,-0.2,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.7,-0.25,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,-0.25,-0.4);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,-0.2,-0.4);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.0,-0.2,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,-0.25,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(14.2,-0.65,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(14.2,-0.6,0.8);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.7,0.2,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.7,0.25,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,0.25,-0.4);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,0.2,-0.4);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.0,0.2,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,0.25,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(14.2,0.65,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(14.2,0.6,0.8);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.7,0.6,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.7,0.65,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,0.55,-0.4);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,0.5,-0.4);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.0,0.5,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,0.55,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(13.5,0.75,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(13.5,0.7,0.8);
    
    glTexCoord2f(0.0,0.0);glVertex3f(-3.7,1.0,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(-3.7,1.05,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(12.0,0.85,-0.4);
    glTexCoord2f(1.0,0.0);glVertex3f(12.0,0.8,-0.4);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.0,0.8,-0.4);
    glTexCoord2f(0.0,1.0);glVertex3f(12.0,0.85,-0.4);
    glTexCoord2f(1.0,1.0);glVertex3f(13.0,0.85,0.8);
    glTexCoord2f(1.0,0.0);glVertex3f(13.0,0.8,0.8);
  }
  glEnd();
  
  glBindTexture(GL_TEXTURE_2D,texName[4]);   
  glBegin(GL_QUADS);
  {
    glTexCoord2f(0.0,0.0);glVertex3f(12.5,-1.15,0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(14.5,-1.75,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(14.5,-1.75,1.5);
    glTexCoord2f(1.0,0.0);glVertex3f(12.5,-1.15,0.9);
    
    glTexCoord2f(0.0,0.0);glVertex3f(14.5,-1.75,1.0);
    glTexCoord2f(0.0,1.0);glVertex3f(14.8,-1.75,1.3);
    glTexCoord2f(1.0,1.0);glVertex3f(14.8,-1.75,1.3);
    glTexCoord2f(1.0,0.0);glVertex3f(14.5,-1.75,1.5);
    
    glTexCoord2f(0.0,0.0);glVertex3f(12.5,1.15,0.3);
    glTexCoord2f(0.0,1.0);glVertex3f(14.5,1.75,1.0);
    glTexCoord2f(1.0,1.0);glVertex3f(14.5,1.75,1.5);
    glTexCoord2f(1.0,0.0);glVertex3f(12.5,1.15,0.9);
    
    glTexCoord2f(0.0,0.0);glVertex3f(14.5,1.75,1.0);
    glTexCoord2f(0.0,1.0);glVertex3f(14.8,1.75,1.3);
    glTexCoord2f(1.0,1.0);glVertex3f(14.8,1.75,1.3);
    glTexCoord2f(1.0,0.0);glVertex3f(14.5,1.75,1.5);
  }
  glEnd();
  
}
void init(void) {
  
  GLfloat light_position[] = {1.0,1.0,1.0,0.0};  
  GLfloat spec_light[] = {1.0,1.0,1.0,1.0};  
  GLfloat ambient_light[] = {0.2,0.2,0.2,1.0};  
  GLfloat diff_light[] = {0.5,0.5,0.5,1.0};  
  GLfloat emission_light[] = {0.5,0.4,0.3,0.0};  
  
  glClearColor (0.0,0.0,0.0,20.0); 
  glShadeModel(GL_SMOOTH);
  glEnable(GL_DEPTH_TEST); 
  glEnable(GL_TEXTURE_2D); 
  angle[0] = 0.0; angle[1] = 0.0; angle[2] = 0.0;
  scale[0] = 1.0; scale[1] = 1.0; scale[2] = 1.0;
  translate[0] = 0.0; translate[1] = 0.0; translate[2] = 0.0;
  makecheckImage(File_Name,1); 
  makecheckImage(File_Name1,2); 
  makecheckImage(File_Name2,3); 
  makecheckImage(File_Name3,4); 
  makecheckImage(File_Name4,5); 
  
  
  //glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_TRUE); 
   //  glLightModeli(GL_LIGHT_MODEL_TWO_SIDE,GL_TRUE); 
   //glLightModeli(GL_LIGHT_MODEL_COLOR_CONTROL,GL_SEPARATE_SPECULAR_COLOR); 
  //glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light); 
  //glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_light);
  
  glMaterialfv (GL_FRONT, GL_DIFFUSE, diff_light);
  glMaterialfv (GL_FRONT, GL_SPECULAR, spec_light);
  glMaterialf (GL_FRONT, GL_SHININESS, 1500.0);
  glLightfv(GL_LIGHT0,GL_DIFFUSE,light_position); 
  glMaterialfv (GL_FRONT, GL_EMISSION, emission_light);
  //glEnable(GL_LIGHTING); 
  //glEnable(GL_LIGHT0); 
  //glColorMaterial(GL_FRONT,GL_DIFFUSE);
  //glEnable(GL_COLOR_MATERIAL);
}



void display(void) 
{ 
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); 
  glLoadIdentity ();            
  gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
  // loadAllTextures();
  glPushMatrix (); 
  glRotatef(angle[0],1.0,0.0,0.0);
  glRotatef(angle[1],0.0,1.0,0.0);
  glRotatef(angle[2],0.0,0.0,1.0);
  glPushMatrix (); 
  glTranslatef(translate[0],translate[1],translate[2]);
  glPushMatrix (); 
  glScalef(scale[0],scale[1],scale[2]);
  funCall();
  //  drawTextureObjects();
  glPopMatrix (); 
  glPopMatrix (); 
  glPopMatrix (); 
  glFlush(); 
  glutSwapBuffers();
  //glDisable(GL_TEXTURE_2D);
  
}

void reshape(int w, int h)
{
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-18.0,18.0,-18.0,18.0,-18.0,18.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity ();
}

int main(int argc, char** argv)
{
  callBcurv();
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(1240, 800);
  glutInitWindowPosition(10,5);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;
}
