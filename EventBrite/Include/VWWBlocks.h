//
//  VWWBlocks.h
//  EventBrite
//
//  Created by Zakk Hoyt (VaporWareWolf)
//  Copyright (c) 2013. Zakk Hoyt
//
#ifndef EventBrite_VWWBlocks_h
#define EventBrite_VWWBlocks_h

typedef void (^VWWArrayBlock)(NSArray *array);
typedef void (^VWWBoolBlock)(BOOL success);
typedef void (^VWWEmptyBlock)(void);
typedef void (^VWWErrorBlock)(NSError *error);

#endif
