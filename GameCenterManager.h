//
//  GameCenterManager.h
//
//  Created by Erlend Mongstad on 29.09.13.
//  Copyright (c) 2013 Erlend Mongstad. All rights reserved.
//
#warning Definition of GameCenterManagerKey is required. Change this value to your own secret key.
#define kGameCenterManagerKey [@"MyKey" dataUsingEncoding:NSUTF8StringEncoding]

#define LIBRARY_FOLDER [NSHomeDirectory() stringByAppendingPathComponent:@"Library"]
#define kGameCenterManagerDataFile @"GameCenterManager.plist"
#define kGameCenterManagerDataPath [LIBRARY_FOLDER stringByAppendingPathComponent:kGameCenterManagerDataFile]

#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>
#import "Reachability.h"
#import "NSDataAES256.h"

@interface GameCenterManager : NSObject

@end
