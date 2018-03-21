//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKPanelBaseViewController.h"

#import "MBKRidingStatusProtocol-Protocol.h"

@class MBKMPLInfoPanelView, MBKRidingStatusSubscriber, MBKUnlockPanelView, NSString, UIView;

@interface MBKUnlockingPanelViewController : MBKPanelBaseViewController <MBKRidingStatusProtocol>
{
    MBKRidingStatusSubscriber *_subscriber;
    long long unlockFailedType;
    NSString *_bikeId;
    MBKUnlockPanelView *_panelView;
    MBKMPLInfoPanelView *_mplView;
    UIView *_mplViewWrapperView;
}

@property(retain, nonatomic) UIView *mplViewWrapperView; // @synthesize mplViewWrapperView=_mplViewWrapperView;
@property(retain, nonatomic) MBKMPLInfoPanelView *mplView; // @synthesize mplView=_mplView;
@property(retain, nonatomic) MBKUnlockPanelView *panelView; // @synthesize panelView=_panelView;
- (void).cxx_destruct;
- (CDUnknownBlockType)pushAnimationFromViewController:(struct UIViewController *)arg1;
- (id)getSnapShotOfLoadingBar;
- (void)showErrorWithMessage:(id)arg1;
- (void)mbkRidingStatusManager:(id)arg1 EnterRidingStatusWithModel:(id)arg2;
- (void)mbkRidingStatusManager:(id)arg1 UpdateUnlockingStatusWithModel:(id)arg2 error:(id)arg3;
- (void)mbkRidingStatusManager:(id)arg1 EnterUnlockingStatusWithModel:(id)arg2;
- (void)removeRidingSubscriber;
- (void)setupRidingSubscriber;
- (void)showFailureAnimationWithFailed:(CDUnknownBlockType)arg1;
- (void)panelViewPullUpAnimation:(CDUnknownBlockType)arg1;
- (void)showFinishAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showMPLInfo:(id)arg1;
- (void)showLoadingAnimation;
- (void)setUpPanelView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
