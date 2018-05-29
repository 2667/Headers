//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "AVCamCaptureManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVCamCaptureManager, CADisplayLink, CLLocation, CLLocationManager, CMMotionManager, NSDate, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, VolumeListener, WBAssetPickerContextSetting, WBVideoCapturePreviewView, WBVideoCaptureToolBar, WBVideoProgressView, WBZoomButton;
@protocol WBCustomImagePickerViewControllerDelegate;

@interface WBCustomImagePickerViewController : WBViewController <AVCamCaptureManagerDelegate, UIGestureRecognizerDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    UIButton *flashBtn;
    UILabel *topLabel;
    UIButton *cameraDevice;
    UIButton *stillButton;
    UIButton *albumButton;
    UIButton *cancelButton;
    UIButton *nextButton;
    UIButton *deleteButton;
    WBZoomButton *zoomButton;
    VolumeListener *volumeListener;
    UIImageView *borderView;
    double currentScaleFactor;
    UIImageView *shutterTopView;
    UIImageView *shutterBottomView;
    CMMotionManager *motionManager;
    long long orientationLast;
    UIView *headerBackgroundView;
    UIImageView *videoPreviewMaskView_;
    int flashMode;
    UILongPressGestureRecognizer *longPressGesture;
    UITapGestureRecognizer *tapGesture;
    NSMutableArray *videoClips;
    WBVideoProgressView *progressView;
    NSString *videoFinalPath_;
    UIButton *photoButton;
    UIButton *videoButton;
    UIImageView *selectedView;
    UISwipeGestureRecognizer *leftSwipeGesture;
    UISwipeGestureRecognizer *rightSwipeGesture;
    _Bool isSiwtching;
    UIView *leftPaddingView;
    UIView *rightPaddingview;
    _Bool _isShowAlbumButton;
    _Bool _allowsGeoLocating;
    _Bool _isVideoMode;
    _Bool _isSwitchModeEnabled;
    _Bool _isAsyncCapture;
    WBAssetPickerContextSetting *_contextSetting;
    id <WBCustomImagePickerViewControllerDelegate> _pickerDelegate;
    CLLocation *_currentLocation;
    WBVideoCaptureToolBar *_footerToolbar;
    UIImageView *_titlebarBackgroundView;
    long long _captureDevicePosition;
    double _maximumVideoCaptureDuration;
    AVCamCaptureManager *_captureManager;
    WBVideoCapturePreviewView *_videoPreviewView;
    CADisplayLink *_displayLink;
    NSDate *_recordingStartDate;
    double _lastVideoDuration;
}

