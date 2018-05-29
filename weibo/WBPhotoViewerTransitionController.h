//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIViewController, WBPhotoViewerTransitionDismissalAnimator, WBPhotoViewerTransitionDismissalRotateAnimator, WBPhotoViewerTransitionPresentationAnimator;
@protocol WBPhotoViewerTransitionControllerDelegate;

@interface WBPhotoViewerTransitionController : NSObject <UIViewControllerTransitioningDelegate>
{
    _Bool _landscapeDismissing;
    _Bool _currentInteracting;
    id <WBPhotoViewerTransitionControllerDelegate> _delegate;
    UIViewController *_viewController;
    double _animationDuration;
    WBPhotoViewerTransitionPresentationAnimator *_presentationAnimator;
    WBPhotoViewerTransitionDismissalAnimator *_dismissalAnimator;
    WBPhotoViewerTransitionDismissalRotateAnimator *_dismissalRotateAnimator;
}

@property(retain, nonatomic) WBPhotoViewerTransitionDismissalRotateAnimator *dismissalRotateAnimator; // @synthesize dismissalRotateAnimator=_dismissalRotateAnimator;
@property(retain, nonatomic) WBPhotoViewerTransitionDismissalAnimator *dismissalAnimator; // @synthesize dismissalAnimator=_dismissalAnimator;
@property(retain, nonatomic) WBPhotoViewerTransitionPresentationAnimator *presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
@property(nonatomic) _Bool currentInteracting; // @synthesize currentInteracting=_currentInteracting;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <WBPhotoViewerTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)canPerformInteraction;
- (_Bool)canPerformAnimationForTransitionType:(unsigned long long)arg1;
- (void)landscapeDismissTestWithGesture:(id)arg1;
- (_Bool)handlePullToDimissGesture:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

