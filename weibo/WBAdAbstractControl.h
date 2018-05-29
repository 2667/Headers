//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIImageView, WBAd, WBAdBaseView, WBAdInfo, WBAdNetEngine, WBAdRequest, WBAdSize;

@interface WBAdAbstractControl : NSObject <UINavigationControllerDelegate>
{
    int enforceShowCloseButton;
    WBAd *ad;
    WBAdRequest *adRequest;
    int orientation;
    WBAdSize *adSize;
    NSString *posId;
    WBAdInfo *adInfo;
    _Bool isReceiveAdSuccess;
    WBAdBaseView *adShowView;
    UIImageView *backGroundImageView;
    float refreshInterval;
    _Bool isCanClosed;
    WBAdNetEngine *netEngine;
    int closeType;
    _Bool _isDisabled;
    _Bool _isActive;
    int _adFormat;
}

@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property int adFormat; // @synthesize adFormat=_adFormat;
@property int closeType; // @synthesize closeType;
@property _Bool isCanClosed; // @synthesize isCanClosed;
@property _Bool isReceiveAdSuccess; // @synthesize isReceiveAdSuccess;
@property(retain) WBAdBaseView *adShowView; // @synthesize adShowView;
@property(retain) WBAdInfo *adInfo; // @synthesize adInfo;
@property(retain) NSString *posId; // @synthesize posId;
@property(retain) WBAdSize *adSize; // @synthesize adSize;
@property int orientation; // @synthesize orientation;
@property(retain) WBAdRequest *adRequest; // @synthesize adRequest;
@property int enforceShowCloseButton; // @synthesize enforceShowCloseButton;
- (void).cxx_destruct;
- (_Bool)checkIfHasLinkBannerToShow;
- (void)displayFeedback;
- (void)RequestCompletedWithAds:(id)arg1 withError:(id)arg2;
- (id)buildRequestWeiboParms;
- (id)formatParam;
- (id)buildRequestBaseParms;
- (id)buildRequestParms;
- (void)enableCloseButton:(id)arg1 state:(int)arg2;
- (void)switchAdWithoutAnimation;
- (void)switchAd;
- (void)onLeaveApplication;
- (void)onPresentScreen;
- (void)onDismissScreen;
- (void)willDismissScreen;
- (void)onAdLinkedAd;
- (void)onAdFinished;
- (void)onReceiveAd;
- (void)onFailedToReceiveAd:(id)arg1;
- (void)wbAdViewControllerDidCallViewWillAppear;
- (void)loadAdViewWithContext:(id)arg1;
- (id)clickedAdParam:(id)arg1 withClickUrl:(id)arg2;
- (id)loadAdFromDbByPosId:(id)arg1;
- (void)createAdView;
- (void)executeAsynAdRequest:(id)arg1;
- (void)executeAdRequest:(id)arg1;
- (void)clickCloseButton;
- (void)setAdtempInvisible:(id)arg1 isVisiable:(int)arg2;
- (void)changeAdTempVisiable:(id)arg1 isVisible:(int)arg2;
- (void)resetAdTempVisible:(id)arg1;
- (void)closeAdRefresh;
- (void)clearCache;
- (void)recordCloseAd;
- (void)recordTimeoutAd;
- (void)recordClickAd;
- (void)recordPV;
- (void)closeAd;
- (void)clickAd;
- (void)refreshAd;
- (void)close;
- (void)dealloc;
- (id)init;
@property __weak WBAd *ad; // @synthesize ad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

