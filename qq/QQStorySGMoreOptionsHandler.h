//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEditViewControllerObserver-Protocol.h>
#import <QQMainProject/QQStoryShareControllerDelegate-Protocol.h>
#import <QQMainProject/QQStructureMsgUtilityDelegate-Protocol.h>
#import <QQMainProject/UserSummaryNavBarItemDelagate-Protocol.h>

@class NSString, QQStoryMultiUserAvatarView, QQStoryShareGroupViewController, QQStructureMsgUtility, SingleLineEditViewController;

@interface QQStorySGMoreOptionsHandler : NSObject <QQStoryShareControllerDelegate, IEditViewControllerObserver, QQStructureMsgUtilityDelegate, UserSummaryNavBarItemDelagate>
{
    int _currentSubscribeSeq;
    QQStoryShareGroupViewController *_viewController;
    long long _tipOffReqSeq;
    SingleLineEditViewController *_editor;
    QQStructureMsgUtility *_structureMsgUtility;
    QQStoryMultiUserAvatarView *_headView;
}

@property(retain, nonatomic) QQStoryMultiUserAvatarView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) QQStructureMsgUtility *structureMsgUtility; // @synthesize structureMsgUtility=_structureMsgUtility;
@property(retain, nonatomic) SingleLineEditViewController *editor; // @synthesize editor=_editor;
@property(nonatomic) long long tipOffReqSeq; // @synthesize tipOffReqSeq=_tipOffReqSeq;
@property(nonatomic) int currentSubscribeSeq; // @synthesize currentSubscribeSeq=_currentSubscribeSeq;
@property(nonatomic) __weak QQStoryShareGroupViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)createMultiUserAvatarTimeOut;
- (void)createMultiUserAvatarSuccess:(id)arg1;
- (void)uploadShareImageFailed:(int)arg1;
- (void)uploadShareImageSuccess:(id)arg1;
- (void)showExitAlertWithTitle:(id)arg1;
- (void)onClickExitBtn;
- (_Bool)textFieldShouldReturn:(id)arg1 value:(id)arg2;
- (_Bool)onEditViewCancel:(id)arg1 value:(id)arg2;
- (_Bool)onEditViewModifyValue:(id)arg1 value:(id)arg2;
- (void)onClickEditBtnAction:(id)arg1;
- (void)handleReportRsp:(id)arg1;
- (void)handleTipOffWithIndex:(long long)arg1;
- (void)handleTipOff_3;
- (void)handleTipOff_2;
- (void)handleTipOff_1;
- (void)handleTipOff_0;
- (void)onClickTipOffBtn;
- (void)actionDidSuccess:(int)arg1 storyExInfo:(id)arg2;
- (void)internalShareSGCard:(id)arg1;
- (void)onClickShareBtn;
- (void)onClickOpenGroupSetting;
- (void)rigthButtonClick;
- (void)enterStory;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
