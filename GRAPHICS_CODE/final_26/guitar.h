#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <fcntl.h>

#define NCONTORL 20
#define INCRTL 20
#define SUBPOINT 1000
#define COORDNT 3
#define PI 22.0/7.0
#define CNT 9

#define	stripeImageHeight 2
#define STEP 1

#define File_Name "100.bmp"
#define File_Name1 "101.bmp"
#define File_Name2 "wood04.bmp"
#define File_Name3 "2.bmp"
#define File_Name4 "100.bmp"

#define	checkImageWidth 1000
#define	checkImageHeight 1000

typedef struct
{
  char type[2];
  unsigned int size;
  unsigned short int reserved1,reserved2;
  unsigned int offset;
}HEADER;

typedef struct {
  unsigned int size;               /* Header size in bytes      */
  int width,height;                /* Width and height of image */
  unsigned short int planes;       /* Number of colour planes   */
  unsigned short int bits;         /* Bits per pixel            */
  unsigned int compression;        /* Compression type          */
  unsigned int imagesize;          /* Image size in bytes       */
  int xresolution,yresolution;     /* Pixels per meter          */
  unsigned int ncolours;           /* Number of colours         */
  unsigned int importantcolours;   /* Important colours         */
} INFOHEADER;

static GLuint texName[4];

HEADER *head;
INFOHEADER *infohead;


GLubyte checkImage[checkImageWidth*checkImageHeight*3];
GLubyte checkImage1[checkImageWidth*checkImageHeight*3];
GLubyte checkImage2[checkImageWidth*checkImageHeight*3];
GLubyte checkImage3[checkImageWidth*checkImageHeight*3];
GLubyte checkImage4[checkImageWidth*checkImageHeight*3];

//GLubyte stripeImage[stripeImageWidth];
//GLubyte stripeImage1[stripeImageWidth1];



float angle[COORDNT];
float scale[COORDNT];
float translate[COORDNT];
GLfloat Extrapoints[SUBPOINT][3];

GLfloat points[SUBPOINT][3],points1[SUBPOINT][3]; //upper cur
GLfloat points2[SUBPOINT][3],points3[SUBPOINT][3]; //lower

GLfloat curvL[SUBPOINT][3],curvR[SUBPOINT][3]; // 
GLfloat curvG[SUBPOINT][3],curvG1[SUBPOINT][3]; 

GLfloat curvG2[SUBPOINT][3],curvG5[SUBPOINT][3];
GLfloat curvG3[SUBPOINT][3],curvG6[SUBPOINT][3];
GLfloat curvG4[SUBPOINT][3],curvG7[SUBPOINT][3];

GLfloat curvG8[SUBPOINT][3],curvG16[SUBPOINT][3];
GLfloat curvG9[SUBPOINT][3],curvG17[SUBPOINT][3];
GLfloat curvG10[SUBPOINT][3],curvG18[SUBPOINT][3];
GLfloat curvG11[SUBPOINT][3],curvG19[SUBPOINT][3];

GLfloat curvG12[SUBPOINT][3],curvG20[SUBPOINT][3];
GLfloat curvG13[SUBPOINT][3],curvG21[SUBPOINT][3];
GLfloat curvG14[SUBPOINT][3],curvG22[SUBPOINT][3];
GLfloat curvG15[SUBPOINT][3],curvG23[SUBPOINT][3];

float circlePoints[NCONTORL][3];
float circlePoints1[NCONTORL][3];

float circle1[INCRTL][3],circle4[INCRTL][3]; // midel nut cur
float circle2[INCRTL][3],circle5[INCRTL][3];
float circle3[INCRTL][3],circle6[INCRTL][3];

float circle11[INCRTL][3],circle21[INCRTL][3];//side nuts
float circle12[INCRTL][3],circle22[INCRTL][3];
float circle13[INCRTL][3],circle23[INCRTL][3];
float circle14[INCRTL][3],circle24[INCRTL][3];
float circle15[INCRTL][3],circle25[INCRTL][3];
float circle16[INCRTL][3],circle26[INCRTL][3];

float circle31[INCRTL][3],circle41[INCRTL][3];
float circle32[INCRTL][3],circle42[INCRTL][3];
float circle33[INCRTL][3],circle43[INCRTL][3];
float circle34[INCRTL][3],circle44[INCRTL][3];
float circle35[INCRTL][3],circle45[INCRTL][3];
float circle36[INCRTL][3],circle46[INCRTL][3];


GLfloat Extra[SUBPOINT][3];
GLfloat Extra1[SUBPOINT][3];

int tex_width,tex_height;;


float circleCenter[] = {1.4,0.0,0.0};
float circleCenter1[] = {1.2,0.0,0.0};

