//
//  Motion.h
//  BLEduino
//
//  Created by Ramon Gonzalez on 11/4/13.
//  Copyright (c) 2013 Kytelabs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BDThrottleYawRollPitch : NSObject
@property  NSInteger throttle;
@property  NSInteger pitch;
@property  NSInteger roll;
@property  NSInteger yaw;

/*
 * Create Throttle-Yaw-Roll-Pitch characteristic from NSData object. 
 */
- (id) initWithData:(NSData *)motionData;

/*
 * Create Throttle-Yaw-Roll-Pitch.
 */
+ (instancetype)motion;

/*
 * Converts Throttle-Yaw-Roll-Pitch characteristic to an NSData object to send data to a peripheral.
 */
- (NSData *)data;

@end
