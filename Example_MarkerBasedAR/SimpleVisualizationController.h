//
//  SimpleVisualizationController.h
//  Actions and Animations
//
//  Created by Eduardo Irías on 5/8/14.
//  Copyright (c) 2014 Estamp World. All rights reserved.
//

/*****************************************************************************
*   SimpleVisualizationController.h
*   Example_MarkerBasedAR
******************************************************************************
*   by Khvedchenia Ievgen, 5th Dec 2012
*   http://computer-vision-talks.com
******************************************************************************
*   Ch2 of the book "Mastering OpenCV with Practical Computer Vision Projects"
*   Copyright Packt Publishing 2012.
*   http://www.packtpub.com/cool-projects-with-opencv/book
*****************************************************************************/

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////
// File includes:
#import "EAGLView.h"
#import "CameraCalibration.hpp"
#import "BGRAVideoFrame.h"

@interface SimpleVisualizationController : NSObject
{
  EAGLView * m_glview;
  GLuint m_backgroundTextureId;
  std::vector<Transformation> m_transformations;
  CameraCalibration m_calibration;
  CGSize m_frameSize;
}

-(id) initWithGLView:(EAGLView*)view calibration:(CameraCalibration) calibration frameSize:(CGSize) size;

-(void) drawFrame;
-(void) updateBackground:(BGRAVideoFrame) frame;
-(void) setTransformationList:(const std::vector<Transformation>&) transformations;

@end