GLfloat ctrpoints[9][3]= {{0.0,-4.0,0.0},{-2.0,-7.5,0.0},{-5.0,-10.7,0.0},{-7.0,-5.0,0.0},
			  {-7.0,0.0,0.0},{-7.0,5.0,0.0},{-5.0,10.7,0.0},{-2.0,7.5,0.0},{0.0,4.0,0.0}};

GLfloat ctrpoints1[9][3]= {{0.0,-4.0,0.0},{2.0,-3.5,0.0},{4.0,-7.7,0.0},{5.0,-4.0,0.0},{5.0,0.0,0.0},
			   {5.0,4.0,0.0},{4.0,7.7,0.0},{2.0,3.5,0.0},{0.0,4.0,0.0}};

GLfloat ctrpoints2[9][3]= {{0.0,-4.0,2.2},{-2.0,-7.5,2.2},{-5.0,-10.7,2.2},{-7.0,-5.0,2.2},
			   {-7.0,0.0,2.2},{-7.0,5.0,2.2},{-5.0,10.7,2.2},{-2.0,7.5,2.2},{0.0,4.0,2.2}};

GLfloat ctrpoints3[9][3]= {{0.0,-4.0,2.2},{2.0,-3.5,2.2},{4.0,-7.7,2.2},{5.0,-4.0,2.2},{5.0,0.0,2.2},
			   {5.0,4.0,2.2},{4.0,7.7,2.2},{2.0,3.5,2.2},{0.0,4.0,2.2}};

GLfloat curv1[3][3] = {{5.0,1.1,2.2},{4.5,1.0,1.0},{5.5,1.1,0.1}};
GLfloat curv2[3][3] = {{5.0,-1.1,2.2},{4.5,-1.0,1.0},{5.5,-1.1,0.1}};

GLfloat curv3[3][3] ={{4.5,1.1,0.0},{4.5,0.0,1.9},{4.5,-1.1,0.0}};
GLfloat curv4[3][3] ={{12.0,1.0,0.1},{12.0,0.0,1.9},{12.0,-1.0,0.1}};

GLfloat curv5[3][3] ={{15.0,1.2,1.0},{15.5,0.7,1.1},{15.2,0.3,1.1}};
GLfloat curv6[3][3] ={{15.2,0.3,1.1},{15.7,0.0,1.1},{15.2,-0.3,1.1}};
GLfloat curv7[3][3]= {{15.2,-0.3,1.1},{15.5,-0.7,1.1},{15.0,-1.2,1.0}};

GLfloat curv8[3][3] ={{15.0,1.2,1.8},{15.5,0.7,1.9},{15.2,0.3,1.9}};
GLfloat curv9[3][3] ={{15.2,0.3,1.9},{15.7,0.0,1.9},{15.2,-0.3,1.9}};
GLfloat curv10[3][3]= {{15.2,-0.3,1.9},{15.5,-0.7,1.9},{15.0,-1.2,1.8}};

GLfloat curv11[3][3] = {{12.6,0.8,0.2},{12.3,0.6,0.2},{12.6,0.2,0.2}};
GLfloat curv12[2][3] = {{12.6,0.2,0.2},{14.3,0.4,0.8}};
GLfloat curv13[3][3] = {{14.3,0.4,0.8},{15.0,0.8,0.8},{14.3,1.2,0.8}};
GLfloat curv14[2][3] = {{14.3,1.2,0.8},{12.6,0.8,0.2}};

GLfloat curv19[3][3] = {{12.6,0.8,1.1},{12.3,0.6,1.1},{12.6,0.2,1.1}};
GLfloat curv20[2][3] = {{12.6,0.2,1.1},{14.3,0.4,1.6}};
GLfloat curv21[3][3] = {{14.3,0.4,1.6},{15.0,0.8,1.6},{14.3,1.2,1.6}};
GLfloat curv22[2][3] = {{14.3,1.2,1.6},{12.6,0.8,1.1}};

GLfloat curv15[3][3] = {{12.6,-0.8,0.2},{12.3,-0.6,0.2},{12.6,-0.2,0.2}};
GLfloat curv16[2][3] = {{12.6,-0.2,0.2},{14.3,-0.4,0.8}};
GLfloat curv17[3][3] = {{14.3,-0.4,0.8},{15.0,-0.8,0.8},{14.3,-1.2,0.8}};
GLfloat curv18[2][3] = {{14.3,-1.2,0.8},{12.6,-0.8,0.2}};

GLfloat curv23[3][3] = {{12.6,-0.8,1.1},{12.3,-0.6,1.1},{12.6,-0.2,1.1}};
GLfloat curv24[2][3] = {{12.6,-0.2,1.1},{14.3,-0.4,1.6}};
GLfloat curv25[3][3] = {{14.3,-0.4,1.6},{15.0,-0.8,1.6},{14.3,-1.2,1.6}};
GLfloat curv26[2][3] = {{14.3,-1.2,1.6},{12.6,-0.8,1.1}};

