//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VideoDelegate-Protocol.h"
#import "YXBGMPlayerDelegate-Protocol.h"
#import "YXGLViewDelegate-Protocol.h"

@class CADisplayLink, MediaDataOperation, NSString, UIView, VideoRecorder, YXAudioUnitCenter, YXGLView, YXSDKBgmPlayer;
@protocol LivePublisherDelegate, OS_dispatch_queue;

@interface YXSDKLivePublisher : NSObject <VideoDelegate, YXGLViewDelegate, YXBGMPlayerDelegate>
{
    YXAudioUnitCenter *audioCenter;
    _Bool _useHardCodec;
    _Bool _m_denoiseEnable;
    _Bool _m_micEnable;
    _Bool _m_camVideoEnable;
    _Bool _m_camAudioEnable;
    _Bool _isPreview;
    _Bool _isStartAudio;
    _Bool _isRebootPublishing;
    _Bool _isStartPublish;
    _Bool _isMirror;
    _Bool _isAudioInterruption;
    _Bool _isMediaDataOut;
    int _sampleRate;
    int _audioBitrate;
    int _aacProfile;
    int _audioChannel;
    int _audioFrameSize;
    int _videoMinBitRate;
    int _videoMaxBitRate;
    int _videoDisPlayWidth;
    int _videoDisPlayHeight;
    int _videoCamptureWidth;
    int _videoCamptureHeight;
    int _videoFps;
    int _videoGop;
    int _avcProfile;
    int _dropFrameSeconds;
    int _scaleW;
    int _scaleH;
    int _overlayX;
    int _overlayY;
    int _camId;
    int _currentStatus;
    int _logLevel;
    id <LivePublisherDelegate> _livePublisherDelegate;
    double _dryWetMix;
    double _gain;
    double _minDelayTime;
    double _maxDelayTime;
    double _decayTimeAt0Hz;
    double _decayTimeAtNyquist;
    double _randomizeReflections;
    CDStruct_4c3fdcdf *_rtmpPublisher;
    VideoRecorder *_videoRecoder;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSString *_rtmpUrl;
    void *_audioConverter;
    struct AVAudioFifo *_audioFifo;
    NSString *_watermarkUrl;
    NSString *_encrykey;
    NSString *_watermarkUrl2;
    UIView *_userPreview;
    YXGLView *_glPreView;
    YXSDKBgmPlayer *_bGMPlayer;
    MediaDataOperation *_mediaDataOp;
    CADisplayLink *_displayLinkAudio;
}

