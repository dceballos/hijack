//
//  AppDelegate.h
//  hijack
//
//  Created by Daniel Ceballos on 8/13/12.
//  Copyright (c) 2012 Daniel Ceballos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HiJackMgr.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,HiJackDelegate>
{
  HiJackMgr*  hiJackMgr;
}
@property (strong, nonatomic) UIWindow *window;

@end
