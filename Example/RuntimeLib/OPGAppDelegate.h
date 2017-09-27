//
//  OPGAppDelegate.h
//  RuntimeLib
//
//  Created by manjunath.ramesh@onepointglobal.com on 09/27/2017.
//  Copyright (c) 2017 manjunath.ramesh@onepointglobal.com. All rights reserved.
//

@import UIKit;
#import "Access.h"
#import "IosRuntimeInteractor.h"
#import "WebPlayer.h"
#import "Controller.h"
#import "WebSession.h"
#import "InterviewSession.h"


@interface OPGAppDelegate : UIResponder <UIApplicationDelegate, IosRuntimeInteractor>

@property (strong, nonatomic) UIWindow *window;


@end
