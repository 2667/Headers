//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLVideoBaseViewController.h"

#import "WBMLImageTextUserProfileCardViewDelegate-Protocol.h"

@class NSString, UIControl, WBMLImageTextLiveEventModel, WBMLImageTextLiveViewController, WBMLImageTextUserProfileCardView, WBMLVideoModalsContainerView, WBMLVideoUserInfoModel;

@interface WBMLImageTextUserProfileViewController : WBMLVideoBaseViewController <WBMLImageTextUserProfileCardViewDelegate>
{
    WBMLImageTextLiveEventModel *_liveInfo;
    WBMLVideoUserInfoModel *_user;
    WBMLVideoUserInfoModel *_currentUser;
    WBMLVideoModalsContainerView *_containerView;
    WBMLImageTextLiveViewController *_liveVc;
    WBMLImageTextUserProfileCardView *_cardView;
    UIControl *_backgroundControl;
    WBMLVideoModalsContainerView *_reportContainerView;
}

@property(retain, nonatomic) WBMLVideoModalsContainerView *reportContainerView; // @synthesize reportContainerView=_reportContainerView;
@property(retain, nonatomic) UIControl *backgroundControl; // @synthesize backgroundControl=_backgroundControl;
@property(retain, nonatomic) WBMLImageTextUserProfileCardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak WBMLImageTextLiveViewController *liveVc; // @synthesize liveVc=_liveVc;
@property(nonatomic) __weak WBMLVideoModalsContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WBMLVideoUserInfoModel *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) WBMLVideoUserInfoModel *user; // @synthesize user=_user;
@property(retain, nonatomic) WBMLImageTextLiveEventModel *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void).cxx_destruct;
- (void)userProfileCardView:(id)arg1 event:(long long)arg2;
- (void)dismissReportView;
- (void)showReportView;
- (void)tapBackgroundControl;
- (void)sendReportInfoWithTitle:(id)arg1;
- (void)requestUserInfo;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

