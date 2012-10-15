//
//  SimpleCalculatorViewController.h
//  SimpleCalculator
//
//  Created by Jiyeon Seo on 12. 10. 15..
//  Copyright (c) 2012년 Jiyeon Seo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleCalculatorViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *resultLabel;

/** */ 
-(IBAction)clickNum:(id)sender;
@end
