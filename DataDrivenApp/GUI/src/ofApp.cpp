#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//top
    top.set(0, 0, 1920, 100);
    top1.set(0, 100, 1920, 4);
    //left
    left1.set(1620,104,300,1080);
    left2.set(1616, 104, 4, 1080);
    mid.set(340, 224, 1236, 400);
    mid1.set(304, 104, 1312, 910);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(190, 222, 237);
    ofDrawRectangle(top);
    ofSetColor(0, 36, 135);
    ofDrawRectangle(top1);
    ofDrawBitmapString("Twitter Interrogation app", 400, 50);
    ofDrawRectangle(left);
    ofDrawRectangle(left1);
    ofDrawRectangle(left2);
    
    ofSetColor(255);
    ofDrawRectangle(mid);
    ofSetColor(0, 132, 180);
    ofDrawRectangle(mid1);
        ofSetColor(255);
    ofDrawBitmapString("Total Tweets", 100, 190);
    ofDrawBitmapString("Money", 100, 340);
    ofDrawBitmapString("Politicis", 100, 490);
    ofDrawBitmapString("Paris", 100, 640);
    ofDrawBitmapString("DreamWorks", 100, 790);
    ofDrawBitmapString("Uber", 100, 265);
    ofDrawBitmapString("apple", 100, 415);
    ofDrawBitmapString("Esports", 100, 565);
    ofDrawBitmapString("Beyblade", 100, 715);
    ofDrawBitmapString("Brexit ", 100, 865);
    ofDrawBitmapString("Total Tweets mentioning beyblade is 30 ",400, 200);
    ofDrawBitmapString("(Clicking a tab on the right, changes this display)", 400, 330);
}
