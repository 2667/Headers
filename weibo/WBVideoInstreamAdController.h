//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBVideoPlayerControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableIndexSet, NSString, UIView, WBVideoInstreamAdItem, WBVideoInstreamAdPlaybackController, WBVideoItem, WBVideoPlayerController;
@protocol WBVideoInstreamAdControllerDelegate, WBVideoPlayerSourceView;

@interface WBVideoInstreamAdController : NSObject <WBVideoPlayerControllerDelegate>
{
    double _hostPlayerTime;
    double _hostVideoDuration;
    double _nextMidrollTime;
    WBVideoInstreamAdItem *_currentItem;
    struct {
        unsigned int didStart:1;
        unsigned int didFinish:1;
        unsigned int didUpdatePhase:1;
    } _delegateHas;
    struct {
        unsigned int userSeeking:1;
    } _flags;
    struct {
        double nextAdGroupTime;
        _Bool nextAdInGroup;
        double currentAdDuration;
    } _preBuffering;
    _Bool _hostPlaybackPaused;
    _Bool _playbackOnlyWhenPrebufferingReady;
    WBVideoPlayerController *_hostPlayerController;
    WBVideoItem *_hostVideoItem;
    id <WBVideoInstreamAdControllerDelegate> _delegate;
    long long _phase;
    double _countDownLabelFontSize;
    NSMutableArray *_preRollItems;
    NSMutableArray *_midRollItems;
    NSMutableArray *_postRollItems;
    WBVideoInstreamAdItem *_immediatePlaybackAdItem;
    NSMutableIndexSet *_midRollSeconds;
    WBVideoInstreamAdPlaybackController *_currentPlaybackController;
    WBVideoInstreamAdPlaybackController *_prebufferingPlaybackController;
    UIView<WBVideoPlayerSourceView> *_sourceView;
    long long _instreamPlaybackState;
    NSString *_itemUniqueKeyPrefix;
    struct CGSize _countDownLabelPositionOffset;
}

+ (id)_playToEndTimesMap;
+ (void)_testItemReset;
@property(retain, nonatomic) NSString *itemUniqueKeyPrefix; // @synthesize itemUniqueKeyPrefix=_itemUniqueKeyPrefix;
@property(nonatomic) _Bool playbackOnlyWhenPrebufferingReady; // @synthesize playbackOnlyWhenPrebufferingReady=_playbackOnlyWhenPrebufferingReady;
@property(nonatomic) long long instreamPlaybackState; // @synthesize instreamPlaybackState=_instreamPlaybackState;
@property(nonatomic) __weak UIView<WBVideoPlayerSourceView> *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool hostPlaybackPaused; // @synthesize hostPlaybackPaused=_hostPlaybackPaused;
@property(retain, nonatomic) WBVideoInstreamAdPlaybackController *prebufferingPlaybackController; // @synthesize prebufferingPlaybackController=_prebufferingPlaybackController;
@property(retain, nonatomic) WBVideoInstreamAdPlaybackController *currentPlaybackController; // @synthesize currentPlaybackController=_currentPlaybackController;
@property(retain, nonatomic) NSMutableIndexSet *midRollSeconds; // @synthesize midRollSeconds=_midRollSeconds;
@property(retain, nonatomic) WBVideoInstreamAdItem *immediatePlaybackAdItem; // @synthesize immediatePlaybackAdItem=_immediatePlaybackAdItem;
@property(retain, nonatomic) NSMutableArray *postRollItems; // @synthesize postRollItems=_postRollItems;
@property(retain, nonatomic) NSMutableArray *midRollItems; // @synthesize midRollItems=_midRollItems;
@property(retain, nonatomic) NSMutableArray *preRollItems; // @synthesize preRollItems=_preRollItems;
@property(nonatomic) struct CGSize countDownLabelPositionOffset; // @synthesize countDownLabelPositionOffset=_countDownLabelPositionOffset;
@property(nonatomic) double countDownLabelFontSize; // @synthesize countDownLabelFontSize=_countDownLabelFontSize;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) __weak id <WBVideoInstreamAdControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WBVideoItem *hostVideoItem; // @synthesize hostVideoItem=_hostVideoItem;
@property(readonly, nonatomic) __weak WBVideoPlayerController *hostPlayerController; // @synthesize hostPlayerController=_hostPlayerController;
- (void).cxx_destruct;
- (void)_prebufferingNextItem;
- (void)_startPrebufferingForItem:(id)arg1;
- (unsigned long long)playToEndTimesForItem:(id)arg1;
- (void)increasePlayToEndTimesForItem:(id)arg1;
- (id)_playToEndTimesKeyForItem:(id)arg1;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerControllerDidPlayToEnd:(id)arg1;
- (void)videoPlayerController:(id)arg1 didPerformPauseWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenAnimated:(_Bool)arg2;
- (void)_currentPlaybackFinished;
- (void)finishPlaying;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerControllerUserSeekDone:(id)arg1;
- (void)videoPlayerControllerUserWillStartSeek:(id)arg1;
- (void)videoPlayerControllerIsReady:(id)arg1;
- (id)_createPlaybackControllerForItem:(id)arg1 prebuffering:(_Bool)arg2;
- (long long)_playNextVideoForPhase:(long long)arg1;
- (void)_prebufferingIfNeeded;
- (unsigned long long)_findPrebufferingIndexForMidRollAd;
- (unsigned long long)_findPlayIndexForMidRollAd;
- (unsigned long long)_midRollAdIndexForTime:(unsigned long long)arg1;
- (void)_updatePhase;
- (void)_tryChangePhaseToPlayingPhase:(long long)arg1;
- (void)_updatePrebufferingStates;
- (void)_updateMidRollSeconds;
- (void)_resetWithItems:(id)arg1;
- (void)_resetWithHostItem:(id)arg1;
@property(readonly, nonatomic) WBVideoInstreamAdItem *currentInstreamAdItem;
- (void)_updateCurrentPlayerControllerOptions;
- (void)transferToPlayerController:(id)arg1 sourceView:(id)arg2;
- (id)initWithPlayerController:(id)arg1 videoItem:(id)arg2 sourceView:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

