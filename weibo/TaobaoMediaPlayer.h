//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface TaobaoMediaPlayer : NSObject
{
    struct MPlayer *mPlayer;
    UIView *mView;
    UIView *mParentView;
    struct MPlayerHandler *mHandler;
    NSString *mSourceURL;
    int mSoftDecode;
    CDUnknownBlockType _dataBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dataBlock; // @synthesize dataBlock=_dataBlock;
- (void).cxx_destruct;
- (id)snapshot;
- (void)setCirclePlay:(_Bool)arg1;
- (void)setTempo:(double)arg1;
- (void)setPlayingDownloadConfig:(id)arg1 maxSaveDirSize:(long long)arg2 maxVideoDuration:(int)arg3;
- (void)setCanPlayingDownload:(_Bool)arg1;
- (id)getPropertyString:(int)arg1 defaultValue:(id)arg2;
- (long long)getPropertyLong:(int)arg1 defaultValue:(long long)arg2;
- (double)getPropertyDouble:(int)arg1 defaultValue:(double)arg2;
- (void)dealloc;
- (void)destory;
- (void)setDropBufferDuration:(int)arg1;
- (void)setScalingMode:(int)arg1;
- (void)setPrintLog:(_Bool)arg1;
- (void)setMuteMode:(_Bool)arg1;
- (void)setTimeout:(int)arg1;
- (int)getLivePlayer;
- (void)setLivePlayer:(int)arg1;
- (int)getHeight;
- (int)getWidth;
- (double)getCurrentPosition;
- (double)getBufferingPosition;
- (double)getDuration;
- (void)seekToAccurate:(double)arg1;
- (void)seekTo:(double)arg1;
- (void)pause;
- (void)stop;
- (void)play;
- (void)prepareToPlay:(id)arg1 videoKey:(id)arg2 circleCount:(int)arg3;
- (void)setParentView:(id)arg1;
- (_Bool)isPlaying;
- (void)setCanSoftDecode:(_Bool)arg1;
- (struct MPlayer *)getPlayer;
- (void)pausedShowFrame;
- (void)create:(id)arg1;

@end

