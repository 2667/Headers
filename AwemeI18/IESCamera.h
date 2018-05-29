//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSGLFilterEffectDelegate-Protocol.h"
#import "HTSMediaExportable-Protocol.h"
#import "HTSMediaMixPlayerDelegate-Protocol.h"

@class HTSCameraConfiguration, HTSCameraKit, HTSCameraWriter, HTSGLCropFilter, HTSGLFilter, HTSGLFilterInput, HTSGLFilterNewEffect, HTSGLPreview, HTSMediaExporter, HTSMediaMixPlayer, HTSRawDataOutputRender, HTSVideoData, NSMutableArray, NSString, NSTimer, UIButton;
@protocol IESCameraDelegate, OS_dispatch_queue;

@interface IESCamera : NSObject <HTSMediaMixPlayerDelegate, HTSGLFilterEffectDelegate, HTSMediaExportable>
{
    void *operationQueueKey;
    _Bool _highFrameRateEnable;
    _Bool _needsMirrorFrontCameraOutPut;
    _Bool _isTorchEnable;
    _Bool _torchOn;
    _Bool _isFlashEnable;
    _Bool _enableTapFocus;
    _Bool _enableTapexposure;
    _Bool _isViewOnPresent;
    _Bool _noneedProcessAudio;
    _Bool _disableMotionDectection;
    _Bool _enableInvisibleWatermark;
    _Bool _forbidVideoRecord;
    _Bool _forceRecordAudio;
    _Bool _isStoryMode;
    _Bool _enterBackground;
    _Bool _initSuccess;
    _Bool _isAudioPlayerEnd;
    _Bool _shouldReplay;
    _Bool _captureImageProcessed;
    _Bool _isVideoRecorded;
    _Bool _isFlashMode;
    _Bool _shouldCaptureImage;
    HTSMediaExporter *mediaExporter;
    unsigned long long _frameRate;
    id <IESCameraDelegate> _delegate;
    long long _cameraMode;
    long long _defaultCamera;
    long long _previewModeType;
    long long _cameraFlashMode;
    long long _cameraStablizationMode;
    long long _status;
    NSObject<OS_dispatch_queue> *_operationQueue;
    CDUnknownBlockType _IESStickerStatusBlock;
    CDUnknownBlockType _videoProcessingCompletionCallback;
    unsigned long long _currFilterType;
    double _currentPlayerTime;
    unsigned long long _previewFrameRate;
    long long _photoPreset;
    CDUnknownBlockType _faceInfoBlock;
    double _audioPlayerStartedTime;
    double _maxAcceleration;
    double _videoRecordStartTime;
    double _recordRate;
    struct __CVBuffer *_captureImageBuffer;
    unsigned long long _beautifyType;
    unsigned long long _filterType;
    unsigned long long _captureImageStatus;
    long long _recordStatus;
    HTSVideoData *_videoData;
    HTSCameraKit *_videoCamera;
    HTSCameraConfiguration *_cameraConfigure;
    HTSGLPreview *_videoPreviewView;
    HTSGLCropFilter *_cropFilter;
    HTSCameraWriter *_videoWriter;
    HTSMediaMixPlayer *_player;
    HTSGLFilter *_outputFilter;
    HTSGLFilterInput *_htsGLInput;
    HTSGLFilterNewEffect *_effectNewFilter;
    HTSRawDataOutputRender *_captureImageFilter;
    NSTimer *_motionDetectTimer;
    UIButton *_fakeBtn;
    NSMutableArray *_observerArray;
    id _audioPlayerObserve;
    id _audioInterruptObserver;
    HTSGLFilter *_watermarkFilter;
    HTSRawDataOutputRender *_frameBufferOutputFilter;
    struct opaqueCMSampleBuffer *_stillImageSampleBuff;
    unsigned long long _processImageStatus;
    struct CGSize _outputSize;
    struct CGSize _captureSize;
    struct IESIndensityParam_t _beautyIndensity;
    CDStruct_1b6d18a9 _timeOffset;
}

