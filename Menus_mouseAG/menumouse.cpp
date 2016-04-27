/* Carnet:AG12024
 * Alumna:Damaris Abigail Alas Guzman 
 * Algoritmos Graficos
 * tarea de Actividad de Menus y Manejo de Mouse
 * 
 * */
#include <stdio.h>//libreria que nos permite la utilizacion de codigo en C
#include <GL/gl.h>// libreria que no permitira que utilizemos OpenGl
#include <GL/glut.h>////libreria que nos permitira la utilizacion de GL Y GLUT 

//Definimos variables

GLfloat X = 0.0f;//Definicion de variables
GLfloat Y = 0.0f;//Definicion de variables
GLfloat Z = 0.0f;//Definicion de variables
GLint ancho=800;//Definiciendo ancho de ventana
GLint alto=600;//Definiendo alto de ventana
int moving,figura=0,d;//declarando entero moving ,figura y d
int perspectiva = 0;//perspectiva igual a cero

void init(){//declarando funcion init
	glClearColor(1.0,0.0,0.0,0.0);
	//habilitar la prueba de profundiad de z-buffer
	glShadeModel(GL_FLAT);
}


void reshape(int w, int h)//declrando funcion reshape con w ,h
{
    glViewport(0, 0, (GLsizei)w,(GLsizei)h);//tamano de la altura y tamano de lo ancho
    glMatrixMode(GL_PROJECTION);//matriz projection
    //inicia menu

    glLoadIdentity();
    gluPerspective(45.0f, (GLfloat)w/(GLfloat)h, 1.0, 100.0);
    //glFrustum (-1.0, 1.0, -1.0, 1.0, 2.5, 50.0);
  glMatrixMode(GL_MODELVIEW);//matriz de modelado
}

void mouse(int button, int state, int x, int y)// funcion mouse
{
 if (button ==3  ) {//iniciando if para controlar el mouse 
	X=0.0f;
	Y+=0.1f;
	}
	else if(button ==4){ //cuando el boton sea igual a 4 x sera igual a 0.0f y Y negativa igual a 0.1f
		
	X=0.0f;
	Y-=0.1f;
		
		}
if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {// boton izquierdo y bajo
	moving = 1.5;
	X=(GLfloat)x/370;
	Y=-(GLfloat)y/100;
	d=1;
	}
	
	glutPostRedisplay();

}
void movimiento(int x, int y)//funcion movimiento
{	//Captura el movimiento del mouse.
 if (moving) {		
	X=(GLfloat)(ancho - x)/160.0;
	Y=(GLfloat)(alto- y)/160.0;


	glutPostRedisplay();
	}
}//funcion menu con int valor para llamarlo en el switch con los case
void menu(int valor) 
{
    
      switch (valor)
    {
          case 1: //case 1 para la figuras con su respectivo color y figura=1 se mueva cuando presione el mouse
                
                 glColor3f(1.0,0.0,1.0);//asignandole un color
                 glutWireTeapot(0.9);//creando la teterea alambrica
                 figura=1;
                 break;
          case 2://case 2 adentro del case se crea la figura de Torus con otro color
                glColor3f(0.0,1.0,1.0);
                glutWireTorus(0.5, 1.8, 15, 15);  
                figura=2; 
                 break;
          case 3://case 3 se crea la figura del cubo y asignancole un color
               
               glColor3f(1.0,0.5,0.0);
               glutWireCube(2.0f); 
               figura=3;
                break;
          case 4://se crea la figura de la pelota como esfera case 4 con un nuevo color y sus dimensiones de tamano
                 
                 glColor3f(0.5,1.0,0.0);
                 glutWireSphere(1.5,13,13);
                 figura=4;
                 break;
          case 5://case 5 con la figura alambrica de un cono
                 glColor3f(0.5,0.5,0.5);
                 glutWireCone(2.3,2.5,18,18);
                figura=5;
                 break;
          case 6://case 6 creando la figura del octaedro con su respectivo color y el tamano ya viene por defecto
                    glColor3f(1.0,0.0,0.0);
                    glutWireOctahedron();
                    figura=6;
                    break;
          case 7://case 7 con su respectivo color y tamano
                    
                    glColor3f(0.0,0.0,1.0);
                    glutWireIcosahedron();
                    figura=7;
                    break;
          case 8://
                    glColor3f(1.0,1.0,0.0);
                    glutWireTetrahedron();
                    figura=8;
                     break;
          case 9:
        
        exit(0);
    }
   
}
void display()//funcion display
{
   
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//limpiar pantalla
	glColor3f(0.0,0.0,1.0);//color
	glMatrixMode(GL_MODELVIEW);//matriz de modelado
	glLoadIdentity();//cargando la identidad
    
    glTranslatef(X, Y, -5.0f);//usando el translatef
  
      if(d){//creando el if para que el menu muestre la figura y se mueva cuando clic al puntero
		 menu(figura);
		 }
    //dandole valores al glutLookAt
     gluLookAt(0.0, 0.0, 3.0,   //eye (x,y,z)
              0.0, 0.0, 0.0,   //at(x,y,z)
              0.0, 1.0, 0.0);  //up (x,y,z)
    
    glFlush();
    glutSwapBuffers();
}

void menu_opciones(void)//declarando la funcion menu_opciones
{
	//creando el menu para que muestre las figuras
	glutCreateMenu(menu);
	glutAddMenuEntry("TETERA",1);//anadiendo la figura de la tetera
	glutAddMenuEntry("TORUS",2);//anadiendo la figura de Torus
	glutAddMenuEntry("CUBO",3);//anadiendo al menu la figura del Cubo
	glutAddMenuEntry("ESFERA",4);//anadiendo al menu la figura de esfera
	glutAddMenuEntry("CONO",5);//anadiendo al menu la figura del cono
	glutAddMenuEntry("OCTAEDRO",6);//anadiendo al menu la figura del octaedro
	glutAddMenuEntry("ICOSAEDRO",7);//anadiendo al menu la figura del icosaedro
    glutAddMenuEntry("TETAEDRO",8);//anadiendo al menu la figura del tetraedro
    glutAddMenuEntry("Salir",9);//anadiendo al menu la opcion de salir
	glutAttachMenu(GLUT_RIGHT_BUTTON); //eligiendo opciones
	//glutAttachMenu(GLUT_LEFT_BUTTON);	//para que muestre al menu al dar clic al boton izquierdo
	//glutAttachMenu(GLUT_MIDDLE_BUTTON);//para que muestre al menu al dar clic en el boton de enmedio
	
}


int main(int argc, char* argv[])
{

    
    glutInit(&argc,argv);//  Inicializar los parámetros GLUT y de usuario proceso
    glutInitDisplayMode(GLUT_SINGLE);  // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitWindowSize(ancho, alto);//alto y ancho de la ventana
    glutCreateWindow("Menus y Manejo de Mouse");  // Crear ventana
    glutDisplayFunc(display);// Funciones de retrollamada
    glutReshapeFunc(reshape);// Funciones de retrollamada
    menu_opciones();//llamando al menu_opciones
    glutMouseFunc(mouse);//llamando a la funcion mouse con MouseFunc
    glutMainLoop();  // Pasar el control de eventos a GLUT
    return 0;   // Regresar al sistema operativo

}