@property(nonatomic) double lastVideoDuration; // @synthesize lastVideoDuration=_lastVideoDuration;
@property(retain, nonatomic) NSDate *recordingStartDate; // @synthesize recordingStartDate=_recordingStartDate;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) WBVideoCapturePreviewView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) AVCamCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(nonatomic) double maximumVideoCaptureDuration; // @synthesize maximumVideoCaptureDuration=_maximumVideoCaptureDuration;
@property(nonatomic) long long captureDevicePosition; // @synthesize captureDevicePosition=_captureDevicePosition;
@property(nonatomic) _Bool isAsyncCapture; // @synthesize isAsyncCapture=_isAsyncCapture;
@property(nonatomic) _Bool isSwitchModeEnabled; // @synthesize isSwitchModeEnabled=_isSwitchModeEnabled;
@property(nonatomic) _Bool isVideoMode; // @synthesize isVideoMode=_isVideoMode;
@property(readonly, nonatomic) UIImageView *titlebarBackgroundView; // @synthesize titlebarBackgroundView=_titlebarBackgroundView;
@property(readonly, nonatomic) WBVideoCaptureToolBar *footerToolbar; // @synthesize footerToolbar=_footerToolbar;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) _Bool allowsGeoLocating; // @synthesize allowsGeoLocating=_allowsGeoLocating;
@property(nonatomic) __weak id <WBCustomImagePickerViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(nonatomic) _Bool isShowAlbumButton; // @synthesize isShowAlbumButton=_isShowAlbumButton;
@property(retain, nonatomic) WBAssetPickerContextSetting *contextSetting; // @synthesize contextSetting=_contextSetting;
- (void).cxx_destruct;
- (id)videoFinalPath;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)isStatusBarHiddenInViewController;
- (void)updateOrientation;
- (void)captureStillImage:(id)arg1;
- (void)restoreDeleteStatus;
- (void)resetUIWithRecording:(_Bool)arg1;
- (void)longPressed:(id)arg1;
- (void)videoTapped:(id)arg1;
- (void)handleLeftSwipeGesture:(id)arg1;
- (void)handleRightSwipeGesture:(id)arg1;
- (void)videoButtonTapped:(id)arg1;
- (void)photoButtonTapped:(id)arg1;
- (void)updateControlsWithCurrentCaptureDeviceState;
- (void)toggleCameraAnimated:(_Bool)arg1;
- (void)toggleCamera:(id)arg1;
- (void)switchButtonTapped;
- (void)deleteButtonTapped:(id)arg1;
- (void)deleteButtonLongPressed:(id)arg1;
- (void)flashButtonPressed:(id)arg1;
- (void)albumItemAction:(id)arg1;
- (id)videoPathsArray;
- (void)nextButtonTapped:(id)arg1;
- (void)dismissContinousAlertView;
- (void)updateAlertViewWithImageName:(id)arg1;
- (void)showContinousAlertViewWithImageName:(id)arg1;
- (void)showAlertViewWithImageName:(id)arg1 force:(_Bool)arg2;
- (void)showNormalHelpViewWithImageName:(id)arg1 frame:(struct CGRect)arg2;
- (void)showAlertViewWithImageName:(id)arg1;
- (void)cleanVideoClips:(id)arg1;
- (void)cancelItemAction:(id)arg1;
- (void)refreshProgressView;
- (double)recordDuration;
- (void)configflashMode;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)dismissViewControllerAnimated:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openShutterWithDuration:(double)arg1 delay:(double)arg2 AnimationBlock:(CDUnknownBlockType)arg3;
- (void)openShutterWithAnimationBlock:(CDUnknownBlockType)arg1;
- (void)closeShutterWithDuration:(double)arg1 andAnimationBlock:(CDUnknownBlockType)arg2;
- (void)closeShutterWithAnimationBlock:(CDUnknownBlockType)arg1;
- (void)loadToolbar;
- (double)getDeleteButtonSize;
- (double)getStillButtonWidth;
- (double)getAlbumButtonWidth;
- (double)getAlbumButtonRightMargin;
- (void)resetStillButtonAnimated:(_Bool)arg1;
- (void)resetStillButton;
- (void)loadPreviewLayer;
- (void)loadManager;
- (void)loadHeaderView;
- (void)loadCenterView;
- (void)viewWillLayoutSubviews;
- (void)orientationChanged:(id)arg1;
- (void)viewDidLoad;
- (void)handlePinchGesture:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateVideoPreviewTransform:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)hidenCameraZoomButtonWhenIdel;
- (void)stopVideoRecording;
- (void)startVideoRecording;
- (void)resumeCaptureSession;
- (void)pauseCaptureSession;
- (_Bool)setupAndConfigureCaptureSession;
- (void)zoomCameraWithFactor:(double)arg1;
- (void)volumeChanged:(id)arg1;
- (void)volumeListener_onOff:(_Bool)arg1;
- (void)updateButtonStates;
- (void)tapToContinouslyAutoFocus:(id)arg1;
- (void)tapToAutoFocus:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addApertureViewAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1;
- (void)captureManagerDeviceConfigurationChanged:(id)arg1;
- (void)captureManagerRecordingFinished:(id)arg1;
- (void)captureManagerRecordingBegan:(id)arg1;
- (void)captureManager:(id)arg1 didFailWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

