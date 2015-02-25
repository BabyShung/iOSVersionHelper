//
//  ViewController.m
//  iOSVersionHelper
//
//  Created by Hao Zheng on 2/25/15.
//  Copyright (c) 2015 Alarm.com. All rights reserved.
//

#import "ViewController.h"
#import "VersionHelper.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    // Get device name as NSString
   NSLog(@"%@",[VersionHelper deviceName]);
    
    // Get device size (NS_ENUM)
    NSLog(@"%ld",[VersionHelper deviceSize]);
    
    // Check for device model
    if ([VersionHelper deviceVersion] == iPhone6)
        NSLog(@"You got the new iPhone 6. Nice!");
    else if ([VersionHelper deviceVersion] == iPhone5S)
        NSLog(@"You got the iPhone 5S. Good device!");
    
    // Check for device screen size
    if ([VersionHelper deviceSize] == iPhone35inch)
        NSLog(@"Your screen is 3.5 inches");
    else if ([VersionHelper deviceSize] == iPhone4inch)
        NSLog(@"Your screen size is 4 inches");
    else if([VersionHelper deviceSize] == iPhone47inch)
        NSLog(@"Your screen size is 4.7 inches");
    else if([VersionHelper deviceSize] == iPhone55inch)
        NSLog(@"Your screen size is 5.5 inches");
    
    //Check for iOS Version
    if (iOSVersionGreaterThan(@"8"))
        NSLog(@"You are running iOS 8 or above!");
    
}


@end
