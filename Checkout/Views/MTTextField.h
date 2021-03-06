//
//  MTTextField.h
//  MoltinSDK iOS Example
//
//  Created by Moltin on 24/06/15.
//  Copyright (c) 2015 Moltin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MTTextField : UITextField

- (void)clearBorder;
- (void)setInvalidInputBorder;
- (BOOL)isEmpty;
- (void)setDoneInputAccessoryView;

@property (nonatomic) BOOL hideCursor;

@end
