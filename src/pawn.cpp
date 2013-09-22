//
//  pawn.cpp
//  emptyExample
//
//  Created by Nina Freeman on 9/22/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "testApp.h"
#include "pawn.h"

Pawn::Pawn(int triangle_x1, int triangle_y1, int triangle_x2, int triangle_y2, int triangle_x3, int triangle_y3, int height, int color){
    
    if (color == 1) {
        ofSetColor(255, 218, 130);
        ofFill();
    } else if (color == 0) {
        ofSetColor(163, 131, 255);
        ofFill();
    }
    
    for (int i = 0; i < 8; i++) {
        ofTriangle(triangle_x1, triangle_y2, triangle_x2, triangle_y2, triangle_x3, triangle_y3);
    
        triangle_y1 += height;
        triangle_y2 += height;
        triangle_y3 += height;
    }
}