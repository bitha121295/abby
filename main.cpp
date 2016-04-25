#include <GL/gl.h>//permite que se pueda usar el openGl
#include <GL/glut.h>//permite el uso de glut
#include <math.h>//libreria de operaciones matematicas
void circulo(void)//funcion circulo
{
  glBegin(GL_POINTS);//primitiva para puntos
  glPointSize(4);//tamaño de los puntos
  float r=3; //se esta definiendo un radio 
  float ang=3.1416/19; 
  for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
       //circunferencia para la torre derecha
      double x=r*cos(i*ang); //ubicacion de x
      double y=r*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x+102.5f,y+183.f);//coordenadas para los puntos de la circunferencia
     }
  for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
     //circunferencia para la ventana torre izquierda
      double x=r*cos(a*ang); //ubicacion de x
      double y=r*sin(a*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x-102.5f,y+120.f);//coordenadas para los puntos de la circunferencia
     }
     glEnd();//fin de funcion
 }
 void linea (void)//funcion para lineas
 glBegin(GL_LINES);
 //LINEAS VERTICALES TRIANGULO DEL TECHO DE LA (torre central)
 glColor3f(1.0,0.0,0.0);
 glVertex2f(0.0f,230.0f);
  for (float b=32; b<44; b+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
      double x=r*cos(b*ang); //ubicacion de x
      double y=r*sin(b*ang); //ubicacion de y
      glColor3f(1.0,1.0,1.0);//color blanco
      glVertex2f(x-83,y);//coordenadas para los puntos de la circunferencia
     }
  float r1=6; //se esta definiendo un radio    
  for (float v1=58; v1<66; v1+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
      double x=r1*cos(v1*ang); //ubicacion de x
      double y=r1*sin(v1*ang); //ubicacion de y
      glColor3f(1.0,1.0,1.0);//color blanco
      glVertex2f(x+100.f,y+60.f);//coordenadas para los puntos de la circunferencia
     }
  float r2=6; //se esta definiendo un radio  
  for (float v1=67; v1<75; v1+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
      double x=r2*cos(v1*ang); //ubicacion de x
      double y=r2*sin(v1*ang); //ubicacion de y
      glColor3f(1.0,1.0,1.0);//color blanco
      glVertex2f(x-100.f,y+60.f);//coordenadas para los puntos de la circunferencia
     }
  float r3=6; //se esta definiendo un radio  
  for (float v1=48; v1<56; v1+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
      double x=r3*cos(v1*ang); //ubicacion de x
      double y=r3*sin(v1*ang); //ubicacion de y
      glColor3f(1.0,1.0,1.0);//color blanco
      glVertex2f(x+100.f,y-60.f);//coordenadas para los puntos de la circunferencia
     }
  float r4=6; //se esta definiendo un radio  
  for (float v1=39; v1<47; v1+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
      double x=r4*cos(v1*ang); //ubicacion de x
      double y=r4*sin(v1*ang); //ubicacion de y
      glColor3f(1.0,1.0,1.0);//color blanco
      glVertex2f(x-100.f,y-60.f);//coordenadas para los puntos de la circunferencia
     }
   glEnd();//fin funcion  
}
void linea(void)//FUNCION PARA LINEAS
{ 
    glBegin(GL_POINTS);//comenzando con POINTS para abajo inicalizar el for 
    for(float y=-59;y<=59;y+=0.5)
    {
        glColor3f(1.0,1.0,1.0);//color blanco
        glVertex2f(0.0f,y);//coordenadas para los puntos de la linea
    }
    glEnd();//fin funcion 
}
void rectangulos(void)//FUNCION PARA LOS CUADROS
{
    glBegin(GL_QUADS);//primitiva para  los rectangulos
    //cuadro blanco fondo
    glColor3f(1.0,1.0,1.0);//color blanco
    glVertex2f(100.0f,60.0f);//punto de en (x,y) V1
    glVertex2f(100.0f,-60.0f);//punto en (x,-y)  V2 
    glVertex2f(-100.0f,-60.0f);//punto en (-x,-y) V3
    glVertex2f(-100.0f,60.0f);//punto en (-x,y) V4
    //cuadro verde cesped
    glColor3f(0.0,1.0,0.0);//color verde
    glVertex2f(99.0f,59.0f);//punto de en (x,y) V1
    glVertex2f(99.0f,-59.0f);//punto en (x,-y)  V2 
    glVertex2f(-99.0f,-59.0f);//punto en (-x,-y) V3
    glVertex2f(-99.0f,59.0f);//punto en (-x,y) V4
    //PORTERIA DERECHA CUADROS
    //porteria derecha cuadro blanco
    glColor3f(1.0,1.0,1.0);//dando color blanco
    glVertex2f(99.0f,40.0f);//punto de en (x,y) V1
    glVertex2f(99.0f,-40.0f);//punto en (x,-y)  V2 
    glVertex2f(71.0f,-40.0f);//punto en (x,-y) V3
    glVertex2f(71.0f,40.0f);//punto en (x,y) V4
    //porteria derecha cuadro verde
    glColor3f(0.0,1.0,0.0);//dando color verde
    glVertex2f(99.0f,39.0f);//punto de en (x,y) V1
    glVertex2f(99.0f,-39.0f);//punto en (x,-y)  V2 
    glVertex2f(72.0f,-39.0f);//punto en (x,-y) V3
    glVertex2f(72.0f,39.0f);//punto en (x,y) V4
    //porteria derecha cuadro pequeño blanco
    glColor3f(1.0,1.0,1.0);//dando color blanco
    glVertex2f(100.0f,28.0f);//punto de en (x,y) V1
    glVertex2f(100.0f,-28.0f);//punto en (x,-y)  V2 
    glVertex2f(88.0f,-28.0f);//punto en (x,-y) V3
    glVertex2f(88.0f,28.0f);//punto en (x,y) V4
    //porteria derecha cuadro pequeño verde
    glColor3f(0.0,1.0,0.0);//dando de color verde
    glVertex2f(99.0f,27.0f);//punto de en (x,y) V1
    glVertex2f(99.0f,-27.0f);//punto en (x,-y)  V2 
    glVertex2f(89.0f,-27.0f);//punto en (x,-y) V3
    glVertex2f(89.0f,27.0f);//punto en (x,y) V4
    //PORTERIA IZQUIERDA CUADROS
    //porteria izquierda cuadro blanco
    glColor3f(1.0,1.0,1.0);//dando color blanco
    glVertex2f(-99.0f,-40.0f);//punto de en (-x,-y) V1
    glVertex2f(-99.0f,40.0f);//punto en (-x,y)  V2 
    glVertex2f(-71.0f,40.0f);//punto en (-x,y) V3
    glVertex2f(-71.0f,-40.0f);//punto en (-x,-y) V4
    //porteria izquierda cuadro verde
    glColor3f(0.0,1.0,0.0);//dando color verde
    glVertex2f(-99.0f,-39.0f);//punto de en (-x,-y) V1
    glVertex2f(-99.0f,39.0f);//punto en (-x,y)  V2 
    glVertex2f(-72.0f,39.0f);//punto en (-x,y) V3
    glVertex2f(-72.0f,-39.0f);//punto en (-x,-y) V4
    //porteria izquierda cuadro pequeño blanco
    glColor3f(1.0,1.0,1.0);//dando color blanco
    glVertex2f(-100.0f,-28.0f);//punto de en (-x,-y) V1
    glVertex2f(-100.0f,28.0f);//punto en (x,y)  V2 
    glVertex2f(-88.0f,28.0f);//punto en (-x,y) V3
    glVertex2f(-88.0f,-28.0f);//punto en (-x,-y) V4
    //porteria izquierda cuadro pequeño verde
    glColor3f(0.0,1.0,0.0);//dando color verde
    glVertex2f(-99.0f,-27.0f);//punto de en (-x,-y) V1
    glVertex2f(-99.0f,27.0f);//punto en (-x,y)  V2 
    glVertex2f(-89.0f,27.0f);//punto en (-x,y) V3
    glVertex2f(-89.0f,-27.0f);//punto en (-x,-y) V4
    glEnd();//fin funcion 
}
void puntos(void)//FUNCION PUNTOS
{
	glPointSize(4);
    glBegin(GL_POINTS);//primitiva para puntos
    glColor3f(1.0,1.0,1.0);//color blanco
    glVertex2f(0.0f,0.0f);//punto en el centro del campo
    glVertex2f(80.0f,0.0f);//punto penal porteria dercha
    glVertex2f(-80.0f,0.0f);//punto penal porteria izquierda 
    //Puntos en los bordes del campo
    glVertex2f(-100.0f,45.0f);//punto izquierda
    glVertex2f(-100.0f,-45.0f);//punto izquierda
    glVertex2f(-100.0f,20.0f);//punto izquierda
    glVertex2f(-100.0f,-20.0f);//punto izquierda
    glVertex2f(100.0f,45.0f);//punto izquierda
    glVertex2f(100.0f,-45.0f);//punto derecha
    glVertex2f(100.0f,20.0f);//punto derecha
    glVertex2f(100.0f,-20.0f);//punto derecha
    //puntos bordes superior e inferior
    glVertex2f(90.0f,60.0f);//punto superior
    glVertex2f(-90.0f,60.0f);//punto superior
    glVertex2f(90.0f,-60.0f);//punto inferior
    glVertex2f(-90.0f,-60.0f);//punto inferior
    glEnd();//fin funcion 
}
void display(void)//FUNCION DISPLAY
{
    glClear(GL_COLOR_BUFFER_BIT);//limpiando la pantalla
    glPointSize(2);//tamaño de los puntos para la linea y circulos
    rectangulos();//llamando a rectangulos
    circulo();//llamando a  circulo
    linea();//llamando a linea
    puntos();//llamando a puntos
    glEnd();//fin funcion 
    glFlush();
}
void init (void)//FUNCION INIT
{
    glMatrixMode(GL_PROJECTION);//MATRIX DE PROYECCION
    glLoadIdentity();//cargando matrix identidad
    glOrtho(-105.0, 105.0, -105.0, 105.0, -105.0, 105.0);//vista ortogonal
}
int main(int argc, char** argv)//funcion principal main
{
    glutInit(&argc, argv);//inicializo lo que es el OpenGl
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);// Definimos una ventana de medidas 500 x 500 como ventana
    glutInitWindowPosition (550,250);// Se crea lo que es la ventana y añadiremos su titulo el nombre que se observara en su barra de titulo.
    glutCreateWindow ("EJERCICIO3_TAREA2_DE_PRIMITIVAS");
    init ();//se inicializa el sistema
    glutDisplayFunc(display);//se llama a la funcion display 
    glutMainLoop();//se hace el enlace entre la funcion y el programa principal
    return 0;//retornando al sistema
}

