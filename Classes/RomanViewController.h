//
//  RomanViewController.h
//  Roman
//
//  Created by Rob on 13/08/2008.
//  Copyright 2008 [kumo.it]. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Converter;

@interface RomanViewController : UIViewController {
	IBOutlet UILabel *romanLabel;
	IBOutlet UILabel *arabicLabel;
	NSString *string;
	Converter *converter;
	
	IBOutlet UIButton *buttonOne;
	IBOutlet UIButton *buttonTwo;
	IBOutlet UIButton *buttonThree;
	IBOutlet UIButton *buttonFour;
	IBOutlet UIButton *buttonFive;
	IBOutlet UIButton *buttonSix;
	IBOutlet UIButton *buttonSeven;
}

@property (nonatomic, retain) UILabel *romanLabel;
@property (nonatomic, retain) UILabel *arabicLabel;
@property (nonatomic, retain) UIButton *buttonOne;
@property (nonatomic, retain) UIButton *buttonTwo;
@property (nonatomic, retain) UIButton *buttonThree;
@property (nonatomic, retain) UIButton *buttonFour;
@property (nonatomic, retain) UIButton *buttonFive;
@property (nonatomic, retain) UIButton *buttonSix;
@property (nonatomic, retain) UIButton *buttonSeven;


@property (nonatomic, copy) NSString *string;
@property (nonatomic, retain) Converter *converter;

- (void)convertYear;
- (IBAction)buttonPressed:(id)sender;
- (void)setButtonTitles:(NSArray *)titles;
@end
