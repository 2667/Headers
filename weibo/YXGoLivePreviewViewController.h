//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveViewController.h"

#import "WBNLPublishViewControllerDelegate-Protocol.h"
#import "YXGoLiveViewModelDelegate-Protocol.h"
#import "YXPublishLivePreviewViewControllerDelegate-Protocol.h"
#import "YXWBNLFinishViewControllerDelegate-Protocol.h"
#import "YXWBNLPublishViewControllerDelegate-Protocol.h"

@class NSObject, NSString, YXGoLiveViewModel, YXWBNLPublishViewController;
@protocol YXGoLivePreviewViewControllerDelegate;

@interface YXGoLivePreviewViewController : YXLiveViewController <YXPublishLivePreviewViewControllerDelegate, YXWBNLPublishViewControllerDelegate, YXGoLiveViewModelDelegate, WBNLPublishViewControllerDelegate, YXWBNLFinishViewControllerDelegate>
{
    _Bool _isResume;
    _Bool _publishMirrorEnable;
    _Bool _hasOccupyCamera;
    _Bool _isCreatedLive;
    NSObject<YXGoLivePreviewViewControllerDelegate> *_delegate;
    NSString *_extend;
    YXGoLiveViewModel *_viewModel;
    YXWBNLPublishViewController *_publishViewController;
}

+ (id)performer;
@property(nonatomic) _Bool isCreatedLive; // @synthesize isCreatedLive=_isCreatedLive;
@property(nonatomic) _Bool hasOccupyCamera; // @synthesize hasOccupyCamera=_hasOccupyCamera;
@property(retain, nonatomic) YXWBNLPublishViewController *publishViewController; // @synthesize publishViewController=_publishViewController;
@property(nonatomic) _Bool publishMirrorEnable; // @synthesize publishMirrorEnable=_publishMirrorEnable;
@property(retain, nonatomic) YXGoLiveViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(nonatomic) _Bool isResume; // @synthesize isResume=_isResume;
@property(nonatomic) __weak NSObject<YXGoLivePreviewViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLoginResponse:(id)arg1;
- (void)liveFinishViewControllerDidDismiss:(id)arg1;
- (void)interactionViewDidDoubleClick;
- (void)dealloc;
- (void)switchCamera;
- (void)switchMirror;
- (void)setUsingBackCamera:(_Bool)arg1;
- (void)performerBtmMoreView:(id)arg1 buttonDidClickWithType:(long long)arg2;
- (void)initSender;
- (id)buildOwnPlayerView;
- (void)loadFunctionPanel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadMyView;
- (id)getContainerID;
- (void)onBeautifyReset:(id)arg1;
- (void)onBeautifyValueChanged:(id)arg1 value:(double)arg2 forBeautifyType:(unsigned long long)arg3;
- (void)moreOptionView:(id)arg1 event:(unsigned long long)arg2;
- (void)showMoreOptionView;
- (void)yx_publishVC:(id)arg1 operationViewEvent:(unsigned long long)arg2;
- (void)resumePublish;
- (void)sendCreateLiveRequest:(id)arg1;
- (void)yx_publishVC:(id)arg1 publishEvent:(unsigned long long)arg2;
- (void)yx_publishVCDidDismissSelf:(id)arg1 animate:(_Bool)arg2;
- (void)yx_publishVC:(id)arg1 didTapCloseButton:(id)arg2;
- (void)downloadCover:(id)arg1;
- (void)cameraSourceDidOccupyOrRelease:(id)arg1;
- (void)viewDidLoad;
- (void)publishViewControllerDidFinish:(id)arg1;
- (void)wbLogInit;
- (void)logInit;
- (id)playerView;
- (id)uiCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

