//
//  GHUIButton.h
//  GHUIButton
//
//  Created by Gabriel Handford on 10/29/13.
//  Copyright (c) 2013 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <GHKit/GHCGUtils.h>

#import "GHUIControl.h"

typedef void (^GHUIButtonTargetBlock)(id sender);

/*!
 Button.
 */
@interface GHUIButton : GHUIControl

@property (nonatomic) NSString *text UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIFont *font UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *textColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSTextAlignment textAlignment UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *secondaryText UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIFont *secondaryFont UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *secondaryTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSTextAlignment secondaryTextAlignment UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *accessoryText UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIFont *accessoryTextFont UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *accessoryTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSTextAlignment accessoryTextAlignment UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIImage *accessoryImage;
@property (nonatomic) UIColor *fillColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *fillColor2 UI_APPEARANCE_SELECTOR;
@property (nonatomic) CGFloat cornerRadius UI_APPEARANCE_SELECTOR;
@property (nonatomic) CGFloat cornerRadiusRatio UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *borderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) CGFloat borderWidth UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *disabledBorderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *selectedFillColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *selectedTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *selectedAccessoryTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *highlightedFillColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *highlightedFillColor2 UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *highlightedTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *highlightedBorderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *disabledFillColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *disabledFillColor2 UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *disabledTextColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) CGSize imageSize;
@property (nonatomic, readonly) UIImageView *backgroundImageView;
@property (nonatomic) CGSize backgroundImageSize;
@property (nonatomic) UIEdgeInsets insets UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIEdgeInsets textInsets UI_APPEARANCE_SELECTOR;
@property (nonatomic) GHUIBorderStyle borderStyle UI_APPEARANCE_SELECTOR;
@property (nonatomic) GHUIShadingType shadingType UI_APPEARANCE_SELECTOR;
@property (nonatomic) GHUIShadingType highlightedShadingType UI_APPEARANCE_SELECTOR;
@property (nonatomic) GHUIShadingType disabledShadingType UI_APPEARANCE_SELECTOR;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) BOOL textHidden;

- (void)setActivityIndicatorAnimating:(BOOL)animating;

- (void)setBorderStyle:(GHUIBorderStyle)borderStyle color:(UIColor *)color width:(CGFloat)width cornerRadius:(CGFloat)cornerRadius;

@end

