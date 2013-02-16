//
//  BlockTextAlertViewConfig.h
//  BlockAlertsDemo
//
//  Created by Diego Chohfi on 8/22/12.
//  Copyright (c) 2012 CodeCrop Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlockTextAlertViewConfig : NSObject

@property (nonatomic) UIControlContentVerticalAlignment contentVerticalAlignment;
@property (nonatomic) UIKeyboardType keyboardType;
@property (nonatomic) UITextAutocapitalizationType autocapitalizationType;
@property (nonatomic) UITextBorderStyle borderStyle;
@property (nonatomic) UITextAlignment textAlignment;
@property (nonatomic) UITextFieldViewMode clearButtonMode;
@property (strong, nonatomic) NSString *placeholder;
@property (strong, nonatomic) UIFont *font;

+ (BlockTextAlertViewConfig *) defaultConfig;

@end
