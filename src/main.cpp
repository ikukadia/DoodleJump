#include "ofMain.h"
#include "ofApp.h"

int main( ) {
	ofSetupOpenGL(370, 610, OF_WINDOW);
	ofSetWindowTitle("Doodle Jump");
	ofSetFrameRate(12);
	ofRunApp(new ofApp());
}