+ (id)getSharedInstance;
@property(retain, nonatomic) CADisplayLink *displayLinkAudio; // @synthesize displayLinkAudio=_displayLinkAudio;
@property(retain, nonatomic) MediaDataOperation *mediaDataOp; // @synthesize mediaDataOp=_mediaDataOp;
@property _Bool isMediaDataOut; // @synthesize isMediaDataOut=_isMediaDataOut;
@property(nonatomic) _Bool isAudioInterruption; // @synthesize isAudioInterruption=_isAudioInterruption;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) int currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain, nonatomic) YXSDKBgmPlayer *bGMPlayer; // @synthesize bGMPlayer=_bGMPlayer;
@property(retain, nonatomic) YXGLView *glPreView; // @synthesize glPreView=_glPreView;
@property(nonatomic) _Bool isMirror; // @synthesize isMirror=_isMirror;
@property(nonatomic) int camId; // @synthesize camId=_camId;
@property(retain, nonatomic) UIView *userPreview; // @synthesize userPreview=_userPreview;
@property(nonatomic) _Bool isStartPublish; // @synthesize isStartPublish=_isStartPublish;
@property(nonatomic) _Bool isRebootPublishing; // @synthesize isRebootPublishing=_isRebootPublishing;
@property(nonatomic) _Bool isStartAudio; // @synthesize isStartAudio=_isStartAudio;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(retain, nonatomic) NSString *watermarkUrl2; // @synthesize watermarkUrl2=_watermarkUrl2;
@property(retain, nonatomic) NSString *encrykey; // @synthesize encrykey=_encrykey;
@property(retain, nonatomic) NSString *watermarkUrl; // @synthesize watermarkUrl=_watermarkUrl;
@property(nonatomic) int overlayY; // @synthesize overlayY=_overlayY;
@property(nonatomic) int overlayX; // @synthesize overlayX=_overlayX;
@property(nonatomic) int scaleH; // @synthesize scaleH=_scaleH;
@property(nonatomic) int scaleW; // @synthesize scaleW=_scaleW;
@property(nonatomic) _Bool m_camAudioEnable; // @synthesize m_camAudioEnable=_m_camAudioEnable;
@property(nonatomic) _Bool m_camVideoEnable; // @synthesize m_camVideoEnable=_m_camVideoEnable;
@property(nonatomic) _Bool m_micEnable; // @synthesize m_micEnable=_m_micEnable;
@property(nonatomic) _Bool m_denoiseEnable; // @synthesize m_denoiseEnable=_m_denoiseEnable;
@property(nonatomic) int dropFrameSeconds; // @synthesize dropFrameSeconds=_dropFrameSeconds;
@property(nonatomic) _Bool useHardCodec; // @synthesize useHardCodec=_useHardCodec;
@property(nonatomic) int avcProfile; // @synthesize avcProfile=_avcProfile;
@property(nonatomic) int videoGop; // @synthesize videoGop=_videoGop;
@property(nonatomic) int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) int videoCamptureHeight; // @synthesize videoCamptureHeight=_videoCamptureHeight;
@property(nonatomic) int videoCamptureWidth; // @synthesize videoCamptureWidth=_videoCamptureWidth;
@property(nonatomic) int videoDisPlayHeight; // @synthesize videoDisPlayHeight=_videoDisPlayHeight;
@property(nonatomic) int videoDisPlayWidth; // @synthesize videoDisPlayWidth=_videoDisPlayWidth;
@property(nonatomic) int videoMaxBitRate; // @synthesize videoMaxBitRate=_videoMaxBitRate;
@property(nonatomic) int videoMinBitRate; // @synthesize videoMinBitRate=_videoMinBitRate;
@property(nonatomic) int audioFrameSize; // @synthesize audioFrameSize=_audioFrameSize;
@property(nonatomic) int audioChannel; // @synthesize audioChannel=_audioChannel;
@property(nonatomic) int aacProfile; // @synthesize aacProfile=_aacProfile;
@property(nonatomic) int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) struct AVAudioFifo *audioFifo; // @synthesize audioFifo=_audioFifo;
@property(nonatomic) void *audioConverter; // @synthesize audioConverter=_audioConverter;
@property(retain, nonatomic) NSString *rtmpUrl; // @synthesize rtmpUrl=_rtmpUrl;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *runQueue; // @synthesize runQueue=_runQueue;
@property(retain, nonatomic) VideoRecorder *videoRecoder; // @synthesize videoRecoder=_videoRecoder;
@property(nonatomic) CDStruct_4c3fdcdf *rtmpPublisher; // @synthesize rtmpPublisher=_rtmpPublisher;
@property(nonatomic) double randomizeReflections; // @synthesize randomizeReflections=_randomizeReflections;
@property(nonatomic) double decayTimeAtNyquist; // @synthesize decayTimeAtNyquist=_decayTimeAtNyquist;
@property(nonatomic) double decayTimeAt0Hz; // @synthesize decayTimeAt0Hz=_decayTimeAt0Hz;
@property(nonatomic) double maxDelayTime; // @synthesize maxDelayTime=_maxDelayTime;
@property(nonatomic) double minDelayTime; // @synthesize minDelayTime=_minDelayTime;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(nonatomic) double dryWetMix; // @synthesize dryWetMix=_dryWetMix;
@property(nonatomic) __weak id <LivePublisherDelegate> livePublisherDelegate; // @synthesize livePublisherDelegate=_livePublisherDelegate;
- (void).cxx_destruct;
- (void)setLoopBgm:(_Bool)arg1;
- (_Bool)capturePicture:(id)arg1;
- (void)onAudioData:(char *)arg1 size:(unsigned int)arg2 withTime:(unsigned int)arg3;
- (int)onGLViewPutVideoDataToEncode:(char *)arg1 size:(int)arg2 pts:(long long)arg3;
- (void)updateAudioData;
- (unsigned int)onGLViewDrawFramePreProcess:(struct __CVBuffer *)arg1 textureId:(unsigned int)arg2 cameraId:(int)arg3 pts:(CDStruct_1b6d18a9)arg4;
- (void)onVideoData:(struct opaqueCMSampleBuffer *)arg1 pts:(long long)arg2;
- (int)setFlashEnable:(_Bool)arg1;
- (int)setMirrorEnable:(_Bool)arg1;
- (int)setCamEnable:(_Bool)arg1;
- (int)stopCaptureVideo;
- (void)reSizePreview:(struct CGRect)arg1;
- (int)startCaptureVideo:(id)arg1 camId:(int)arg2;
- (int)stopCaptureAudio;
- (int)startCaptureAudio;
- (int)setCamAudioEnable:(_Bool)arg1;
- (int)setCamVideoEnable:(_Bool)arg1;
- (int)setEncryKey:(id)arg1;
- (int)setWaterMark:(id)arg1 scaleW:(int)arg2 scaleH:(int)arg3 overlayX:(int)arg4 overlayY:(int)arg5;
- (int)setMicEnable:(_Bool)arg1;
- (void)setConnectMicrophone:(_Bool)arg1;
- (int)setDenoiseEnable:(_Bool)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (int)rtmp_putAudioData:(char **)arg1 sampleCount:(int)arg2;
- (void)setIsMediaDataPutOut:(_Bool)arg1;
- (int)rtmp_putVideoData:(struct __CVBuffer *)arg1 size:(int)arg2;
- (int)stopPublish;
- (int)reBootPublisher;
- (int)startPublishRtmpUrl:(id)arg1;
- (void)sendEncodedVideoData:(char *)arg1 len:(int)arg2 pts:(long long)arg3 key:(int)arg4;
- (void)setVideoSequence:(char *)arg1 spslen:(int)arg2 pps:(char *)arg3 ppslen:(int)arg4;
- (void)setMusicVolume:(int)arg1;
- (void)setMicVolume:(int)arg1;
- (_Bool)isEchoCancellationEnable;
- (void)enableEchoCancellation:(unsigned char)arg1;
- (void)buildAudioPlayer:(id)arg1;
- (void)bgmSetMaxBufferTime:(int)arg1;
- (void)bgmSetBufferTime:(int)arg1;
- (int)getCurrentEventId;
- (void)bgmPlayOrPauseBgm;
- (void)bgmSetPause:(_Bool)arg1;
- (int)bgmGetAudioPlayTime;
- (int)bgmGetAudioStreamDuration;
- (int)bgmStopPlay;
- (int)bgmStartPlay:(id)arg1;
- (int)getCurrentStatus;
- (id)getNetStatistMessage;
- (int)switchCamera;
- (int)stopPreview;
- (void)uninit_RtmpPublisher;
- (int)startPreview:(id)arg1 camId:(int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverUserFrameChange:(id)arg1;
- (void)addObserverUserFrameChange:(id)arg1;
- (void)enableCamptureAudio:(_Bool)arg1;
- (void)CamptureAudioOpenThread:(id)arg1;
- (void)didBecameActive;
- (void)willResignActive;
- (void)enterForeground;
- (void)enterBackground;
- (void)removePublisherObserver;
- (void)removePublisherObserverVideo;
- (void)removePublisherObserverAudio;
- (void)addPublisherObserver;
- (void)addPublisherObserverVideo;
- (void)addPublisherObserverAudio;
- (void)setBlurEffect:(int)arg1;
- (int)init_RtmpPublisher;
- (int)setVideoParamWithDisplaywidth:(int)arg1 displayheight:(int)arg2 camwidth:(int)arg3 camheight:(int)arg4 fps:(int)arg5 gop:(int)arg6 minbitrate:(int)arg7 maxbitrate:(int)arg8 avcProfile:(int)arg9 useHardCodec:(_Bool)arg10 fillmode:(int)arg11;
- (int)setAudioParamWithSampleRate:(int)arg1 bitrate:(int)arg2 aacProfile:(int)arg3 audioChannel:(int)arg4;
- (id)init;
- (void)onBGMPlayerLogCallback:(int)arg1 msg:(id)arg2;
- (void)onBGMPlayerNetStatisticsCallback:(int)arg1 msg:(id)arg2;
- (void)onBGMPlayerEventCallback:(unsigned long long)arg1 msg:(id)arg2;
- (void)writeLog2:(id)arg1;
- (void)onRenderSuccess;
- (void)onGLViewDestory;
- (void)onGLViewCreated;
- (void)dealloc;
- (void)cleanSharedInstance;
- (void)preOperationBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

