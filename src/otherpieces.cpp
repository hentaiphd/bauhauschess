//
//  otherpieces.cpp
//  emptyExample
//
//  Created by Nina Freeman on 9/22/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "testApp.h"
#include "otherpieces.h"

Others::Others(float chessboardX[8], float chessboardY[8], float width, float height){
    ofSetColor(224, 185, 109);
    ofFill();
    ofRect(chessboardX[0]+width/2-10, chessboardY[0]+height/2-10, 20, 20);
    ofRect(chessboardX[0]+width/2-10, chessboardY[7]+height/2-10, 20, 20);
    
    ofRect(chessboardX[0]+width/2-15, chessboardY[1]+height/2-15, 30, 30);
    ofRect(chessboardX[0]+width/2-15, chessboardY[6]+height/2-15, 30, 30);
    
    ofRect(chessboardX[0]+width/2-20, chessboardY[2]+height/2-20, 40, 40);
    ofRect(chessboardX[0]+width/2-20, chessboardY[5]+height/2-20, 40, 40);
    
    ofRect(chessboardX[0]+width/2-27.5, chessboardY[3]+height/2-27.5, 55, 55);
    ofRect(chessboardX[0]+width/2-27.5, chessboardY[4]+height/2-27.5, 55, 55);
    
    ofSetColor(16, 71, 83);
    ofFill();
    ofRect(chessboardX[7]+width/2-10, chessboardY[7]+height/2-10, 20, 20);
    ofRect(chessboardX[7]+width/2-10, chessboardY[0]+height/2-10, 20, 20);
    
    ofRect(chessboardX[7]+width/2-15, chessboardY[1]+height/2-15, 30, 30);
    ofRect(chessboardX[7]+width/2-15, chessboardY[6]+height/2-15, 30, 30);
    
    ofRect(chessboardX[7]+width/2-20, chessboardY[2]+height/2-20, 40, 40);
    ofRect(chessboardX[7]+width/2-20, chessboardY[5]+height/2-20, 40, 40);
    
    ofRect(chessboardX[7]+width/2-27.5, chessboardY[3]+height/2-27.5, 55, 55);
    ofRect(chessboardX[7]+width/2-27.5, chessboardY[4]+height/2-27.5, 55, 55);
}