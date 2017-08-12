#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofEnableDepthTest();

	ofNoFill();
	ofSetLineWidth(1.5);

	ofSetRectMode(ofRectMode::OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	ofRotateX(ofGetFrameNum());
	ofRotateZ(ofGetFrameNum());

	float radius = ofGetWidth() / 2;

	for (int i = -ofGetHeight() / 2; i < ofGetHeight() / 2; i += 10) {
		float rect_len = 250;
		float noise_value = ofNoise(ofGetFrameNum() * 0.05 + i * 0.01);
		ofSetColor(255);

		if (noise_value > 0.65) {
			rect_len = rect_len * (1 + noise_value);

			ofColor c;
			c.setHsb(ofMap(i, -ofGetHeight() / 2, ofGetHeight() / 2, 0, 255), 255, 255);
			ofSetColor(c);
		} 

		ofPushMatrix();
		ofTranslate(ofVec2f(0, i));
		ofRotateX(90);

		ofRect(ofVec2f(0, 0), rect_len, rect_len);

		ofPopMatrix();
	}

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
