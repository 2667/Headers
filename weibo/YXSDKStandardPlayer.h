//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AudioPlayer, MediaDataOperation, NSString, UIView, VideoPlayer, VideoPlayerEx;
@protocol YXSDKStandardPlayerDelegate;

@interface YXSDKStandardPlayer : NSObject
{
    _Bool _isViewShow;
    _Bool _isNeedVideoPlayerSetFrame;
    _Bool _isEnterBackGround;
    _Bool _isAutoTransparentView;
    _Bool _isVrMode;
    _Bool _isMediaDataOut;
    _Bool _isStarting;
    _Bool _isVideoDataOut;
    int _bufferTime;
    int _maxBufferTime;
    int _width;
    int _height;
    int _logcbLevel;
    int _bufTime;
    int _maxBufTime;
    int _renderMode;
    int _controlMode;
    long long _currentEventId;
    id <YXSDKStandardPlayerDelegate> _standardPlayerDelegate;
    CDStruct_b8fde202 *_standardPlayer;
    AudioPlayer *_audioPlayer;
    VideoPlayer *_videoPlayer;
    VideoPlayerEx *_videoPlayerEx;
    NSString *_logFilePath;
    NSString *_playUrlId;
    UIView *_playVideoView;
    NSObject *_audioPlayerObj;
    MediaDataOperation *_mediaDataOp;
}

@property(nonatomic) _Bool isVideoDataOut; // @synthesize isVideoDataOut=_isVideoDataOut;
@property _Bool isStarting; // @synthesize isStarting=_isStarting;
@property _Bool isMediaDataOut; // @synthesize isMediaDataOut=_isMediaDataOut;
@property(nonatomic) _Bool isVrMode; // @synthesize isVrMode=_isVrMode;
@property(nonatomic) int controlMode; // @synthesize controlMode=_controlMode;
@property(nonatomic) int renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) _Bool isAutoTransparentView; // @synthesize isAutoTransparentView=_isAutoTransparentView;
@property _Bool isEnterBackGround; // @synthesize isEnterBackGround=_isEnterBackGround;
@property _Bool isNeedVideoPlayerSetFrame; // @synthesize isNeedVideoPlayerSetFrame=_isNeedVideoPlayerSetFrame;
@property _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
@property(nonatomic) int maxBufTime; // @synthesize maxBufTime=_maxBufTime;
@property(nonatomic) int bufTime; // @synthesize bufTime=_bufTime;
@property(nonatomic) int logcbLevel; // @synthesize logcbLevel=_logcbLevel;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) MediaDataOperation *mediaDataOp; // @synthesize mediaDataOp=_mediaDataOp;
@property(retain) NSObject *audioPlayerObj; // @synthesize audioPlayerObj=_audioPlayerObj;
@property(nonatomic) __weak UIView *playVideoView; // @synthesize playVideoView=_playVideoView;
@property(retain, nonatomic) NSString *playUrlId; // @synthesize playUrlId=_playUrlId;
@property(retain, nonatomic) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property(retain, nonatomic) VideoPlayerEx *videoPlayerEx; // @synthesize videoPlayerEx=_videoPlayerEx;
@property(retain, nonatomic) VideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) AudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) CDStruct_b8fde202 *standardPlayer; // @synthesize standardPlayer=_standardPlayer;
@property(nonatomic) __weak id <YXSDKStandardPlayerDelegate> standardPlayerDelegate; // @synthesize standardPlayerDelegate=_standardPlayerDelegate;
@property(nonatomic) long long currentEventId; // @synthesize currentEventId=_currentEventId;
@property(nonatomic) int maxBufferTime; // @synthesize maxBufferTime=_maxBufferTime;
@property(nonatomic) int bufferTime; // @synthesize bufferTime=_bufferTime;
- (void).cxx_destruct;
- (void)setLogoFlag:(_Bool)arg1;
- (void)setAESDecryptKey:(id)arg1;
- (void)setDecryptKey:(id)arg1;
- (_Bool)isPause;
- (long long)getCurrentTimeStampForSecond;
- (long long)getCurrentTimeStamp;
- (long long)getDurationForSecond;
- (long long)getDuration;
- (int)seekToTime:(CDStruct_1b6d18a9)arg1;
- (int)seek:(float)arg1;
- (int)resumePlay;
- (int)pausePlay;
- (void)setIsMediaDataPutOut:(_Bool)arg1;
- (void)setVideoRenderMode:(int)arg1;
- (long long)getCurrentEventId;
- (int)getBufferLength;
- (void)handleInterruption:(id)arg1;
- (void)setPlayViewAutoTransparent:(_Bool)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setEnableVideo:(_Bool)arg1;
- (void)setEnableAudio:(_Bool)arg1;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (_Bool)isPlaying;
- (int)cleanPlayer;
- (_Bool)startPreparePLay;
- (int)preparePLay:(id)arg1;
- (int)stopPlay;
- (int)startPlayRtmpUrl:(id)arg1;
- (int)updatePlayUrl:(id)arg1;
- (int)startPlay:(id)arg1;
- (void)setAppInfo:(id)arg1 model:(id)arg2 manufacturer:(id)arg3 appVersion:(id)arg4 cpuMhz:(id)arg5 cpuProcessor:(int)arg6 gpuModel:(id)arg7 memCapacity:(int)arg8;
- (id)getPlayUIView;
- (int)setUIViewContentMode:(long long)arg1;
- (int)setUIViewFrame:(struct CGRect)arg1;
- (int)setUIView:(id)arg1 ContentMode:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

