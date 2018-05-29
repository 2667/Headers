//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, UIImageView, UIView, WBMediaLivePublisherVideoConfiguration;
@protocol OS_dispatch_queue, WBMediaLivePublisherCapturerDelegate;

@interface WBMediaLivePublisherCapturer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, CAAnimationDelegate>
{
    _Bool _mirrorEnabled;
    _Bool _capturing;
    _Bool _inBackground;
    float _videoZoomFactor;
    NSObject<OS_dispatch_queue> *_sampleBufferCallbackQueue;
    UIView *_previewView;
    long long _devicePosition;
    id <WBMediaLivePublisherCapturerDelegate> _delegate;
    WBMediaLivePublisherVideoConfiguration *_videoConfiguration;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIImageView *_borderView;
}

@property _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) UIImageView *borderView; // @synthesize borderView=_borderView;
@property _Bool capturing; // @synthesize capturing=_capturing;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) WBMediaLivePublisherVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property __weak id <WBMediaLivePublisherCapturerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(nonatomic) _Bool mirrorEnabled; // @synthesize mirrorEnabled=_mirrorEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue; // @synthesize sampleBufferCallbackQueue=_sampleBufferCallbackQueue;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)updateVideoOutOrientation;
- (void)updateVideoMirror;
- (id)getVideoDeviceWithPosition:(long long)arg1;
- (void)showFocusViewInView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(readonly, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void)resetVideoConfiguration:(id)arg1;
@property(nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
- (void)focusOnPointOfInterest:(struct CGPoint)arg1 relativeTo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)switchCameraPosition;
- (void)stopCapture;
- (void)startCapture;
- (void)stopPreview;
- (void)startPreview;
- (id)initWithVideoConfiguration:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

