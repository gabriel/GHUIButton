//
//  GHUIControl.h
//  GHUIKit
//
//  Created by Gabriel Handford on 10/29/13.
//  Copyright (c) 2013 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^GHUIControlTargetBlock)(id sender);

@interface GHUIControl : UIControl {

  GHUIControlTargetBlock _targetBlock;
  BOOL _targetDisabled;

  NSString *_valueForCopy;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (getter=isSelectable) BOOL selectable; // If YES, will set selected state when touch (ended); Default is NO
@property (getter=isDelayActionEnabled) BOOL delayActionEnabled; // If YES, the action on the control is delayed in order to display the highlighted state

@property (copy) GHUIControlTargetBlock targetBlock;
@property (nonatomic) NSString *valueForCopy;
@property (readonly) UIView *contentView;

@property UIColor *highlightColor UI_APPEARANCE_SELECTOR;

/*!
 If YES, then touching the button will not callTarget.
 */
@property (getter=isTargetDisabled) BOOL targetDisabled;

- (void)viewInit;

/*!
 Create control with underlying view.
 */
- (id)initWithContentView:(UIView *)contentView;

/*!
 Removes all targets.
 Does NOT remove or clear the setTarget:action:.
 */
- (void)removeAllTargets;

/*!
 Removes all targets.
 Does NOT remove targets that the control has set for itself.
 */
+ (void)removeAllTargets:(UIControl *)control;

/*!
 Check if touches are all inside this view.
 @param touches
 @param event
 @result YES if all touches are inside control
 */
- (BOOL)touchesAllInView:(NSSet */*of UITouch*/)touches withEvent:(UIEvent *)event;

/*!
 Check if touches are all inside the view.
 @param view
 @param touches
 @param event
 @result YES if all touches are inside the view
 */
+ (BOOL)touchesAllInView:(UIView *)view touches:(NSSet */*of UITouch*/)touches withEvent:(UIEvent *)event;

/*!
 Add a target.
 @param target
 @param action
 */
- (void)addTarget:(id)target action:(SEL)action;

/*!
 Call the target and targetBlock. This is what is called automatically on the touch up inside event.
 */
- (void)callTarget;

@end

