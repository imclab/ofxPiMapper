#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "CustomSource.h"

class ofApp : public ofBaseApp {
public:
  void setup();
  void draw();

  ofxPiMapper piMapper;
  
  // By using a custom source that is derived from FboSource
  // you will be able to see the source listed in sources editor
  CustomSource customSource;
};