//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class KSPanForwardAnimator, UIPercentDrivenInteractiveTransition, UIViewController;

@interface KSPanForwardGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _isPanningPush;
    CDUnknownBlockType _doPushForwardController;
    UIViewController *_forwardController;
    KSPanForwardAnimator *_panForwardAnimator;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

@property(nonatomic) _Bool isPanningPush; // @synthesize isPanningPush=_isPanningPush;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(retain, nonatomic) KSPanForwardAnimator *panForwardAnimator; // @synthesize panForwardAnimator=_panForwardAnimator;
@property(nonatomic) __weak UIViewController *forwardController; // @synthesize forwardController=_forwardController;
@property(copy, nonatomic) CDUnknownBlockType doPushForwardController; // @synthesize doPushForwardController=_doPushForwardController;
- (void).cxx_destruct;
- (id)interactiveTransitioningForAnimator:(id)arg1;
- (id)panForwardAnimatorForOperation:(long long)arg1;
- (void)handlePanForwardGesture:(id)arg1;
- (id)initWithDoPushForwardControllerBlock:(CDUnknownBlockType)arg1;

@end
