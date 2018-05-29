//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBFAVPlayerItem-Protocol.h"
#import "WBFAssetInternalDelegate-Protocol.h"

@class NSArray, NSError, NSString, WBFAsset;
@protocol WBFPlayerItemInternalDelegate;

@interface WBFPlayerItem : NSObject <WBFAssetInternalDelegate, WBFAVPlayerItem>
{
    double _createAt;
    struct {
        unsigned int buffuring:1;
        unsigned int completeSeekWhenBufferingEnd:1;
    } _flags;
    _Bool _playbackLikelyToKeepUp;
    _Bool _cacheModuleActive;
    long long _status;
    NSError *_error;
    WBFAsset *_asset;
    CDUnknownBlockType _seekCompletion;
    NSArray *_loadedTimeRanges;
    double _startupTime;
    id <WBFPlayerItemInternalDelegate> _internalDelegate;
    struct CGSize _presentationSize;
    CDStruct_1b6d18a9 _loadedTimeDuration;
}

+ (id)playbackDidReachEndTimeNotificationName;
+ (id)playbackStalledNotificationName;
@property(nonatomic) __weak id <WBFPlayerItemInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) _Bool cacheModuleActive; // @synthesize cacheModuleActive=_cacheModuleActive;
@property(nonatomic) double startupTime; // @synthesize startupTime=_startupTime;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property CDStruct_1b6d18a9 loadedTimeDuration; // @synthesize loadedTimeDuration=_loadedTimeDuration;
@property(retain) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
@property(copy, nonatomic) CDUnknownBlockType seekCompletion; // @synthesize seekCompletion=_seekCompletion;
@property(retain, nonatomic) WBFAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)asset:(id)arg1 didUpdateVideoSize:(struct CGSize)arg2;
- (void)_completeSeeking;
- (void)assetDidCompleteSeeking:(id)arg1;
- (void)assetDidUpdatePlaybackState:(id)arg1;
- (void)updateTimeRangesWithBufferedTime:(float)arg1;
- (void)asset:(id)arg1 didUpdateBufferedTime:(float)arg2;
- (void)assetDidRenderFirstVideoFrame:(id)arg1;
- (void)assetLikelyToKeepUp:(id)arg1;
- (void)assetDidStall:(id)arg1;
- (void)assetDidPlayToEnd:(id)arg1;
- (void)asset:(id)arg1 didGetNonFatalError:(id)arg2;
- (void)asset:(id)arg1 didGetFatalError:(id)arg2;
- (void)assetReadyToPlay:(id)arg1;
- (void)asset:(id)arg1 didUpdateCacheActiveState:(_Bool)arg2;
- (void)tryTransitionToStatus:(long long)arg1;
- (_Bool)canTransitionToStatus:(long long)arg1;
- (id)errorLog;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_finishCurrentSeekingWithResult:(_Bool)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic, getter=isSeeking) _Bool seeking;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (double)_durationSec;
- (CDStruct_1b6d18a9)currentTime;
@property(readonly, nonatomic) double createAt;
- (id)initWithAsset:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

