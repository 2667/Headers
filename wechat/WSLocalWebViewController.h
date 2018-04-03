//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMWebSearchViewDelegate-Protocol.h"

@class MMUILabel, MMWebSearchController, NSString, UIButton, UIImageView, UIScrollView, UIView, WCStatTimerHelper;
@protocol WSLocalWebViewControllerDelegate;

@interface WSLocalWebViewController : MMUIViewController <MMWebSearchViewDelegate>
{
    UIView *_navBarBkg;
    int _scene;
    MMWebSearchController *_webSearchController;
    WCStatTimerHelper *_pageTimeHelper;
    _Bool m_bShouldForcedRotationToPortrait;
    long long _orientation;
    struct CGRect _videoFrame;
    _Bool _hasInitContainerView;
    _Bool _hasFirstWebviewJsbridgeReady;
    _Bool _hasSendOnUiInitEvent;
    unsigned long long _beginPreloadTime;
    long long _contentInsetAdjustmentBehavior;
    UIScrollView *_retryContainerView;
    UIImageView *_retryIcon;
    MMUILabel *_retryLabel;
    UIButton *_retryButton;
    _Bool _shouldForbidCache;
    int _VCType;
    unsigned long long _businessType;
    NSString *_contentTitle;
    id <WSLocalWebViewControllerDelegate> _delegate;
    NSString *_redDotMsgId;
    unsigned long long _enterTime;
}

@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSString *redDotMsgId; // @synthesize redDotMsgId=_redDotMsgId;
@property(readonly, nonatomic) _Bool shouldForbidCache; // @synthesize shouldForbidCache=_shouldForbidCache;
@property(nonatomic) int VCType; // @synthesize VCType=_VCType;
@property(nonatomic) __weak id <WSLocalWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;
- (void)startForcedRotation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onJsbridgeReady:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)windowHide:(id)arg1;
- (void)onUpdateTitleViewWithTitle:(id)arg1;
- (double)webSearchViewPosY;
- (void)onClickWebViewReload:(id)arg1;
- (void)initRetryView;
- (void)showRetryTips;
- (void)initWebView;
- (id)getTitleLabelWithTitle:(id)arg1;
- (void)updateTitleViewWithTitle:(id)arg1;
- (void)initTitleView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onLongPressView:(id)arg1;
- (void)initNavigationBar;
- (void)onWSLocalWebViewReturn;
- (void)willDisappear;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tryInitContainerView;
- (_Bool)tryParallelAsyncWebRecommend:(unsigned long long)arg1 reddotMsgId:(id)arg2;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (void)preInitContainerView;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (void)initWebSearchController;
- (id)initWithScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

