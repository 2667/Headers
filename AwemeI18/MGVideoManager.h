//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "MovieRecorderDelegate-Protocol.h"

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, MGMovieRecorder, NSDictionary, NSString;
@protocol MGVideoDelegate, OS_dispatch_queue;

@interface MGVideoManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MovieRecorderDelegate>
{
    AVCaptureConnection *_audioConnection;
    AVCaptureConnection *_videoConnection;
    NSDictionary *_audioCompressionSettings;
    AVCaptureDevice *_videoDevice;
    NSObject<OS_dispatch_queue> *_videoQueue;
    _Bool _videoRecord;
    _Bool _videoSound;
    _Bool _startRecord;
    id <MGVideoDelegate> _videoDelegate;
    long long _videoOrientation;
    AVCaptureSession *_videoSession;
    AVCaptureDeviceInput *_videoInput;
    long long _devicePosition;
    struct opaqueCMFormatDescription *_outputAudioFormatDescription;
    struct opaqueCMFormatDescription *_outputVideoFormatDescription;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    NSString *_sessionPreset;
    NSString *_tempVideoPath;
    MGMovieRecorder *_movieRecorder;
}

+ (_Bool)canUsedCamera;
+ (id)videoPreset:(id)arg1 devicePosition:(long long)arg2 videoRecord:(_Bool)arg3 videoSound:(_Bool)arg4;
@property(nonatomic) _Bool startRecord; // @synthesize startRecord=_startRecord;
@property(nonatomic) _Bool videoSound; // @synthesize videoSound=_videoSound;
@property(nonatomic) _Bool videoRecord; // @synthesize videoRecord=_videoRecord;
@property(retain, nonatomic) MGMovieRecorder *movieRecorder; // @synthesize movieRecorder=_movieRecorder;
@property(copy, nonatomic) NSString *tempVideoPath; // @synthesize tempVideoPath=_tempVideoPath;
@property(copy, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(nonatomic) struct opaqueCMFormatDescription *outputVideoFormatDescription; // @synthesize outputVideoFormatDescription=_outputVideoFormatDescription;
@property(nonatomic) struct opaqueCMFormatDescription *outputAudioFormatDescription; // @synthesize outputAudioFormatDescription=_outputAudioFormatDescription;
@property(readonly, nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(readonly, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(readonly, nonatomic) AVCaptureSession *videoSession; // @synthesize videoSession=_videoSession;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) id <MGVideoDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
- (void).cxx_destruct;
- (void)videoError:(unsigned long long)arg1;
- (void)movieRecorderDidFinishRecording:(id)arg1;
- (void)movieRecorderDidFinishPreparing:(id)arg1;
- (void)movieRecorder:(id)arg1 didFailWithError:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (struct CGAffineTransform)transformFromVideoBufferOrientationToOrientation:(long long)arg1 withAutoMirroring:(_Bool)arg2;
- (void)appendAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setMaxVideoFrame:(long long)arg1 videoDevice:(id)arg2;
- (void)toggleCamera:(id)arg1;
- (id)cameraWithPosition:(long long)arg1;
- (void)initVideoRecord:(struct opaqueCMFormatDescription *)arg1;
- (void)initialSession;
- (id)stopRceording;
- (void)startRecording;
- (void)stopRunning;
- (void)startRunning;
- (id)getVideoQueue;
- (struct opaqueCMFormatDescription *)formatDescription;
- (id)videoPreview;
- (id)initWithPreset:(id)arg1 devicePosition:(long long)arg2 videoRecord:(_Bool)arg3 videoSound:(_Bool)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

