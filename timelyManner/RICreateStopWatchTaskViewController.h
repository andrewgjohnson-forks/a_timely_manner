//
//  RICreateStopWatchTaskViewController.h
//  timelyManner
//
//  Created by Dan Vingo on 7/8/13.
//  Copyright (c) 2013 Rhombus Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RICreateStopWatchTaskViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameLabel;

- (IBAction)createButtonPressed:(id)sender;

@end
