//
//  SBSlingCollider.h
//  slingball
//
//  Created by Jacob Hauberg Hansen on 2/4/10.
//  Copyright 2010 Novasa Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SBCollidable.h"
#import "SBSlingBody.h"

@interface SBSlingHeadCollider : SBCollidable {
 @private
    REQUIRES(SBSlingBody, _body);
}

@property(nonatomic, readonly) float radius;

@property(nonatomic, readonly) kmVec3* position;
@property(nonatomic, readonly) kmVec3* velocity;

@end
