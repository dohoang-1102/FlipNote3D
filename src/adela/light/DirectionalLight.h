//
//  PointLight.h
//  FlipBook3D
//
//  Created by xiang huang on 7/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "LightBase.h"

@interface DirectionalLight : LightBase

@property(nonatomic)GLKVector4 color;
@property(nonatomic)GLKVector3 direction;
@end
