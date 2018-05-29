//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoPluginBaseView.h"

#import "WBVideoFullScreenConfigurator-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UILabel, WBGCDTimer;
@protocol WBVideoUpNextPluginCountDownDelegate, WBVideoUpNextPluginViewDelegate, WBVideoUpNextPluginViewVisibleDelegate;

@interface WBVideoUpNextPluginView : WBVideoPluginBaseView <WBVideoFullScreenConfigurator>
{
    unsigned long long _countDownSecondsLeft;
    _Bool _pendingButtonsReload;
    _Bool _invisibleWhenInlinePlaybackFinished;
    _Bool _usingHorizontalLayout;
    _Bool _hideFollowButton;
    _Bool _repostActionItemEnabled;
    _Bool _newLayoutEnable;
    id <WBVideoUpNextPluginViewDelegate> _viewDelegate;
    id <WBVideoUpNextPluginCountDownDelegate> _countDownDelegate;
    id <WBVideoUpNextPluginViewVisibleDelegate> _visibleDelegate;
    NSMutableArray *_callToActionButtons;
    NSArray *_callToActionItems;
    WBGCDTimer *_countDownTimer;
    UIButton *_countDownLabel;
    UILabel *_topTipLabel;
}

+ (id)defaultPlayCompleteActions:(_Bool)arg1;
+ (unsigned long long)defaultPresentationStateVisibilityOptions;
+ (unsigned long long)defaultPlaybackStateVisibilityOptions;
@property(nonatomic) _Bool newLayoutEnable; // @synthesize newLayoutEnable=_newLayoutEnable;
@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(retain, nonatomic) UIButton *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) WBGCDTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) NSArray *callToActionItems; // @synthesize callToActionItems=_callToActionItems;
@property(retain, nonatomic) NSMutableArray *callToActionButtons; // @synthesize callToActionButtons=_callToActionButtons;
@property(nonatomic) _Bool repostActionItemEnabled; // @synthesize repostActionItemEnabled=_repostActionItemEnabled;
@property(nonatomic) _Bool hideFollowButton; // @synthesize hideFollowButton=_hideFollowButton;
@property(nonatomic) _Bool usingHorizontalLayout; // @synthesize usingHorizontalLayout=_usingHorizontalLayout;
@property(nonatomic) _Bool invisibleWhenInlinePlaybackFinished; // @synthesize invisibleWhenInlinePlaybackFinished=_invisibleWhenInlinePlaybackFinished;
@property(nonatomic) __weak id <WBVideoUpNextPluginViewVisibleDelegate> visibleDelegate; // @synthesize visibleDelegate=_visibleDelegate;
@property(nonatomic) __weak id <WBVideoUpNextPluginCountDownDelegate> countDownDelegate; // @synthesize countDownDelegate=_countDownDelegate;
@property(nonatomic) __weak id <WBVideoUpNextPluginViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (_Bool)visibilityWithPlaybackState:(unsigned long long)arg1 presentationState:(unsigned long long)arg2;
- (void)_finishCountDown;
- (void)countDownLabelPressed:(id)arg1;
- (void)_countDownTimerTicked;
- (_Bool)countingDown;
- (void)stopCountDown;
- (void)startCountDownWithSeconds:(unsigned long long)arg1;
- (void)_updateCountDownLabel;
- (void)prepareForHidden;
- (void)videoPlayerController:(id)arg1 didReceiveOrientationChangeNotificationWithOrientation:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)updateActionItems;
- (void)videoPlayerControllerDidFinishPlayback:(id)arg1;
- (void)startCountDownIfNeeded;
- (void)prepareForDisplay;
- (void)updateTopTipLabelSize;
- (void)setTopTipLabelText:(id)arg1;
- (void)setButtonImageFromUrl:(id)arg1 forButton:(id)arg2 actionType:(unsigned long long)arg3;
- (void)didPressActionButton:(id)arg1;
- (void)reloadButtons;
- (_Bool)shouldShowVideoFeedCardNewRatio;
- (void)layoutSubviews;
- (void)useingVerticalLayout;
- (void)useingHorizonLayout;
- (void)reloadButtonsWhenVisible;
- (double)fontSize;
- (double)topTipLabelFontsSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configurator_refreshForFullScreenStateChange;
- (void)configurator_unconfigureForFullScreenWithConfigureResult:(id)arg1;
- (id)configurator_configureForFullScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

