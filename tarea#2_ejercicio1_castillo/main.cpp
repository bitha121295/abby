/* TAREA 2 DE PRIMITIVAS EJERCICIO3 CANCHA DE FUTBOL POR LOS ALUMNOS: 
 * JOSE ALEXANDER GUANDIQUE FLORES GF12011
 * DAMARIS ABIGAIL ALAS GUZMAN AG12024
 * ALGORITMOS GRAFICOS
 * */ 
#include <GL/gl.h>//permite que se pueda usar el openGl
#include <GL/glut.h>//permite el uso de glut
#include <math.h>//incluye la libreria mat.h para usar funciones seno y coseno
void circulo(void)//FUNCION CIRCULO
{
  glBegin(GL_POINTS);//primitiva para puntos
  glPointSize(4);//tamaño de los puntos
  float r=3; //se esta definiendo un radio 
  float ang=3.1416/180; 
  for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la punta de la torre derecha	
      double x=r*cos(i*ang); //ubicacion de x
      double y=r*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x+102.5f,y+183.f);//coordenadas para los puntos de la circunferencia
     }
  for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la punta de la torre izquierda	
      double x=r*cos(i*ang); //ubicacion de x
      double y=r*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x-102.5f,y+183.f);//coordenadas para los puntos de la circunferencia
     }
  for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la punta de la torre central	
      double x=r*cos(i*ang); //ubicacion de x
      double y=r*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x,y+233.f);//coordenadas para los puntos de la circunferencia
     }
  float r_vent = 5;   
  for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la tentana1 torre izquierda	
      double x=r_vent*cos(i*ang); //ubicacion de x
      double y=r_vent+8*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x-102.5f,y+112.f);//coordenadas para los puntos de la circunferencia
     }
     for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la ventana1 torre derecha	
      double x=r_vent*cos(i*ang); //ubicacion de x
      double y=r_vent+8*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x+102.5f,y+112.f);//coordenadas para los puntos de la circunferencia
     }
     for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la ventana2 torre izquierda	
      double x=r_vent*cos(i*ang); //ubicacion de x
      double y=r_vent+8*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x-102.5f,y+55.f);//coordenadas para los puntos de la circunferencia
     }
     for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la ventana2 torre derecha	
      double x=r_vent*cos(i*ang); //ubicacion de x
      double y=r_vent+8*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x+102.5f,y+55.f);//coordenadas para los puntos de la circunferencia
     }
     for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la ventana1 torre central en (-x,y)	
      double x=r_vent*cos(i*ang); //ubicacion de x
      double y=r_vent+8*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x-20.0f,y+162.f);//coordenadas para los puntos de la circunferencia
     }
     for (float i=0; i<360; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la ventana1 torre cemtral (x,y)	
      double x=r_vent*cos(i*ang); //ubicacion de x
      double y=r_vent+8*sin(i*ang); //ubicacion de y
      glColor3f(0.0,0.0,1.0);//color blanco
      glVertex2f(x+20.5f,y+162.f);//coordenadas para los puntos de la circunferencia
     }
   glEnd();//fin funcion 
}
void linea(void)//FUNCION PARA LINEAS
{ 
    glBegin(GL_LINES);//comenzando GL_LINES
    //lineas verticales triangulo del techo (torre central)
    glColor3f(1.0,0.0,0.0);//color
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea 
    glVertex2f(-50.0f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea 
    glVertex2f(-40.0f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea
    glVertex2f(-25.0f,180);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea
    glVertex2f(-10.0f,180);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,180);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea
    glVertex2f(10.0f,180);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea
    glVertex2f(25.0f,180);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea
    glVertex2f(40.0f,180);//coordenadas para los puntos de la linea
    glVertex2f(0.0f,230.0f);//coordenadas para los puntos de la linea
    glVertex2f(50.0f,180);//coordenadas para los puntos de la linea
    //lineas horizontales triangulo del techo (torre central)
    glVertex2f(-10.0f,220.0f);//coordenadas para los puntos de la linea 
    glVertex2f(10.0f,220.0f);//coordenadas para los puntos de la linea
    glVertex2f(-20.0f,210.0f);//coordenadas para los puntos de la linea 
    glVertex2f(20.0f,210.0f);//coordenadas para los puntos de la linea
    glVertex2f(-30.0f,200.0f);//coordenadas para los puntos de la linea 
    glVertex2f(30.0f,200.0f);//coordenadas para los puntos de la linea
    glVertex2f(-40.0f,190.0f);//coordenadas para los puntos de la linea 
    glVertex2f(40.0f,190.0f);//coordenadas para los puntos de la linea
    glVertex2f(-50.0f,180.0f);//coordenadas para los puntos de la linea 
    glVertex2f(50.0f,180.0f);//coordenadas para los puntos de la linea
    //lineas verticales triangulo del techo (torre derecha)
    glVertex2f(102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(75.0f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(88.75f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(102.5f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(116.25f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(130.0f,130.0f);//coordenadas para los puntos de la linea
    //lineas horizontales triangulo del techo (torre derecha)
    glVertex2f(75.0f,130.0f);;//coordenadas para los puntos de la linea
    glVertex2f(130.0f,130.0f);;//coordenadas para los puntos de la linea
    glVertex2f(80.5f,140.0f);;//coordenadas para los puntos de la linea
    glVertex2f(124.5f,140.0f);;//coordenadas para los puntos de la linea
    glVertex2f(85.5f,150.0f);;//coordenadas para los puntos de la linea
    glVertex2f(119.0f,150.0f);;//coordenadas para los puntos de la linea
    glVertex2f(91.5f,160.0f);;//coordenadas para los puntos de la linea
    glVertex2f(113.5f,160.0f);;//coordenadas para los puntos de la linea
    glVertex2f(97.0f,170.0f);;//coordenadas para los puntos de la linea
    glVertex2f(108.0f,170.0f);;//coordenadas para los puntos de la linea
    //lineas verticales triangulo del techo (torre izquierda)
    glVertex2f(-102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(-75.0f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(-102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(-88.75f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(-102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(-102.5f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(-102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(-116.25f,130.0f);//coordenadas para los puntos de la linea
    glVertex2f(-102.5f,180.0f);//coordenadas para los puntos de la linea
    glVertex2f(-130.0f,130.0f);//coordenadas para los puntos de la linea
    //lineas horizontales triangulo del techo (torre izquierda)
    glVertex2f(-75.0f,130.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-130.0f,130.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-80.5f,140.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-124.5f,140.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-86.0f,150.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-119.0f,150.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-91.5f,160.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-113.5f,160.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-97.0f,170.0f);;//coordenadas para los puntos de la linea
    glVertex2f(-108.0f,170.0f);;//coordenadas para los puntos de la linea
    //lineas para la torre central(borde)
    glColor3f(1.0,0.0,0.0);//color
    glVertex2f(-40.0f,75.0f);//punto en (-x,y) coordenada de un punto linea izquierda
    glVertex2f(-40.0f,180.0f);//punto en (-x,y)coordenada de un punto linea izquierda
    glVertex2f(40.0f,75.0f);//punto en (x,y) coordenada de un punto linea derecha
    glVertex2f(40.0f,180.0f);//punto en (x,y)coordenada de un punto linea derecha
    //lineas para la torre derecha(borde)
    glColor3f(1.0,0.0,0.0);//color
    glVertex2f(-120.0f,-85.0f);//punto en (-x,-y) coordenada de un punto linea izquierda
    glVertex2f(-120.0f,130.0f);//punto en (-x,y)coordenada de un punto linea izquierda
    glVertex2f(-85.0f,-85.0f);//punto en (-x,-y) coordenada de un punto linea derecha
    glVertex2f(-85.0f,130.0f);//punto en (-x,y)coordenada de un punto linea derecha
    //lineas para la torre derecha(borde)
    glColor3f(1.0,0.0,0.0);//color
    glVertex2f(120.0f,-85.0f);//punto en (x,-y) coordenada de un punto linea derecha
    glVertex2f(120.0f,130.0f);//punto en (x,y)coordenada de un punto linea derecha
    glVertex2f(85.0f,-85.0f);//punto en (x,-y) coordenada de un punto linea izquierda 
    glVertex2f(85.0f,130.0f);//punto en (x,y)coordenada de un punto linea iquierda
    
    //linea del inferior queva desde torre derecha a torre isquierda
    //lineas para la torre derecha(borde)
    glColor3f(1.0,0.0,0.0);//color
    glVertex2f(-120.0f,-85.0f);//punto en (-x,y) coordenada de un punto linea derecha
    glVertex2f(120.0f,-85.0f);//punto en (x,-y)coordenada de un punto linea derecha
    glEnd();//fin funcion */
}
void rectangulos(void)//FUNCION PARA LOS CUADROS
{
    glBegin(GL_QUADS);//primitiva para  los rectangulos
    //Fondo
    glColor3f(1.0,1.0,0.0);//color 
    glVertex2f(140.0f,300.0f);//punto de en (x,y) V1
    glVertex2f(140.0f,-100.0f);//punto en (x,-y)  V2 
    glVertex2f(-140.0f,-100.0f);//punto en (-x,-y) V3
    glVertex2f(-140.0f,300.0f);//punto en (-x,y) V4
    //cuadro principal del castillo
    glColor3f(0.0,0.0,1.0);//color 
    glVertex2f(85.0f,75.0f);//punto de en (x,y) V1
    glVertex2f(85.0f,-85.0f);//punto en (x,-y)  V2 
    glVertex2f(-85.0f,-85.0f);//punto en (-x,-y) V3
    glVertex2f(-85.0f,75.0f);//punto en (-x,y) V4
    //Torres laterales
    //Torre derecha  
    glColor3f(1.0,1.0,1.0);//dando color 
    glVertex2f(85.0f,130.0f);//punto de en (x,y) V1
    glVertex2f(120.0f,130.0f);//punto en (x,y)  V2 
    glVertex2f(120.0f,-85.0f);//punto en (x,-y) V3
    glVertex2f(85.0f,-85.0f);//punto en (x,-y) V4
    //Torre Isquierda
    glColor3f(1.0,1.0,1.0);//dando color 
    glVertex2f(-85.0f,130.0f);//punto de en (-x,y) V1
    glVertex2f(-120.0f,130.0f);//punto en (-x,y)  V2 
    glVertex2f(-120.0f,-85.0f);//punto en (-x,-y) V3
    glVertex2f(-85.0f,-85.0f);//punto en (-x,-y) V4
    //Torre Central
    glVertex2f(40.0f,180.0f);//punto de en (x,y) V1
    glVertex2f(40.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(-40.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-40.0f,180.0f);//punto en (-x,y) V4
    //muro de castillo rectangulos de arriba
    glColor3f(0.0,0.0,1.0);
    glVertex2f(3.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(3.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(-3.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-3.0f,90.0f);//punto en (-x,y) V4
    glVertex2f(9.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(9.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(15.0f,75.0f);//punto en (x,y) V3
    glVertex2f(15.0f,90.0f);//punto en (x,y) V4
    glVertex2f(21.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(21.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(27.0f,75.0f);//punto en (x,y) V3
    glVertex2f(27.0f,90.0f);//punto en (x,y) V4
    glVertex2f(32.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(32.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(38.0f,75.0f);//punto en (x,y) V3
    glVertex2f(38.0f,90.0f);//punto en (x,y) V4
    glVertex2f(44.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(44.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(50.0f,75.0f);//punto en (x,y) V3
    glVertex2f(50.0f,90.0f);//punto en (x,y) V4
    glVertex2f(56.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(56.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(62.0f,75.0f);//punto en (x,y) V3
    glVertex2f(62.0f,90.0f);//punto en (x,y) V4
    glVertex2f(68.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(68.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(74.0f,75.0f);//punto en (x,y) V3
    glVertex2f(74.0f,90.0f);//punto en (x,y) V4
    glVertex2f(80.0f,90.0f);//punto de en (x,y) V1  
    glVertex2f(80.0f,75.0f);//punto en (x,y)  V2 
    glVertex2f(84.8f,75.0f);//punto en (x,y) V3
    glVertex2f(84.8f,90.0f);//punto en (x,y) V4
    //izquierda cuadros
    glVertex2f(-9.0f,90.0f);//punto de en (-x,y) V1
    glVertex2f(-9.0f,75.0f);//punto en (-x,y)  V2 
    glVertex2f(-15.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-15.0f,90.0f);//punto en (-x,y) V4
    glVertex2f(-21.0f,90.0f);//punto de en (-x,y) V1
    glVertex2f(-21.0f,75.0f);//punto en (-x,y)  V2 
    glVertex2f(-27.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-27.0f,90.0f);//punto en (-x,y) V4
    glVertex2f(-32.0f,90.0f);//punto de en (-x,y) V1
    glVertex2f(-32.0f,75.0f);//punto en (-x,y)  V2 
    glVertex2f(-38.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-38.0f,90.0f);//punto en (-x,y) V4
    glVertex2f(-44.0f,90.0f);//punto de en (-x,y) V1
    glVertex2f(-44.0f,75.0f);//punto en (-x,y)  V2 
    glVertex2f(-50.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-50.0f,90.0f);//punto en (-x,y) V4
    glVertex2f(-56.0f,90.0f);//punto de en (-x,y) V1
    glVertex2f(-56.0f,75.0f);//punto en (-x,y)  V2 
    glVertex2f(-62.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-62.0f,90.0f);//punto en (-x,y) V4
    glVertex2f(-68.0f,90.0f);//punto de en (-x,y) V1
    glVertex2f(-68.0f,75.0f);//punto en (-x,y)  V2 
    glVertex2f(-74.0f,75.0f);//punto en (-x,y) V3
    glVertex2f(-74.0f,90.0f);//punto en (-x,y) V4
    glVertex2f(-80.0f,90.0f);//punto de en (-x,y) V1  
    glVertex2f(-80.0f,75.0f);//punto en (-x,y)  V2 
    glVertex2f(-84.8f,75.0f);//punto en (-x,y) V3
    glVertex2f(-84.8f,90.0f);//punto en (-x,y) V4
    glEnd();//fin funcion 
}
void triangulos(void)//FUNCION PARA TRIANGULOS
{
    glBegin(GL_TRIANGLES);//primitiva para puntos
    //TRIANGULO PARA EL TECHO DE LA TORRE PRINCIPAL
    glColor3f(0.0,1.0,0.0);//color 
    glVertex2f(0.0f,230.0f);//punto en (x,y)
    glVertex2f(50.0f,180.0f);//punto en (x,y)
    glVertex2f(-50.0f,180.0f);//punto en (-x,y)
    //TRIANGULO PARA EL TECHO DE LA TORRE DERECHA
    glColor3f(0.0,1.0,0.0);//dando color 
    glVertex2f(102.5f,180.0f);//punto de en (x,y) V1
    glVertex2f(75.0f,130.0f);//punto en (x,y)  V2 
    glVertex2f(130.0f,130.0f);//punto en (x,y) V3
    //TRIANGULO PARA EL TECHO DE LA TORRE IZQUIERDA
    glColor3f(0.0,1.0,0.0);//dando color 
    glVertex2f(-102.5f,180.0f);//punto de en (x,y) V1
    glVertex2f(-75.0f,130.0f);//punto en (-x,y)  V2 
    glVertex2f(-130.0f,130.0f);//punto en (-x,y) V3
    glEnd();//fin funcion 
}
void barandal(void)
{
    //Torre Central  barandal
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(50.0f,135.0f);//punto de en (x,y) V1
    glVertex2f(40.0f,105.0f);//punto en (x,y)  V2 
    glVertex2f(-40.0f,105.0f);//punto en (-x,y) V3
    glVertex2f(-50.0f,135.0f);//punto en (-x,y) V4
    glColor3f(0.0,1.0,0.0);
    glVertex2f(44.0f,116.0f);//punto de en (x,y) V1
    glVertex2f(40.0f,105.0f);//punto en (x,y)  V2 
    glVertex2f(-40.0f,105.0f);//punto en (-x,y) V3
    glVertex2f(-44.0f,116.0f);//punto en (-x,y) V4
    //barrandal torre derecha
    glColor3f(0.0,1.0,0.0);
    glVertex2f(70.0f,95.0f);//punto de en (x,y) V1
    glVertex2f(135.0f,95.0f);//punto en (x,y)  V2 
    glVertex2f(120.0f,85.0f);//punto en (x,y) V3
    glVertex2f(85.0f,85.0f);//punto en (x,y) V4
    glColor3f(0.0,1.0,1.0);
    glVertex2f(77.0f,90.0f);//punto de en (x,y) V1
    glVertex2f(128.0f,90.0f);//punto en (x,y)  V2 
    glVertex2f(120.0f,85.0f);//punto en (x,-y) V3
    glVertex2f(85.0f,85.0f);//punto en (x,-y) V4
    //barandal torre izquierda
    glColor3f(0.0,1.0,0.0);
    glVertex2f(-70.0f,95.0f);//punto de en (-x,y) V1
    glVertex2f(-135.0f,95.0f);//punto en (-x,y)  V2 
    glVertex2f(-120.0f,85.0f);//punto en (-x,-y) V3
    glVertex2f(-85.0f,85.0f);//punto en (-x,-y) V4
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-77.0f,90.0f);//punto de en (-x,y) V1
    glVertex2f(-128.0f,90.0f);//punto en (-x,y)  V2 
    glVertex2f(-120.0f,85.0f);//punto en (-x,y) V3
    glVertex2f(-85.0f,85.0f);//punto en (x-,y) V4
    glEnd();//fin funcion
}
void rectangulostorre(void)
{
	//Torre Central  barandal rectangulos
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(6.0f,155.0f);//punto de en (x,y) V1
    glVertex2f(6.0f,135.0f);//punto en (x,y)  V2 
    glVertex2f(-6.0f,135.0f);//punto en (-x,y) V3
    glVertex2f(-6.0f,155.0f);//punto en (-x,y) V4
    glVertex2f(50.0f,155.0f);//punto de en (x,y) V1
    glVertex2f(50.0f,135.0f);//punto en (x,y)  V2 
    glVertex2f(38.0f,135.0f);//punto en (x,y) V3
    glVertex2f(38.0f,155.0f);//punto en (x,y) V4
    glVertex2f(28.0f,155.0f);//punto de en (x,y) V1
    glVertex2f(28.0f,135.0f);//punto en (x,y)  V2 
    glVertex2f(16.0f,135.0f);//punto en (x,y) V3
    glVertex2f(16.0f,155.0f);//punto en (x,y) V4
    glVertex2f(-50.0f,155.0f);//punto de en (-x,y) V1
    glVertex2f(-50.0f,135.0f);//punto en (-x,y)  V2 
    glVertex2f(-38.0f,135.0f);//punto en (-x,y) V3
    glVertex2f(-38.0f,155.0f);//punto en (-x,y) V4
    glVertex2f(-28.0f,155.0f);//punto de en (-x,y) V1
    glVertex2f(-28.0f,135.0f);//punto en (-x,y)  V2 
    glVertex2f(-16.0f,135.0f);//punto en (-x,y) V3
    glVertex2f(-16.0f,155.0f);//punto en (-x,y) V4
    //torre derecha barandal rectangulos
    glColor3f(0.0,1.0,0.0);
    glVertex2f(135.0f,107.0f);//punto de en (x,y) V1
    glVertex2f(135.0f,95.0f);//punto en (x,y)  V2 
    glVertex2f(129.0f,95.0f);//punto en (x,y) V3
    glVertex2f(129.0f,107.0f);//punto en (x,y) V4
    glVertex2f(70.0f,107.0f);//punto de en (x,y) V1
    glVertex2f(70.0f,95.0f);//punto en (x,y)  V2 
    glVertex2f(76.0f,95.0f);//punto en (x,y) V3
    glVertex2f(76.0f,107.0f);//punto en (x,y) V4
    glVertex2f(82.0f,107.0f);//punto de en (x,y) V1
    glVertex2f(82.0f,95.0f);//punto en (x,y)  V2 
    glVertex2f(88.0f,95.0f);//punto en (x,y) V3
    glVertex2f(88.0f,107.0f);//punto en (x,y) V4
    glVertex2f(94.0f,107.0f);//punto de en (x,y) V1
    glVertex2f(94.0f,95.0f);//punto en (x,y)  V2 
    glVertex2f(100.0f,95.0f);//punto en (x,y) V3
    glVertex2f(100.0f,107.0f);//punto en (x,y) V4
    glVertex2f(106.0f,107.0f);//punto de en (x,y) V1
    glVertex2f(106.0f,95.0f);//punto en (x,y)  V2 
    glVertex2f(112.0f,95.0f);//punto en (x,y) V3
    glVertex2f(112.0f,107.0f);//punto en (x,y) V4
    glVertex2f(118.0f,107.0f);//punto de en (x,y) V1
    glVertex2f(118.0f,95.0f);//punto en (x,y)  V2 
    glVertex2f(124.0f,95.0f);//punto en (x,y) V3
    glVertex2f(124.0f,107.0f);//punto en (x,y) V4
     //torre izquierda barandal rectangulos
    glColor3f(0.0,1.0,0.0);
    glVertex2f(-135.0f,107.0f);//punto de en (-x,y) V1
    glVertex2f(-135.0f,95.0f);//punto en (-x,y)  V2 
    glVertex2f(-129.0f,95.0f);//punto en (-x,y) V3
    glVertex2f(-129.0f,107.0f);//punto en (-x,y) V4
    glVertex2f(-70.0f,107.0f);//punto de en (-x,y) V1
    glVertex2f(-70.0f,95.0f);//punto en (-x,y)  V2 
    glVertex2f(-76.0f,95.0f);//punto en (-x,y) V3
    glVertex2f(-76.0f,107.0f);//punto en (-x,y) V4
    glVertex2f(-82.0f,107.0f);//punto de en (-x,y) V1
    glVertex2f(-82.0f,95.0f);//punto en (-x,y)  V2 
    glVertex2f(-88.0f,95.0f);//punto en (-x,y) V3
    glVertex2f(-88.0f,107.0f);//punto en (-x,y) V4
    glVertex2f(-94.0f,107.0f);//punto de en (-x,y) V1
    glVertex2f(-94.0f,95.0f);//punto en (-x,y)  V2 
    glVertex2f(-100.0f,95.0f);//punto en (-x,y) V3
    glVertex2f(-100.0f,107.0f);//punto en (-x,y) V4
    glVertex2f(-106.0f,107.0f);//punto de en (-x,y) V1
    glVertex2f(-106.0f,95.0f);//punto en (-x,y)  V2 
    glVertex2f(-112.0f,95.0f);//punto en (-x,y) V3
    glVertex2f(-112.0f,107.0f);//punto en (-x,y) V4
    glVertex2f(-118.0f,107.0f);//punto de en (-x,y) V1
    glVertex2f(-118.0f,95.0f);//punto en (-x,y)  V2 
    glVertex2f(-124.0f,95.0f);//punto en (-x,y) V3
    glVertex2f(-124.0f,107.0f);//punto en (-x,y) V4
    //PUERTA CASTILLO
    glColor3f(0.0,1.0,0.0);
    glVertex2f(26.0f,0.0f);//punto de en (x,y) V1
    glVertex2f(26.0f,-84.8f);//punto en (x,-y)  V2 
    glVertex2f(-26.0f,-84.8f);//punto en (-x,-y) V3
    glVertex2f(-26.0f,0.0f);//punto en (-x,y) V4
    //cuadros derecha
    glColor3f(0.0,0.0,1.0);
    glVertex2f(2.0f,-55.0f);//punto de en (x,-y) V1
    glVertex2f(2.0f,-80.0f);//punto en (x,-y)  V2 
    glVertex2f(21.0f,-80.0f);//punto en (x,-y) V3
    glVertex2f(21.0f,-55.0f);//punto en (x,-y) V4
    glVertex2f(2.0f,-25.0f);//punto de en (x,-y) V1
    glVertex2f(2.0f,-50.0f);//punto en (x,-y)  V2 
    glVertex2f(21.0f,-50.0f);//punto en (x,-y) V3
    glVertex2f(21.0f,-25.0f);//punto en (x,-y) V4
    glVertex2f(2.0f,5.0f);//punto de en (x,y) V1
    glVertex2f(2.0f,-20.0f);//punto en (x,-y)  V2 
    glVertex2f(21.0f,-20.0f);//punto en (x,-y) V3
    glVertex2f(21.0f,5.0f);//punto en (x,y) V4
    //cuadros izquierda
     glColor3f(0.0,0.0,1.0);
    glVertex2f(-2.0f,-55.0f);//punto de en (-x,-y) V1
    glVertex2f(-2.0f,-80.0f);//punto en (-x,-y)  V2 
    glVertex2f(-21.0f,-80.0f);//punto en (-x,-y) V3
    glVertex2f(-21.0f,-55.0f);//punto en (-x,-y) V4
    glVertex2f(-2.0f,-25.0f);//punto de en (-x,-y) V1
    glVertex2f(-2.0f,-50.0f);//punto en (-x,-y)  V2 
    glVertex2f(-21.0f,-50.0f);//punto en (-x,-y) V3
    glVertex2f(-21.0f,-25.0f);//punto en (-x,-y) V4
    glVertex2f(-2.0f,5.0f);//punto de en (-x,y) V1
    glVertex2f(-2.0f,-20.0f);//punto en (-x,-y)  V2 
    glVertex2f(-21.0f,-20.0f);//punto en (-x,-y) V3
    glVertex2f(-21.0f,5.0f);//punto en (-x,y) V4
    glEnd();//fin funcion */
}
void lineasban(void)
{
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(0.0f,236.0f);//bandera torre central linea coordenada
    glVertex2f(0.0f,256.0f);//bandera torre central linea coordenada
    glVertex2f(-102.5f,186.0f);//bandera torre izquierda linea coordenada
    glVertex2f(-102.5f,206.0f);//bandera torre izquierda linea coordenada
    glVertex2f(102.5f,186.0f);//bandera torre derecha  linea coordenada
    glVertex2f(102.5f,206.0f);//bandera torre derecha linea coordenada
    glEnd();//fin funcion */
}
void banderas(void)
{
	glBegin(GL_TRIANGLES);
    //BANDERA CENTRAL
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.0f,256.0f);
    glVertex2f(0.0f,246.0f);
    glVertex2f(20.0f,251.0f);
    //BANDERA IZQUIERDA
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-102.5f,206.0f);
    glVertex2f(-102.5f,196.0f);
    glVertex2f(-82.0f,201.0f);
    //BANDERA DERECHA
    glColor3f(0.0,0.0,1.0);
    glVertex2f(102.5f,206.0f);
    glVertex2f(102.5f,196.0f);
    glVertex2f(122.0f,201.0f);
    glEnd();//fin funcion */
}
void arco(void)
{
  glBegin(GL_POLYGON);//primitiva para puntos
  glPointSize(4);//tamaño de los puntos
  float r=26; //se esta definiendo un radio 
  float ang=3.1416/180; 
  for (float i=0; i<180; i+=0.1)//creando el for para aplicar la formula de la circunferencia
    {
	  //circunferencia para la punta de la torre derecha	
      double x=r*cos(i*ang); //ubicacion de x
      double y=r*sin(i*ang); //ubicacion de y
      glColor3f(0.0,1.0,0.0);//color blanco
      glVertex2f(x,y);//coordenadas para los puntos de la circunferencia
     }
 glEnd();    
}
void display(void)//FUNCION DISPLAY
{
    glClear(GL_COLOR_BUFFER_BIT);//limpiando la pantalla
    //glPointSize(2);//tamaño de los puntos para la linea y circulos
    rectangulos();//llamando a rectangulos
    triangulos();//llamando a triangulos
    linea();//llamando a linea
    circulo();//llamando a  circulo
    barandal();//llamando barandal
    arco();
    rectangulostorre();//llamando rectangulostorre
    lineasban();//llamando lineasbanderas
    banderas();//llamando a banderas
    glEnd();//fin funcion 
    glFlush();
}
void init (void)//FUNCION INIT
{
    glMatrixMode(GL_PROJECTION);//MATRIX DE PROYECCION
    glLoadIdentity();//cargando matrix identidad
    glOrtho(-140.0, 140.0, -100.0, 300.0, -135.0, 135.0);//vista ortogonal
}   //    izquierda , derecha, abajo, arriba  
int main(int argc, char** argv)//funcion principal main
{
    glutInit(&argc, argv);//inicializo lo que es el OpenGl
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);// Definimos tamaño de la ventana 
    glutInitWindowPosition (550,250);// Se crea lo que es la ventana y añadiremos su titulo el nombre que se observara en su barra de titulo.
    glutCreateWindow ("EJERCICIO3_TAREA2_DE_PRIMITIVAS");
    init ();//se inicializa el sistema
    glutDisplayFunc(display);//se llama a la funcion display 
    glutMainLoop();//se hace el enlace entre la funcion y el programa principal
    return 0;//retornando al sistema
}

