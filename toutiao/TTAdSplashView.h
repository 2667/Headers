//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTAdSplashVideoViewDelegate-Protocol.h"

@class NSDate, NSDictionary, NSString, TTAdSplashModel, TTAdSplashSkipButton, TTAdSplashVVeboImageView, TTAdSplashVideoView, UIButton;
@protocol TTAdSplashViewDelegate;

@interface TTAdSplashView : UIView <TTAdSplashVideoViewDelegate>
{
    _Bool _hasAppear;
    _Bool _markWillDismiss;
    long long _currentGifIndex;
    _Bool _needNotifyOthersOnDeactivationForAudioSession;
    id <TTAdSplashViewDelegate> _delegate;
    TTAdSplashModel *_model;
    TTAdSplashVVeboImageView *_imageView;
    UIButton *_bgButton;
    TTAdSplashSkipButton *_skipButton;
    UIView *_viewButton;
    NSDate *_startDate;
    double _backgroundTime;
    TTAdSplashVideoView *_videoView;
    UIView *_logoView;
    UIView *_wifiView;
    NSDictionary *_currentImageInfo;
}

+ (_Bool)splashADModelHasAction:(id)arg1;
@property(nonatomic) _Bool needNotifyOthersOnDeactivationForAudioSession; // @synthesize needNotifyOthersOnDeactivationForAudioSession=_needNotifyOthersOnDeactivationForAudioSession;
@property(retain, nonatomic) NSDictionary *currentImageInfo; // @synthesize currentImageInfo=_currentImageInfo;
@property(retain, nonatomic) UIView *wifiView; // @synthesize wifiView=_wifiView;
@property(retain, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) TTAdSplashVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) double backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) UIView *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) TTAdSplashSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) TTAdSplashVVeboImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TTAdSplashModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <TTAdSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackWithTag:(id)arg1 label:(id)arg2 adId:(id)arg3 logExtra:(id)arg4 extra:(id)arg5;
- (void)trackURLs:(id)arg1 model:(id)arg2;
- (id)trackUrlModel;
- (id)videoInfoAboutPlabackTimeAndPercent;
- (void)eventTrack4VideoADWithLabel:(id)arg1 extraInfo:(id)arg2;
- (void)eventTrack4VideoADWithLabel:(id)arg1;
- (void)eventTrack4VideoADPlayBreakWithReason:(unsigned long long)arg1;
- (void)eventTrack4ImageADShowActionButton;
- (void)eventTrack4ImageADEnterDetailWithShowTime:(double)arg1 clickedViewButton:(_Bool)arg2;
- (void)eventTrack4ImageADSkipped;
- (void)eventTrack4ImageADShowed;
- (void)splashVideoView:(id)arg1 playStatus:(unsigned long long)arg2;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)removeVideoStatusNotification;
- (void)addVideoStatusNotification;
- (void)invalidPerform;
- (void)showedTimeOut;
- (void)nineBoxActionWithModel:(id)arg1 index:(long long)arg2;
- (long long)indexOfNineBoxSender:(id)arg1 forEvent:(id)arg2;
- (_Bool)haveClickAction;
- (void)viewButtonClick:(id)arg1 forEvent:(id)arg2;
- (void)skiButtonClick:(id)arg1;
- (_Bool)isTouchInImageViewSender:(id)arg1 forEvent:(id)arg2;
- (void)buttonTouched:(id)arg1 forEvent:(id)arg2;
- (void)readyToPlayVideoWithRelatedView:(id)arg1;
- (void)showADVideoView;
- (void)showADImage;
- (void)refreshUI;
- (void)layoutSubviews;
- (_Bool)isVideoAD;
- (void)setupDetailButtonIfNeeded;
- (void)setupADVideo;
- (void)setupADImage;
- (void)refreshModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

