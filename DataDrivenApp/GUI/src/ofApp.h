#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
    

	public:
		void setup();
		void update();
		void draw();
// The current Head
    ofRectangle top,top1;
    //right
    ofRectangle right, right1, right2;
    //left
    ofRectangle left, left1, left2;
    //mid
    ofRectangle mid, mid1;
    
    //buttons
    ofRectangle btn1,btn2,btn3,btn4,btn5,btn6,btn7,btn8,btn9,btn10,btn11;
		
};

