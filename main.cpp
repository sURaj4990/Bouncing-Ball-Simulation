#include <GL/glut.h>
#include <math.h>

double cx = 500;
double cy = 500;
double dx = 0.1;
double dy = 0.0;
int simulation = 0;
int flag = 0;


//to display using string input from screen
void drawstring(float x,float y,float z,char *string)
{
    char *c;
    glRasterPos3f(x,y,z);
    for(c=string;*c!='\0';c++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,*c);
    }
}


//front screen function
void screen()
{
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5,1.0,0.0);
	drawstring(370.0,644.0,0.0,"CGV Lab. Mini Project");
	drawstring(350.0,600.0,0.0,"on ''BOUNCING BALL''");
	glColor3f(0.0,0.0,0.0);
	drawstring(400,530,0.0,"By: 3 IDIOTS");
	drawstring(280,490,0.0,"Name: Sushil Patil    USN: 2HN20CS021");
	drawstring(270,450,0.0,"Name: Sachin Badiger  USN: 2HN20CS030");
	drawstring(280,410,0.0,"Name: Suraj Patil     USN: 2HN20CS050");
	glColor3f(0.5,0.0,0.8);
	drawstring(360,300,0.0,"Under The Guidance of:");
	drawstring(375,260,0.0,"Prof: Prasanna Patil");
	glColor3f(0.0,1.0,1.0);
	drawstring(300,200,0.0,"Department of Computer Science And");
	drawstring(300,160,0.0,"Engineering Academic Year:2014-15");
	glColor3f(0.0,0.0,0.0);
	drawstring(380,100,0.0,"Click 's' to continue");
    glFlush();
}


//circle drawing function
void DrawFilledCircle(double cx, double cy, float r, int num_segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int ii = 0; ii <= num_segments; ii++) {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void timerMercury(int value) {
    if (simulation == 1) {
        dy -= 0.038;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.87;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerMercury, 0);
    }
}

void timerVenus(int value) {
    if (simulation == 2) {
        dy -= 0.09;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.7;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerVenus, 0);
    }
}

void timerEarth(int value) {
    if (simulation == 3) {
        dy -= 0.1;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.6;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerEarth, 0);
    }
}

void timerMars(int value) {
    if (simulation == 4) {
        dy -= 0.038;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.87;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerMars, 0);
    }
}

void timerJupiter(int value) {
    if (simulation == 5) {
        dy -= 0.253;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.3;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerJupiter, 0);
    }
}

void timerSaturn(int value) {
    if (simulation == 6) {
        dy -= 0.107;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.6;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerSaturn, 0);
    }
}

void timerUranus(int value) {
    if (simulation == 7) {
        dy -= 0.089;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.8;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerUranus, 0);
    }
}

void timerNeptune(int value) {
    if (simulation == 8) {
        dy -= 0.114;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.59;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerNeptune, 0);
    }
}

void timerMoon(int value) {
    if (simulation == 9) {
        dy -= 0.008;
        cx += dx;
        cy += dy;
        if (cy < 150) {
            cy = 150;
            dy = -dy * 0.97;
        }
        if (cx < 50 || cx > 950) {
            dx = -dx;
        }
        glutPostRedisplay();
        glutTimerFunc(10, timerMoon, 0);
    }
}


//initialization
void reset()
{
    cx = 200;
    cy = 600;
    dx = 0.5;
    dy = 0.0;
}

void mercury()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerMercury, 0);
}

void venus()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerVenus, 0);
}

void earth()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerEarth, 0);
}

void mars()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerMars, 0);
}

void jupiter()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerJupiter, 0);
}

void saturn()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerSaturn, 0);
}

void uranus()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerUranus, 0);
}

void neptune()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerNeptune, 0);
}


void moon()
{
    glClear(GL_COLOR_BUFFER_BIT);
    reset();
    glutTimerFunc(10, timerMoon, 0);
}


void menu(int item) {
    switch (item) {
        case 1: simulation = 1;
                mercury();
                break;

        case 2: simulation = 2;
                venus();
                break;

        case 3: simulation = 3;
                earth();
                break;

        case 4: simulation = 4;
                mars();
                break;

        case 5: simulation = 5;
                jupiter();
                break;

        case 6: simulation = 6;
                saturn();
                break;

        case 7: simulation = 7;
                uranus();
                break;

        case 8: simulation = 8;
                neptune();
                break;

        case 9: simulation = 9;
                moon();
                break;

        case 10:
                exit(0);
                break;


        default:
                break;
    }
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 's':
        case 'S': flag = 1;
                  glutPostRedisplay();
                  break;

        case 'e':
        case 'E': exit(0); break;

        case 'i':
        case 'I': glutPostRedisplay();
                  simulation = 0; break;

        case '1': simulation = 1;
                  mercury();
                  break;

        case '2': simulation = 2;
                  venus();
                  break;

        case '3': simulation = 3;
                  earth();
                  break;

        case '4': simulation = 4;
                  mars();
                  break;

        case '5': simulation = 5;
                  jupiter();
                  break;

        case '6': simulation = 6;
                  saturn();
                  break;

        case '7': simulation = 7;
                  uranus();
                  break;

        case '8': simulation = 8;
                  neptune();
                  break;

        case '9': simulation = 9;
                  moon();
                  break;

        default:
                 break;
    }
}

