//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBStoryCameraManagerStateListener-Protocol.h"
#import "WBStoryCameraModeSwitcherViewDelegate-Protocol.h"
#import "WBStoryCaptureButtonDelegate-Protocol.h"
#import "WBStoryCapturePanel-Protocol.h"
#import "WBStoryCountdownViewDelegate-Protocol.h"
#import "WBStorySpeedSegmentControlDelegate-Protocol.h"

@class NSArray, NSString, UIButton, WBStoryCameraManager, WBStoryCameraModeModel, WBStoryCameraModeSwitcherView, WBStoryCaptureButton, WBStoryCaptureProgressView, WBStoryCountdownView, WBStoryMusicItem, WBStoryProgressHUD, WBStorySpeedSegmentControl, WBStoryVideoEditorCache;
@protocol WBStoryCapturePanelDelegate;

@interface WBStoryCaptureControlView : UIView <WBStoryCameraManagerStateListener, WBStoryCaptureButtonDelegate, WBStoryCameraModeSwitcherViewDelegate, WBStoryCountdownViewDelegate, WBStorySpeedSegmentControlDelegate, WBStoryCapturePanel>
{
    struct {
        unsigned int isRecording:1;
        unsigned int isObserving:1;
        unsigned int shouldShowSegmentGuide:1;
    } _flags;
    _Bool _disableCapture;
    id <WBStoryCapturePanelDelegate> _delegate;
    double _speedRate;
    unsigned long long _cameraMode;
    double _videoDuration;
    WBStoryCameraManager *_cameraManager;
    CDUnknownBlockType _willCapturePhotoAnimation;
    CDUnknownBlockType _captureBoomerngVideoAnimation;
    WBStoryVideoEditorCache *_currentVideoCache;
    UIButton *_cameraToggleButton;
    UIButton *_flashButton;
    UIButton *_backButton;
    WBStoryCameraModeSwitcherView *_cameraModeSwitcherView;
    WBStorySpeedSegmentControl *_speedSegmentControl;
    WBStoryCaptureProgressView *_progressView;
    WBStoryCountdownView *_countdownView;
    WBStoryCaptureButton *_cameraButton;
    WBStoryProgressHUD *_progressHUD;
    UIButton *_storyARButton;
    UIButton *_weiboARButton;
    UIButton *_confirmButton;
    UIButton *_deleteButton;
    UIButton *_albumButton;
    UIButton *_musicButton;
    UIView *_dotView;
    WBStoryMusicItem *_musicItem;
    unsigned long long _torchMode;
    WBStoryCameraModeModel *_selectedModeModel;
    NSArray *_cameraModeModels;
    double _currentProgress;
    double _previousProgress;
}

