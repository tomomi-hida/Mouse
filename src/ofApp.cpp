#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(255, 255, 255);//背景を白に
  ofSetColor(0, 0, 0);//ドラッグする前の円の色を黒に

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofDrawCircle(x_circle,y_circle, 50);//円を表示
  
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
//円の座標をマウスの位置に
  x_circle =x;
  y_circle =y;
  
  //円の色を変える
  ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  if(button==0){//マウスの左ボタンでドッラグした時
    ofSetColor(255, 0, 0);//円を赤色に
    
  }
  
  if(button==1){//マウスの真ん中のボタンでドラッグした時
    ofSetColor(0, 255, 0);//円を緑に
  }
    if(button ==2){//マウスの右ボタンでドラッグした時
      ofSetColor(0, 0, 255);//円を青色に
      
    }
  x_circle =x;//円のx座標にマウスの座標を
  y_circle =y;//円のy座標にマウスの座標を
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
