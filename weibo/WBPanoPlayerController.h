//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IJKMPInjectCallbackResponding-Protocol.h"
#import "IJKMediaPlayback-Protocol.h"

@class IJKFFMoviePlayerMessagePool, IJKSDLGLView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIView;
@protocol IJKMediaUrlOpenDelegate;

@interface WBPanoPlayerController : NSObject <IJKMPInjectCallbackResponding, IJKMediaPlayback>
{
    CDStruct_d65360c2 _flags;
    struct IjkMediaPlayer *_mediaPlayer;
    IJKSDLGLView *_glView;
    IJKFFMoviePlayerMessagePool *_msgPool;
    NSString *_urlString;
    NSString *_cacheFileName;
    NSString *_videoKey;
    int _fileSize;
    int _cachedSize;
    int _cachedDuration;
    long long _videoWidth;
    long long _videoHeight;
    long long _sampleAspectRatioNumerator;
    long long _sampleAspectRatioDenominator;
    _Bool _seeking;
    long long _bufferingTime;
    long long _bufferingPosition;
    _Bool _keepScreenOnWhilePlaying;
    _Bool _pauseInBackground;
    _Bool _isVideoToolboxOpen;
    _Bool _playingBeforeInterruption;
    NSMutableArray *_registeredNotifications;
    struct IJKAVInject_AsyncStatistic _asyncStat;
    struct IJKAVInject_AsyncReadSpeed _asyncReadSpeedStartup;
    struct IJKAVInject_AsyncReadSpeed _asyncReadSpeed;
    _Bool _shouldShowHudView;
    NSTimer *_hudTimer;
    unsigned long long _savedCategoryOptions;
    _Bool _isPreparedToPlay;
    _Bool _shouldAutoplay;
    _Bool _allowsMediaAirPlay;
    _Bool _airPlayMediaActive;
    _Bool _isDanmakuMediaAirPlay;
    UIView *_view;
    double currentPlaybackTime;
    double duration;
    double playableDuration;
    long long _bufferingProgress;
    long long _numberOfBytesTransferred;
    long long _playbackState;
    unsigned long long _loadState;
    long long _scalingMode;
    NSDictionary *_mediaMeta;
    NSDictionary *_videoMeta;
    NSDictionary *_audioMeta;
    NSMutableDictionary *_ijkLogDic;
    double _fpsInMeta;
    id <IJKMediaUrlOpenDelegate> _segmentOpenDelegate;
    id <IJKMediaUrlOpenDelegate> _tcpOpenDelegate;
    id <IJKMediaUrlOpenDelegate> _httpOpenDelegate;
    id <IJKMediaUrlOpenDelegate> _liveOpenDelegate;
    struct CGSize _naturalSize;
}

+ (_Bool)checkIfPlayerVersionMatch:(_Bool)arg1 major:(unsigned int)arg2 minor:(unsigned int)arg3 micro:(unsigned int)arg4;
+ (_Bool)checkIfFFmpegVersionMatch:(_Bool)arg1;
+ (void)setLogLevel:(int)arg1;
+ (void)setLogReport:(_Bool)arg1;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> liveOpenDelegate; // @synthesize liveOpenDelegate=_liveOpenDelegate;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> httpOpenDelegate; // @synthesize httpOpenDelegate=_httpOpenDelegate;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> tcpOpenDelegate; // @synthesize tcpOpenDelegate=_tcpOpenDelegate;
@property(retain, nonatomic) id <IJKMediaUrlOpenDelegate> segmentOpenDelegate; // @synthesize segmentOpenDelegate=_segmentOpenDelegate;
@property(readonly, nonatomic) double fpsInMeta; // @synthesize fpsInMeta=_fpsInMeta;
@property(readonly, nonatomic) NSMutableDictionary *ijkLogDic; // @synthesize ijkLogDic=_ijkLogDic;
@property(readonly, nonatomic) NSDictionary *audioMeta; // @synthesize audioMeta=_audioMeta;
@property(readonly, nonatomic) NSDictionary *videoMeta; // @synthesize videoMeta=_videoMeta;
@property(readonly, nonatomic) NSDictionary *mediaMeta; // @synthesize mediaMeta=_mediaMeta;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(readonly, nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) _Bool isPreparedToPlay; // @synthesize isPreparedToPlay=_isPreparedToPlay;
@property(readonly, nonatomic) long long numberOfBytesTransferred; // @synthesize numberOfBytesTransferred=_numberOfBytesTransferred;
@property(readonly, nonatomic) long long bufferingProgress; // @synthesize bufferingProgress=_bufferingProgress;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)resumeIfNeededDueToEnterForeground;
- (void)pauseDueToEnterBackground;
- (void)audioSessionInterrupt:(id)arg1;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)setMaxBufferSize:(int)arg1;
- (void)setPlayerOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setSwsOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setCodecOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setFormatOptionIntValue:(long long)arg1 forKey:(id)arg2;
- (void)setPlayerOptionValue:(id)arg1 forKey:(id)arg2;
- (void)setSwsOptionValue:(id)arg1 forKey:(id)arg2;
- (void)setCodecOptionValue:(id)arg1 forKey:(id)arg2;
- (void)setFormatOptionValue:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool isDanmakuMediaAirPlay; // @synthesize isDanmakuMediaAirPlay=_isDanmakuMediaAirPlay;
@property(readonly, nonatomic) _Bool airPlayMediaActive; // @synthesize airPlayMediaActive=_airPlayMediaActive;
@property(nonatomic) _Bool allowsMediaAirPlay; // @synthesize allowsMediaAirPlay=_allowsMediaAirPlay;
- (id)obtainMessage;
- (void)postEvent:(id)arg1;
@property(nonatomic) float playbackRate;
@property(nonatomic) _Bool shouldShowHudView;
- (void)stopHudTimer;
- (void)startHudTimer;
- (void)refreshHudView;
- (int)respondToIJKMPInjectCallbackWithMessage:(int)arg1 data:(void *)arg2 dataSize:(unsigned long long)arg3;
@property(readonly, nonatomic) double fpsAtOutput;
- (id)thumbnailImageAtCurrentTime;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2;
- (void)changeNaturalSize;
@property(readonly, nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=_naturalSize;
@property(readonly, nonatomic) double playableDuration; // @synthesize playableDuration;
@property(readonly, nonatomic) double duration; // @synthesize duration;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (void)shutdownClose:(id)arg1;
- (void)shutdownWaitStop:(id)arg1;
- (void)shutdown;
- (void)setOptionIntValue:(long long)arg1 forKey:(id)arg2 ofCategory:(int)arg3;
- (void)setOptionValue:(id)arg1 forKey:(id)arg2 ofCategory:(int)arg3;
- (_Bool)isVideoToolboxOpen;
- (void)setPauseInBackground:(_Bool)arg1;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setHudUrl:(id)arg1;
- (void)prepareToPlay;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
- (void)dealloc;
- (void)setScreenOn:(_Bool)arg1;
- (id)initWithContentURLString:(id)arg1 withOptions:(id)arg2;
- (void)getVideoCache;
- (void)setVideoCahce:(id)arg1 withKey:(id)arg2 withFileSize:(unsigned int)arg3 withCachedSize:(unsigned int)arg4 withCachedDuration:(unsigned int)arg5;
- (id)initWithContentURL:(id)arg1 withOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

