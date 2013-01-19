//
//  SBCollisionParticles.m
//  slingball
//
//  Created by Jacob Hauberg Hansen on 2/3/10.
//  Copyright 2010 Novasa Interactive. All rights reserved.
//

#import "SBCollisionParticles.h"

#import "SBRenderStates.h"

#import "NVCameraController.h"

@implementation SBCollisionParticles

- (id) init {
    if (self = [super init]) {
        self.layer = 2;
        self.isOpaque = NO;
        self.state = (unsigned int)(void*)state_collision_particles;
    }
    return self;
}

- (void) render {
    if (!_controller.isEnabled) {
        return;
    }
    
    NVCamera* cam = [[NVCameraController sharedController] camera];
    
    kmMat4 view = cam.view;
    kmMat4 world = _transform.world;
    
    kmMat4 modelview;
    kmMat4Multiply(&modelview, &view, &world);
    
    glMatrixMode(GL_PROJECTION);
    glLoadMatrixf(cam.projection.mat);
    glMatrixMode(GL_MODELVIEW);
    glLoadMatrixf(modelview.mat);
    
    for (int i = 0; i < kMaxCollisionParticles; i++) {
        SBCollisionParticle* particle = [_controller particleAtIndex: i];
        
        kmVec3 start;
        kmVec3 end;
        
        kmVec3Assign(&start, &particle->position);
        kmVec3Add(&end, &particle->position, &particle->velocity);
        
        GLfloat vertices[] = {
            start.x, start.y, start.z,
            end.x, end.y, end.z
        };
        
        glVertexPointer(3, GL_FLOAT, 0, vertices);
        
        glColor4f(1,1,1, particle->life);
        glDrawArrays(GL_LINE_STRIP, 0, 2);
    }
}

@end
