//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSArray, NSString, OpenSDKScopeConfirmContainterView;
@protocol OpenSDKScopeConfirmViewControllerDelegate;

@interface OpenSDKScopeConfirmViewController : MMUIViewController <PBMessageObserverDelegate, MMTipsViewControllerDelegate>
{
    _Bool _needNotifySvrWhenConfirm;
    NSString *_confirmRediretUrl;
    int _errCode;
    NSString *_errMsg;
    OpenSDKScopeConfirmContainterView *_containerView;
    _Bool _isforcedRotationToPortrait;
    NSString *_appId;
    NSString *_scope;
    NSString *_state;
    NSString *_bundleId;
    id <OpenSDKScopeConfirmViewControllerDelegate> _confirmDelegate;
    NSString *_appName;
    NSString *_appIconURL;
    NSArray *_arrScopeInfo;
    NSString *_confirmTitle;
}

@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) NSArray *arrScopeInfo; // @synthesize arrScopeInfo=_arrScopeInfo;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak id <OpenSDKScopeConfirmViewControllerDelegate> confirmDelegate; // @synthesize confirmDelegate=_confirmDelegate;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isforcedRotationToPortrait; // @synthesize isforcedRotationToPortrait=_isforcedRotationToPortrait;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (_Bool)shouldAutorotate;
- (void)onOAuthConfirm:(id)arg1;
- (void)onOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onOAuthCancel;
- (_Bool)useBlackStatusbar;
- (void)handleConfirmResponse:(id)arg1;
- (void)handleOauthResponse:(id)arg1;
- (void)showErrCode:(int)arg1 ErrMsg:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)sendCancelOprationToSvr;
- (void)loadDataFromSvr;
- (void)showConfirmWindow:(id)arg1 appName:(id)arg2 iconUrl:(id)arg3;
- (void)refreshUI;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

