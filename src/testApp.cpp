#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

//    ofBackground(255, 255, 255);
//    ofSetCircleResolution(1000);
//
//    ofEnableSmoothing();
//
//    ofSetFrameRate(60);
//
//    posX = ofGetWidth()/4;
//    posY = ofGetHeight()/4;
//
//    flag = 0;
    //size (600, 600);

    ofBackground(255, 255, 255);
    ofSetCircleResolution(1000);

    ofEnableSmoothing();
    //ofEnableAlphaBlending();

    //noStroke();

    myLeaf1 = new leaf(10,10,50,50,ofColor(255,0,0,130));
    myLeaf2 = new leaf(10,10,50,50,ofColor(0,255,0,130));
    myLeaf3 = new leaf(10,10,50,50,ofColor(0,0,255,130));

    // determines position of the different thingys
    position1 = 150;
    position2 = 300;
    position3 = 450;

}

//--------------------------------------------------------------
void testApp::update(){
//    for(int i = 0; i <0; i++){
//        myBall[i].update();
//    }

    myLeaf1->updateThingy(position1,position1);
    myLeaf2->updateThingy(position2,position2);
    myLeaf3->updateThingy(position3,position3);

}

//--------------------------------------------------------------
void testApp::draw(){
//    for(int i = 0; i <10; i++){
//        myBall[i].draw();
//    }

    myLeaf1->drawThingy(position1,position1);
    myLeaf2->drawThingy(position2,position2);
    myLeaf3->drawThingy(position3,position3);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
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
