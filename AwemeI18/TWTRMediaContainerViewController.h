//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIButton, UINavigationBar;
@protocol TWTRMediaContainerPresentable;

@interface TWTRMediaContainerViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _hideStatusBar;
    UIViewController<TWTRMediaContainerPresentable> *_mediaViewController;
    UINavigationBar *_topBarContainer;
    UIButton *_closeButton;
    struct CGRect _initialViewPosition;
}

@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UINavigationBar *topBarContainer; // @synthesize topBarContainer=_topBarContainer;
@property(nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property(nonatomic) struct CGRect initialViewPosition; // @synthesize initialViewPosition=_initialViewPosition;
@property(readonly, nonatomic) UIViewController<TWTRMediaContainerPresentable> *mediaViewController; // @synthesize mediaViewController=_mediaViewController;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)showFromView:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCloseButton;
- (id)makeCloseButton;
- (void)setChromeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareTopBar;
- (void)embedMediaViewController;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (id)initWithMediaViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

