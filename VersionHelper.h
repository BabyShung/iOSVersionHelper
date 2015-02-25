//
//  VersionHelper.h
//  iOSVersionHelper
//
//  Created by Hao Zheng on 2/25/15.
//  Copyright (c) 2015 Alarm.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sys/utsname.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface VersionHelper : NSObject

#define iOSVersionEqualTo(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define iOSVersionGreaterThan(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define iOSVersionGreaterThanOrEqualTo(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define iOSVersionLessThan(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define iOSVersionLessThanOrEqualTo(v)        ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

typedef NS_ENUM(NSInteger, DeviceVersion){
    
    Simulator = 0,
    
    iPhone4 = 3,
    iPhone4S = 4,
    iPhone5 = 5,
    iPhone5C = 6,
    iPhone5S = 7,
    iPhone6 = 8,
    iPhone6Plus = 9,
    
    iPad1 = 10,
    iPad2 = 11,
    iPadMini = 12,
    iPad3 = 13,
    iPad4 = 14,
    iPadAir = 15,
    iPadMini2 = 16,
    iPadAir2 = 17,
    iPadMini3 = 18
};

typedef NS_ENUM(NSInteger, DeviceSize){
    UnknownSize = 0,
    iPhone35inch = 1,
    iPhone4inch = 2,
    iPhone47inch = 3,
    iPhone55inch = 4
};

+ (DeviceVersion)deviceVersion;
+ (DeviceSize)deviceSize;
+ (NSString*)deviceName;
+ (BOOL)is_iPhone;
+ (BOOL)is_iPad;

@end