void planetSurface()
{
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 100.0);
        glVertex2f(1000.0, 100.0);
        glVertex2f(1000.0, 0.0);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    if(flag == 0)
    {
        glClearColor(0.9,0.456,0.5,1.0);
        screen();
    }
    if(flag == 1)
    {
        glutPostRedisplay();
        if(simulation == 0)
        {
            glClearColor(0.8, 0.7, 0.9, 1.0);
            cx = 200; cy = 350;
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 120, 1000);
            glColor3f(0.0, 0.0, 0.0);
            drawstring(390.0, 420.0, 0.0, "WELCOME TO GRAVITY SIMULATION");
            drawstring(390.0, 360.0, 0.0, "1. Click on right mouse button to view menu");
            drawstring(390.0, 330.0, 0.0, "2. Select the planet to see the simulation");
            drawstring(390.0, 300.0, 0.0, "3. Press 'i' to view instruction anytime");
            drawstring(390.0, 270.0, 0.0, "4. You can simulate any planet using the numbers to");
            drawstring(390.0, 240.0, 0.0, "5. Press 'e' to exit from simulation");
        }

        if(simulation == 1)
        {
            glClearColor(32/255.0, 32/255.0, 32/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(1.0,1.0,1.0);
            drawstring(850.0, 650.0, 0.0,"Mercury");
            glColor3f(196/255.0, 164/255.0, 132/255.0);
            planetSurface();
        }

        if(simulation == 2)
        {
            glClearColor(255/255.0, 255/255.0, 224/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(0.0,0.0,0.0);
            drawstring(850.0, 650.0, 0.0,"Venus");
            glColor3f(1.0, 0.6, 0.3);
            planetSurface();
        }

        if(simulation == 3)
        {
            glClearColor(135/255.0, 206/255.0, 235/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(0.0,0.0,0.0);
            drawstring(850.0, 650.0, 0.0,"Earth");
            glColor3f(0.0, 1.0, 0.5);
            planetSurface();
        }

        if(simulation == 4)
        {
            glClearColor(255/255.0, 140/255.0, 0/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(0.0,0.0,0.0);
            drawstring(850.0, 650.0, 0.0,"Mars");
            glColor3f(150/255.0, 75/255.0, 0.0);
            planetSurface();
        }

        if(simulation == 5)
        {
            glClearColor(210/255.0, 180/255.0, 140/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(0.0,0.0,1.0);
            drawstring(850.0, 650.0, 0.0,"Jupiter");
            glColor3f(231/255.0, 195/255.0, 100/255.0);
            planetSurface();
        }

        if(simulation == 6)
        {
            glClearColor(255/255.0, 215/255.0, 0/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(0.0,0.0,1.0);
            drawstring(850.0, 650.0, 0.0,"Saturn");
            glColor3f(150/255.0, 105/255.0, 25/255.0);
            planetSurface();
        }

        if(simulation == 7)
        {
            glClearColor(175/255.0, 216/255.0, 230/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(0.0,0.0,0.0);
            drawstring(850.0, 650.0, 0.0,"Uranus");
            glColor3f(8/255.0, 143/255.0, 143/255.0);
            planetSurface();
        }

        if(simulation == 8)
        {
            glClearColor(173/255.0, 216/255.0, 230/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(0.0,0.0,1.0);
            drawstring(850.0, 650.0, 0.0,"Neptune");
            glColor3f(173/255.0, 195/255.0, 230/255.0);
            planetSurface();
        }

        if(simulation == 9)
        {
            glClearColor(12/255.0, 13/255.0, 14/255.0, 1.0);
            glColor3f(1.0, 0.0, 0.0);
            DrawFilledCircle(cx, cy, 50, 4000);
            glColor3f(1.0,1.0,1.0);
            drawstring(850.0, 650.0, 0.0,"Moon");
            glColor3f(0.5, 0.5, 0.5);
            planetSurface();
        }
    }
    glFlush();
}

void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1000, 0, 700);
	glClear(GL_COLOR_BUFFER_BIT);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 700);
    glutInitWindowPosition(200, 10);
    glutCreateWindow("Circle");
    glutDisplayFunc(display);

    int sub_menu = glutCreateMenu(menu);
    glutAddMenuEntry("Mercury", 1);
    glutAddMenuEntry("Venus", 2);
    glutAddMenuEntry("Earth",3);
    glutAddMenuEntry("Mars",4);
    glutAddMenuEntry("Jupiter",5);
    glutAddMenuEntry("Saturn", 6);
    glutAddMenuEntry("Uranus", 7);
    glutAddMenuEntry("Neptune", 8);
    glutAddMenuEntry("Moon", 9);

    int mainmenu = glutCreateMenu(menu);
    glutAddSubMenu("Planets",sub_menu);
    glutAddMenuEntry("Exit", 10);

    glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutKeyboardFunc(keyboard);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    init();
    glutMainLoop();
    return 0;
}