+ (void)conbineVideoAndAudioURL:(id)arg1 andAudioUrl:(id)arg2 withCompletBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)conbineVideoAndAudioStr:(id)arg1 andAudio:(id)arg2 withCompletBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)exportVideoWithVideoData:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long processImageStatus; // @synthesize processImageStatus=_processImageStatus;
@property(nonatomic) struct opaqueCMSampleBuffer *stillImageSampleBuff; // @synthesize stillImageSampleBuff=_stillImageSampleBuff;
@property(nonatomic) _Bool shouldCaptureImage; // @synthesize shouldCaptureImage=_shouldCaptureImage;
@property(nonatomic) _Bool isFlashMode; // @synthesize isFlashMode=_isFlashMode;
@property(retain, nonatomic) HTSRawDataOutputRender *frameBufferOutputFilter; // @synthesize frameBufferOutputFilter=_frameBufferOutputFilter;
@property(retain, nonatomic) HTSGLFilter *watermarkFilter; // @synthesize watermarkFilter=_watermarkFilter;
@property(retain, nonatomic) id audioInterruptObserver; // @synthesize audioInterruptObserver=_audioInterruptObserver;
@property(retain, nonatomic) id audioPlayerObserve; // @synthesize audioPlayerObserve=_audioPlayerObserve;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) UIButton *fakeBtn; // @synthesize fakeBtn=_fakeBtn;
@property(retain, nonatomic) NSTimer *motionDetectTimer; // @synthesize motionDetectTimer=_motionDetectTimer;
@property(retain, nonatomic) HTSRawDataOutputRender *captureImageFilter; // @synthesize captureImageFilter=_captureImageFilter;
@property(retain, nonatomic) HTSGLFilterNewEffect *effectNewFilter; // @synthesize effectNewFilter=_effectNewFilter;
@property(retain, nonatomic) HTSGLFilterInput *htsGLInput; // @synthesize htsGLInput=_htsGLInput;
@property(retain, nonatomic) HTSGLFilter *outputFilter; // @synthesize outputFilter=_outputFilter;
@property(retain, nonatomic) HTSMediaMixPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) HTSCameraWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(retain, nonatomic) HTSGLCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(retain, nonatomic) HTSGLPreview *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) HTSCameraConfiguration *cameraConfigure; // @synthesize cameraConfigure=_cameraConfigure;
@property(retain, nonatomic) HTSCameraKit *videoCamera; // @synthesize videoCamera=_videoCamera;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) struct IESIndensityParam_t beautyIndensity; // @synthesize beautyIndensity=_beautyIndensity;
@property(nonatomic) long long recordStatus; // @synthesize recordStatus=_recordStatus;
@property(nonatomic) unsigned long long captureImageStatus; // @synthesize captureImageStatus=_captureImageStatus;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) unsigned long long beautifyType; // @synthesize beautifyType=_beautifyType;
@property(nonatomic) struct __CVBuffer *captureImageBuffer; // @synthesize captureImageBuffer=_captureImageBuffer;
@property(nonatomic) double recordRate; // @synthesize recordRate=_recordRate;
@property(nonatomic) struct CGSize captureSize; // @synthesize captureSize=_captureSize;
@property double videoRecordStartTime; // @synthesize videoRecordStartTime=_videoRecordStartTime;
@property _Bool isVideoRecorded; // @synthesize isVideoRecorded=_isVideoRecorded;
@property(nonatomic) double maxAcceleration; // @synthesize maxAcceleration=_maxAcceleration;
@property(nonatomic) double audioPlayerStartedTime; // @synthesize audioPlayerStartedTime=_audioPlayerStartedTime;
@property(nonatomic) _Bool captureImageProcessed; // @synthesize captureImageProcessed=_captureImageProcessed;
@property(nonatomic) _Bool shouldReplay; // @synthesize shouldReplay=_shouldReplay;
@property(nonatomic) _Bool isAudioPlayerEnd; // @synthesize isAudioPlayerEnd=_isAudioPlayerEnd;
@property(nonatomic) _Bool initSuccess; // @synthesize initSuccess=_initSuccess;
@property(nonatomic) _Bool enterBackground; // @synthesize enterBackground=_enterBackground;
@property(copy, nonatomic) CDUnknownBlockType faceInfoBlock; // @synthesize faceInfoBlock=_faceInfoBlock;
@property(nonatomic) long long photoPreset; // @synthesize photoPreset=_photoPreset;
@property(nonatomic) _Bool isStoryMode; // @synthesize isStoryMode=_isStoryMode;
@property(nonatomic) unsigned long long previewFrameRate; // @synthesize previewFrameRate=_previewFrameRate;
@property(nonatomic) double currentPlayerTime; // @synthesize currentPlayerTime=_currentPlayerTime;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) _Bool forceRecordAudio; // @synthesize forceRecordAudio=_forceRecordAudio;
@property(nonatomic) _Bool forbidVideoRecord; // @synthesize forbidVideoRecord=_forbidVideoRecord;
@property(nonatomic) unsigned long long currFilterType; // @synthesize currFilterType=_currFilterType;
@property(copy, nonatomic) CDUnknownBlockType videoProcessingCompletionCallback; // @synthesize videoProcessingCompletionCallback=_videoProcessingCompletionCallback;
@property(copy, nonatomic) CDUnknownBlockType IESStickerStatusBlock; // @synthesize IESStickerStatusBlock=_IESStickerStatusBlock;
@property(readonly, nonatomic) _Bool enableInvisibleWatermark; // @synthesize enableInvisibleWatermark=_enableInvisibleWatermark;
@property(nonatomic) CDStruct_1b6d18a9 timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) _Bool disableMotionDectection; // @synthesize disableMotionDectection=_disableMotionDectection;
@property(nonatomic) _Bool noneedProcessAudio; // @synthesize noneedProcessAudio=_noneedProcessAudio;
@property(nonatomic) _Bool isViewOnPresent; // @synthesize isViewOnPresent=_isViewOnPresent;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool enableTapexposure; // @synthesize enableTapexposure=_enableTapexposure;
@property(nonatomic) _Bool enableTapFocus; // @synthesize enableTapFocus=_enableTapFocus;
@property(nonatomic) long long cameraStablizationMode; // @synthesize cameraStablizationMode=_cameraStablizationMode;
@property(nonatomic) long long cameraFlashMode; // @synthesize cameraFlashMode=_cameraFlashMode;
@property(readonly, nonatomic) _Bool isFlashEnable; // @synthesize isFlashEnable=_isFlashEnable;
@property(nonatomic, getter=isTorchOn) _Bool torchOn; // @synthesize torchOn=_torchOn;
@property(readonly, nonatomic) _Bool isTorchEnable; // @synthesize isTorchEnable=_isTorchEnable;
@property(nonatomic) _Bool needsMirrorFrontCameraOutPut; // @synthesize needsMirrorFrontCameraOutPut=_needsMirrorFrontCameraOutPut;
@property(nonatomic) long long previewModeType; // @synthesize previewModeType=_previewModeType;
@property(nonatomic) long long defaultCamera; // @synthesize defaultCamera=_defaultCamera;
@property(nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) __weak id <IESCameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HTSMediaExporter *mediaExporter; // @synthesize mediaExporter;
- (void).cxx_destruct;
- (_Bool)updatFaceDectectIntervalTime:(int)arg1;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handlePanEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp;
- (_Bool)handleTouchDown;
- (_Bool)getSLAMPlaneDetectStatus;
- (_Bool)isSLAMRunning;
- (long long)getSLAMStatus;
- (void)filterEffectFrameUpdated;
- (void)showsWaterMark:(_Bool)arg1 withImages:(id)arg2 atPoint:(struct CGPoint)arg3 targetSize:(struct CGSize)arg4;
- (void)mediaMixPlayer:(id)arg1 didResetItem:(id)arg2;
- (void)mediaMixPlayer:(id)arg1 willResetItem:(id)arg2;
- (struct CGRect)cropRegionForOutputSize:(struct CGSize)arg1;
- (void)handleTapOnPreviewView:(id)arg1;
- (void)initVideoWriter;
- (void)initProcessList;
- (void)addPreViewToCamera:(id)arg1;
- (void)switchAudioMode:(long long)arg1;
- (void)removePlayer;
@property(readonly, nonatomic) HTSMediaMixPlayer *mixPlayer; // @dynamic mixPlayer;
@property(readonly, nonatomic) unsigned long long fragmentCount; // @dynamic fragmentCount;
@property(nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
- (void)setBitRate:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isCameraStablizationSupport;
- (void)setDropFrame:(_Bool)arg1;
- (id)fetchCaptureImage;
- (void)captureSourcePhotoAsImageWithCompletionHandler:(CDUnknownBlockType)arg1 afterProcess:(_Bool)arg2;
- (void)captureSourcePhotoAsImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)captureStillImage:(CDUnknownBlockType)arg1;
- (id)fixOrientation:(id)arg1;
- (void)removeAllVideoFragments;
- (void)removeLastVideoFragment;
- (void)tapAtPoint:(struct CGPoint)arg1;
- (void)setFocusPoint:(struct CGPoint)arg1;
- (double)getTotalDuration;
- (void)cancelVideoRecord;
- (void)pauseVideoRecord;
- (void)startVideoRecordWithRate:(double)arg1 delayTime:(unsigned long long)arg2;
- (void)startVideoRecordWithRate:(double)arg1;
- (void)cancelVideoRecordReady;
- (id)videoRecordready;
- (void)reSyncAudioProgress;
- (void)addAudioPlayerObserver;
- (void)runInOperationQueue:(CDUnknownBlockType)arg1;
- (void)fakeUpdateUI;
- (id)getFilterPathWithType:(unsigned long long)arg1;
- (void)postProcessBeautyLevel;
- (void)applyFilter:(unsigned long long)arg1;
- (void)applyEffect:(unsigned long long)arg1;
- (void)applyEffect:(unsigned long long)arg1 withPresetAudioVolumes:(id)arg2;
- (void)setReshapeLevel:(long long)arg1;
- (void)setBeautifyLevel:(long long)arg1;
- (void)applyBeautify:(unsigned long long)arg1 indensity:(struct IESIndensityParam_t)arg2;
- (void)setFaceDetectStatusBlock:(CDUnknownBlockType)arg1;
- (void)switchFilterWithPathOne:(id)arg1 PathTwo:(id)arg2 direction:(unsigned long long)arg3 progress:(double)arg4;
- (void)switchFilterWithType:(unsigned long long)arg1 TypeTwo:(unsigned long long)arg2 direction:(unsigned long long)arg3 progress:(double)arg4;
- (void)switchFilterWithType:(unsigned long long)arg1 TypeTwo:(unsigned long long)arg2 progress:(double)arg3;
- (void)applyReshape:(id)arg1 withIndensity:(struct IESIndensityParam_t)arg2;
- (void)applyIndensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2 enableFakeFace:(_Bool)arg3;
- (void)applyEffect:(id)arg1 type:(long long)arg2;
- (_Bool)suggestDoNotApplyFilter:(unsigned long long)arg1;
- (void)setframeRate:(unsigned long long)arg1;
- (long long)currCameraPosition;
- (void)switchCameraSource;
- (void)stopAudioCapture;
- (void)stopVideoCapture;
- (void)releasePreviewFrameBufferIfNeeded;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (id)resetPreviewView:(id)arg1;
- (void)enablePreview;
- (void)startVideoCapture;
- (void)startAudioCapture;
- (void)storyStartVideoCapture;
- (void)setRecordSpeed:(double)arg1;
@property(nonatomic) _Bool highFrameRateEnable; // @synthesize highFrameRateEnable=_highFrameRateEnable;
- (void)motionDetectRun;
- (void)stopMotionDetect;
- (void)startMotionDetect;
- (void)releaseEffectManager;
- (void)dealloc;
- (void)changeSessionPresetAndOutputSize:(id)arg1 andOutputSize:(struct CGSize)arg2;
- (void)resetPreviewWithView:(id)arg1 previewType:(long long)arg2;
- (void)trackRecordParam;
- (id)initWithView:(id)arg1 previewType:(long long)arg2 videoData:(id)arg3 TTFaceDetectEnable:(_Bool)arg4 stickerDocumentPath:(id)arg5;
- (id)initWithView:(id)arg1 videoData:(id)arg2 TTFaceDetectEnable:(_Bool)arg3 stickerDocumentPath:(id)arg4;
- (_Bool)exportVideoToAlbumWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)exportVideoWithMicMuted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)awe_stopVideoCapture;
- (void)awe_startVideoCapture;
- (void)awe_applyReshapeLevel:(long long)arg1;
- (void)awe_applySmoothLevel:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

