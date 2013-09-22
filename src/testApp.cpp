#include "testApp.h" 
#include "pawn.h"
#include "otherpieces.h"

float chessboardX[8];
float chessboardY[8];
ofVec2f chessboard[8][8];
float posX = 0;
float posY = 0;
int posZ = 0;
float width = 700/8;
float height = 750/9;

//chesspiece
int triangle_x1 = width;
int triangle_y1 = 0;
int triangle_x2 = width+width;
int triangle_y2 = height;
int triangle_x3 = width;
int triangle_y3 = 0;

int triangle_x4 = width*6;
int triangle_y4 = 0;
int triangle_x5 = width*7;
int triangle_y5 = height;
int triangle_x6 = width*7;
int triangle_y6 = 0;

int movementX = width;
int movementY = height;

int keypress;
float pressedtime;

//--------------------------------------------------------------  
void testApp::setup(){ 
    
    keypress = 0;
    
    for (int i = 0; i < 8; i++) {
        chessboardX[i] = posX;
        posX += width;
    }
    
    for (int i = 0; i < 8; i++) {
        chessboardY[i] = posY;
        posY += height;
    }
    
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            chessboard[row][col] = ofVec2f(chessboardX[row],chessboardY[col]);
        }
    }
}  

//--------------------------------------------------------------  
void testApp::update(){  
    if ( (int)(ofGetElapsedTimef() - pressedtime) == 1 ) {
        keypress = 0;
    }
}  

//--------------------------------------------------------------  
void testApp::draw(){  
    ofBackground(179, 215, 255);
    
    if ( keypress == 0 ) {
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                if ( row % 2 == col % 2 ) {
                    ofSetColor(81, 38, 40);
                    ofFill();
                } else {
                    ofSetColor(161, 94, 95);
                    ofFill();
                }
                ofRect(chessboardX[row], chessboardY[col], posZ, width, height);
            }
        }
        Pawn(triangle_x1, triangle_y1, triangle_x2, triangle_y2, triangle_x3, triangle_y3, 750/9, 1);
        Pawn(triangle_x4, triangle_y4, triangle_x5, triangle_y5, triangle_x6, triangle_y6, 750/9, 0);
    }
    
    if ( keypress == 1 ) {
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                if ( row % 2 == col % 2 ) {
                    ofSetColor(81, 38, 40);
                    ofFill();
                } else {
                    ofEnableAlphaBlending();
                    float color = ofMap(ofRandom(255), 100, sin(ofGetElapsedTimef()), 155, 165);
                    float color1 = ofMap(ofRandom(255), 100, sin(ofGetElapsedTimef()), 85, 95);
                    float color2 = ofMap(ofRandom(255), 100, sin(ofGetElapsedTimef()), 94, 104);
                    ofSetColor(color,color1,color2,10);
                    ofFill();
                    ofDisableAlphaBlending();

                }
            ofRect(chessboardX[row], chessboardY[col], posZ, width, height);
            }
        }
        Pawn(triangle_x1, triangle_y1, triangle_x2, triangle_y2, triangle_x3, triangle_y3, 750/9, 1);
        Pawn(triangle_x4, triangle_y4, triangle_x5, triangle_y5, triangle_x6, triangle_y6, 750/9, 0);
        Others(chessboardX, chessboardY, width, height);
    }
    
    Others(chessboardX, chessboardY, width, height);
}  

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 'd') {
        keypress = 1;
        pressedtime = ofGetElapsedTimef();
    } else if (key == 'a') {
        keypress = 1;
        pressedtime = ofGetElapsedTimef();
    } else if (key == 'w') {
        keypress = 1;
        pressedtime = ofGetElapsedTimef();
    } else if (key == 's') {
        keypress = 1;
        pressedtime = ofGetElapsedTimef();
    }
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}