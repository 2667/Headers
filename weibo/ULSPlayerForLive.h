//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSTimer, NSURL, UIView;
@protocol ULSPlayerForLiveDelegate;

@interface ULSPlayerForLive : NSObject
{
    id <ULSPlayerForLiveDelegate> _delegate;
    UIView *_playerView;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_paleyerLayer;
    AVPlayerItem *_playerItem;
    NSURL *_url;
    long long _retryCount;
    unsigned long long _playerType;
    NSTimer *_timer;
}

+ (id)playerVersion;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayerLayer *paleyerLayer; // @synthesize paleyerLayer=_paleyerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(readonly, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <ULSPlayerForLiveDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)firstVideoFrame:(id)arg1;
- (void)moviePlayBackStateDidChange:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)loadStateDidChange:(id)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
- (long long)speakDB;
- (void)cancelRetry;
- (void)uls_retry;
- (void)shutdown;
- (void)stop;
- (void)releaseTimer;
- (void)pause;
- (void)play;
- (void)timerAction;
- (void)setupTimer;
- (void)prepareToPlay;
- (void)dealloc;
- (void)removeMovieNotificationObservers;
- (void)installMovieNotificationObservers;
- (void)resetPlayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addVideoKVO;
- (void)resetPlayerNew;
- (id)initWithURL:(id)arg1 playerType:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1;

@end