GLfloat rectang[4][3] = {{-3.5,2.5,-0.1},{-4.0,2.5,-0.1},{-4.0,-2.5,-0.1},{-3.5,-2.5,-0.1}};
GLfloat rectangT[4][3] = {{-3.5,1.5,-0.2},{-4.0,1.5,-0.2},{-4.0,-1.5,-0.2},{-3.5,-1.5,-0.2}};

GLfloat rectangA[5][3] = {{-3.7,-1.0,-0.2},{12.0,-0.8,-0.3},{13.0,-0.8,0.6}};
GLfloat rectangB[5][3] = {{-3.7,-0.6,-0.2},{12.0,-0.5,-0.3},{13.5,-0.7,0.7}}; 
GLfloat rectangC[5][3] = {{-3.7,-0.2,-0.2},{12.0,-0.2,-0.3},{14.2,-0.6,0.8}};
GLfloat rectangD[5][3] = {{-3.7,0.2,-0.2},{12.0,0.2,-0.3},{14.2,0.6,0.8}}; 
GLfloat rectangE[5][3] = {{-3.7,0.6,-0.2},{12.0,0.5,-0.3},{13.5,0.7,0.7}};
GLfloat rectangF[5][3] = {{-3.7,1.0,-0.2},{12.0,0.8,-0.3},{13.0,0.8,0.6}}; 

GLfloat rectangAA[5][3] = {{-3.95,-1.1,-0.2},{-3.95,-0.9,-0.2},{-3.7,-0.9,-0.2},{-3.7,-1.1,-0.2}};
GLfloat rectangBB[5][3] = {{-3.95,-0.7,-0.2},{-3.95,-0.5,-0.2},{-3.7,-0.5,-0.2},{-3.7,-0.7,-0.2}}; 
GLfloat rectangCC[5][3] = {{-3.95,-0.3,-0.2},{-3.95,-0.1,-0.2},{-3.7,-0.1,-0.2},{-3.7,-0.3,-0.2}}; 
GLfloat rectangDD[5][3] = {{-3.95,0.3,-0.2},{-3.95,0.1,-0.2},{-3.7,0.1,-0.2},{-3.7,0.3,-0.2}}; 
GLfloat rectangEE[5][3] = {{-3.95,0.7,-0.2},{-3.95,0.5,-0.2},{-3.7,0.5,-0.2},{-3.7,0.7,-0.2}}; 
GLfloat rectangFF[5][3] = {{-3.95,1.1,-0.2},{-3.95,0.9,-0.2},{-3.7,0.9,-0.2},{-3.7,1.1,-0.2}};

GLfloat rectang3[5][3] = {{4.5,-1.1,2.2},{5.0,-1.1,2.2}}; 
GLfloat rectang4[5][3] = {{4.5,1.1,2.2},{5.0,1.1,2.2}}; 

GLfloat rectang1[6][3] = {{1.8,1.2,0.0},{4.5,1.1,0.0},{12.0,1.0,0.0},{12.0,-1.0,0.0},{4.5,-1.1,0.0},{1.8,-1.2,0.0}}; 
GLfloat rectang2[6][3] = {{1.8,1.2,-0.1},{4.5,1.1,-0.1},{12.0,1.0,-0.1},{12.0,-1.0,-0.1},{4.5,-1.1,-0.1},{1.8,-1.2,-0.1}}; 

GLfloat rectang5[8][3] = {{15.0,1.2,1.0},{15.0,1.8,1.0},{12.2,1.0,0.1},{12.0,1.0,0.1},{12.0,-1.0,0.1},{12.2,-1.0,0.1},{15.0,-1.8,1.0},{15.0,-1.2,1.0}};
GLfloat rectang6[8][3] = {{15.0,1.2,1.8},{15.0,1.8,1.8},{12.2,1.0,1.0},{12.0,1.0,1.0},{12.0,-1.0,1.0},{12.2,-1.0,1.0},{15.0,-1.8,1.8},{15.0,-1.2,1.8}};

GLfloat line[2][3] = {{-6.2,0.0,2.2},{4.5,0.0,2.2}};

GLfloat degn[8][3] = {{12.5,-1.15,0.3},{14.5,-1.75,1.0},{14.8,-1.75,1.3},{14.5,-1.75,1.5},{12.5,-1.15,0.9},{12.5,-1.15,0.3}};
GLfloat degn1[8][3] = {{12.5,1.15,0.3},{14.5,1.75,1.0},{14.8,1.75,1.3},{14.5,1.75,1.5},{12.5,1.15,0.9},{12.5,1.15,0.3}};



GLfloat Bfunc(float n, float lam, float i);
long int factorial(int n) ;
void DrawPoints(float points[][3]);
void DrawLine(int no,float rectang[][3]);
void DrawLine4(int cnt,float rectang2[][3]);
void drawTriangle(void);
void drawTriangle1(void);
void funCall(void);
void callBcurv(void);
void makecheckImage(char *file, int flg);