@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) NSArray *cameraModeModels; // @synthesize cameraModeModels=_cameraModeModels;
@property(retain, nonatomic) WBStoryCameraModeModel *selectedModeModel; // @synthesize selectedModeModel=_selectedModeModel;
@property(nonatomic) unsigned long long torchMode; // @synthesize torchMode=_torchMode;
@property(nonatomic) __weak WBStoryMusicItem *musicItem; // @synthesize musicItem=_musicItem;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIButton *musicButton; // @synthesize musicButton=_musicButton;
@property(retain, nonatomic) UIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *weiboARButton; // @synthesize weiboARButton=_weiboARButton;
@property(retain, nonatomic) UIButton *storyARButton; // @synthesize storyARButton=_storyARButton;
@property(retain, nonatomic) WBStoryProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) WBStoryCaptureButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) WBStoryCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) WBStoryCaptureProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) WBStorySpeedSegmentControl *speedSegmentControl; // @synthesize speedSegmentControl=_speedSegmentControl;
@property(retain, nonatomic) WBStoryCameraModeSwitcherView *cameraModeSwitcherView; // @synthesize cameraModeSwitcherView=_cameraModeSwitcherView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UIButton *cameraToggleButton; // @synthesize cameraToggleButton=_cameraToggleButton;
@property(retain, nonatomic) WBStoryVideoEditorCache *currentVideoCache; // @synthesize currentVideoCache=_currentVideoCache;
@property(copy, nonatomic) CDUnknownBlockType captureBoomerngVideoAnimation; // @synthesize captureBoomerngVideoAnimation=_captureBoomerngVideoAnimation;
@property(copy, nonatomic) CDUnknownBlockType willCapturePhotoAnimation; // @synthesize willCapturePhotoAnimation=_willCapturePhotoAnimation;
@property(nonatomic) _Bool disableCapture; // @synthesize disableCapture=_disableCapture;
@property(nonatomic) __weak WBStoryCameraManager *cameraManager; // @synthesize cameraManager=_cameraManager;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double speedRate; // @synthesize speedRate=_speedRate;
@property(nonatomic) __weak id <WBStoryCapturePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clearStickerDot;
- (void)checkStickerDot;
- (void)handleUnreadCountChanged:(id)arg1;
- (void)hideDotView;
- (void)showDotView;
- (void)finishWeiboARButtonLog;
- (void)finishARButtonLog;
- (void)finishMusicButtonLog;
- (void)finishAlbumButtonLog;
- (void)finishFlashButtonLog;
- (void)finishCameraToggleButtonLog;
- (void)finishSegmentCaptureLog:(id)arg1;
- (void)finishCaptureLog:(id)arg1;
- (id)commonLogDict;
- (void)applicationWillResignActive:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)cameraManagerDidStartGeneratingBoomerangVideo:(id)arg1;
- (void)cameraManager:(id)arg1 didFinishWithVideoClip:(id)arg2;
- (void)cameraManager:(id)arg1 didFinishWithMediaCache:(id)arg2;
- (void)cameraManager:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)cameraManager:(id)arg1 didUpdateBoomerangFrameCount:(unsigned long long)arg2;
- (void)cameraManager:(id)arg1 didUpdateRecordingTime:(CDStruct_1b6d18a9)arg2;
- (void)cameraManager:(id)arg1 didChangeArState:(_Bool)arg2;
- (void)cameraManager:(id)arg1 didToggleCamera:(_Bool)arg2;
- (void)hideProgressHUD;
- (void)showProgressHUD;
- (void)captureButton:(id)arg1 touchCancel:(struct CGPoint)arg2;
- (void)captureButton:(id)arg1 touchEnd:(struct CGPoint)arg2;
- (void)captureButton:(id)arg1 touchMovefrom:(struct CGPoint)arg2 to:(struct CGPoint)arg3;
- (void)captureButton:(id)arg1 touchDown:(struct CGPoint)arg2;
- (void)cameraModeSwicherView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)speedSegmentControl:(id)arg1 didSelectSegment:(id)arg2;
- (void)countdownViewDidFinish:(id)arg1;
- (void)countdownViewDidCancel:(id)arg1;
- (void)startCaptureCountdown;
- (void)endCaptureWithType:(unsigned long long)arg1;
- (void)didStartCapture;
- (void)updateFlashButton;
- (void)camareToggleButtonClick:(id)arg1;
- (void)flashButtonClick:(id)arg1;
- (void)weiboARButtonClick:(id)arg1;
- (void)storyARButtonClick:(id)arg1;
- (void)musicButtonClick:(id)arg1;
- (void)albumButtonClick:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)confirmButtonClick:(id)arg1;
- (void)deleteButtonClick:(id)arg1;
- (void)doCameraToggleButtonAnimation;
- (void)resetSubviewsVisibility;
- (void)cameraManagerDidStartRecording;
- (void)disableCaptureControls;
- (void)dismissSubviewsAnimated:(_Bool)arg1;
- (void)showSubviewsAnimated:(_Bool)arg1;
- (void)dismissFooterViewAnimated:(_Bool)arg1;
- (void)showFooterViewAnimated:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1 duration:(double)arg2;
- (void)recoverCurrentCacheMusicItemIfNeeded;
- (_Bool)shouldEnableConfirmButton;
- (void)updateMeidaCacheState;
- (void)updateCurrentProgress:(CDStruct_1b6d18a9)arg1;
- (void)updateProgressView;
- (void)updateProgresses;
- (void)hideSpeedSegmentControl;
- (void)showSpeedSegmentControl;
- (void)updateSpeedSegmentControl;
- (void)updateSpeedRate:(double)arg1;
- (void)enableMusicButtonIfNeeded;
- (void)updateMusicButton:(id)arg1;
- (double)musicButtonAlpha;
- (struct CGSize)albumButtonImageSize;
- (void)updateAlbumButton:(id)arg1;
- (void)updateFlashButtonVisibility;
- (double)weiboArButtonAlpha;
- (void)enableWeiboArButtonIfNeeded;
- (void)updateArButtonState;
- (void)updateSenseArIcon;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(readonly, nonatomic) _Bool isRecording;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

