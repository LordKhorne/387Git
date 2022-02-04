/****************************************************
 * 2016-2022 Eric Bachmann and Mike Zmuda
 * All Rights Reserved.
 * NOTICE:
 * Dissemination of this information or reproduction
 * of this material is prohibited unless prior written
 * permission is granted.
 ****************************************************/

#include <ctime>
#include <vector>
#include "defs.h"
#include "utilities.h"
#include "framebuffer.h"
#include "colorandmaterials.h"
#include "rasterization.h"
#include "io.h"

FrameBuffer frameBuffer(WINDOW_WIDTH, WINDOW_HEIGHT);

void render() {
	frameBuffer.clearColorBuffer();
	drawLine(frameBuffer, 0, 0, 100, 100, red);
	drawLine(frameBuffer, 100, 100, 200, 100, blue);
	frameBuffer.showColorBuffer();
}

void resize(int width, int height) {
	frameBuffer.setFrameBufferSize(width, height);
	glutPostRedisplay();
}
int main(int argc, char* argv[]) {

	cout << directionInRadians((dvec2(2, 10)), (dvec2(3, 11))) << endl;
	cout << directionInRadians(dvec2(0, -2)) << endl;
	/*cout << approximatelyZero(0.00000001) << endl;
	cout << approximatelyZero(-0.0000001) << endl;
	cout << approximatelyZero(-0.1) << endl;

	cout << approximatelyEqual(-0.1, -0.1) << endl;
	cout << approximatelyEqual(-0.1, -0.10000001) << endl;
	cout << approximatelyEqual(-0.1, -0.2) << endl;

	double one = 1.0;
	double two = 2.0;

	cout << one << endl;
	cout << two << endl;

	swap(one, two);

	cout << one << endl;
	cout << two << endl;

	cout << normalizeDegrees(350.0) << endl;
	cout << normalizeDegrees(720.0) << endl;
	cout << normalizeDegrees(360.0) << endl;
	cout << normalizeDegrees(0.0) << endl;
	cout << normalizeDegrees(-10.0) << endl;
	cout << normalizeDegrees(-360.0) << endl;
	cout << normalizeDegrees(-350.0) << endl;
	cout << normalizeDegrees(-710.0) << endl;
	cout << normalizeRadians(PI) << endl;
	cout << normalizeRadians(0) << endl;
	cout << normalizeRadians(2 * PI) << endl;
	cout << normalizeRadians(1.5 * PI) << endl;
	cout << normalizeRadians(3 * PI) << endl;
	cout << normalizeRadians(1) << endl;
	cout << normalizeRadians(7) << endl;
	cout << normalizeRadians(-1.5 * PI) << endl;

	cout << rad2deg(PI) << endl;
	cout << deg2rad(180) << endl;
	cout << rad2deg(2 * PI) << endl;
	cout << deg2rad(360) << endl;
	cout << rad2deg(-PI) << endl;
	cout << deg2rad(-180) << endl;

	cout << min(3.0, 4.0, 5.0) << endl;
	cout << min(5.0, 4.0, 3.0) << endl;
	cout << min(4.0, 3.0, 5.0) << endl;
	cout << min(5.0, 3.0, 4.0) << endl;
	cout << max(3.0, 4.0, 5.0) << endl;
	cout << max(5.0, 4.0, 3.0) << endl;
	cout << max(4.0, 3.0, 5.0) << endl;
	cout << max(5.0, 3.0, 4.0) << endl;
	cout << distanceFromOrigin(0.0, 0.0) << endl;
	cout << distanceFromOrigin(1.0, 0.0) << endl;
	cout << distanceFromOrigin(0.0, 1.0) << endl;
	cout << distanceFromOrigin(5.0, 5.0) << endl;
	cout << distanceFromOrigin(5.0, -5.0) << endl;
	cout << distanceBetween(5.0, -5.0, 0.0, 0.0) << endl;
	cout << distanceBetween(-5.0, -5.0, -3.0, -3.0) << endl;
	cout << areaOfTriangle(3.0, 4.0, 5.0) << endl;
	cout << areaOfTriangle(-3.0, 4.0, 5.0) << endl;
	cout << areaOfTriangle(3.0, 4.0, 50.0) << endl;
	cout << areaOfTriangle(0.0, 0.0, 3.0, 0.0, 0.0, 4.0) << endl;
	*/


	/*graphicsInit(argc, argv, __FILE__);

	glutDisplayFunc(render);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyboardUtility);
	glutMouseFunc(mouseUtility);

	frameBuffer.setClearColor(paleGreen);

	glutMainLoop();

	return 0;*/
}