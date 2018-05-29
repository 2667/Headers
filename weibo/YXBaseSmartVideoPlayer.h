//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, NSString;
@protocol BaseSmartVideoPlayerDelegate;

@interface YXBaseSmartVideoPlayer : UIView
{
    _Bool _enableAutoPlay;
    _Bool _playing;
    _Bool _scrubbing;
    _Bool _seeking;
    _Bool _shouldPlayAfterScrubbing;
    _Bool _isStoped;
    _Bool _isLoading;
    float _playableBufferLength;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    id <BaseSmartVideoPlayerDelegate> _delegate;
    NSString *_currentFlag;
    id _avplayerEndTimeObserver;
    id _avplayerTimeObserver;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isStoped; // @synthesize isStoped=_isStoped;
@property(retain, nonatomic) id avplayerTimeObserver; // @synthesize avplayerTimeObserver=_avplayerTimeObserver;
@property(retain, nonatomic) id avplayerEndTimeObserver; // @synthesize avplayerEndTimeObserver=_avplayerEndTimeObserver;
@property(nonatomic) float playableBufferLength; // @synthesize playableBufferLength=_playableBufferLength;
@property(nonatomic) _Bool shouldPlayAfterScrubbing; // @synthesize shouldPlayAfterScrubbing=_shouldPlayAfterScrubbing;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) NSString *currentFlag; // @synthesize currentFlag=_currentFlag;
@property(nonatomic) _Bool enableAutoPlay; // @synthesize enableAutoPlay=_enableAutoPlay;
@property(nonatomic) id <BaseSmartVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)dealloc;
- (float)calcLoadedDuration;
- (void)removePlayerItemObservers:(id)arg1;
- (void)removeObserverForPlayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addPlayerItemObservers:(id)arg1;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)didBecameActive;
- (void)willResignActive;
- (void)addPlayerObserver;
- (_Bool)goodRectToPlay;
- (void)playerDoubleTapped;
- (void)playerTapped;
- (void)addTapGesture;
- (void)updateProgressWithCurrent:(double)arg1 duration:(double)arg2;
- (void)addProgressObserver;
- (void)resetAudioSession;
- (void)setVideoPath:(id)arg1;
- (void)playItWhenNotStopped:(id)arg1;
- (void)setVideoUrl:(id)arg1;
- (id)buildIdendity;
- (void)stopSeeking;
- (void)stopScrubbing;
- (void)scrub:(CDStruct_1b6d18a9)arg1;
- (void)startScrubbing;
- (void)stopCurrentPlayItem;
- (void)resetFrame:(struct CGRect)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)doPlayOrPause;
- (_Bool)isPlaying;
- (void)forcePlay;
- (void)forcePause;
- (void)stop;
- (void)restart;
- (void)pause;
- (void)play;
- (void)forceReplay;
- (void)setVideoGravity:(id)arg1;
@property(readonly, nonatomic) _Bool isAppBackgroundMode;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

