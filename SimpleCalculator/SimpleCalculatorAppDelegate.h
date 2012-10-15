//
//  SimpleCalculatorAppDelegate.h
//  SimpleCalculator
//
//  Created by Jiyeon Seo on 12. 10. 15..
//  Copyright (c) 2012년 Jiyeon Seo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SimpleCalculatorViewController;

@interface SimpleCalculatorAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SimpleCalculatorViewController *viewController;

@end
