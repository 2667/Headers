//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

#import "HTSMediaExportable-Protocol.h"

@class AVMutableAudioMix, AVMutableComposition, HTSMediaExporter, HTSVideoData, NSArray, NSMutableDictionary, NSString;
@protocol HTSMediaMixPlayerDelegate;

@interface HTSMediaMixPlayer : AVPlayer <HTSMediaExportable>
{
    _Bool _autoRepeat;
    _Bool _isPlaying;
    _Bool _noneedProcessAudio;
    float _previousRate;
    HTSMediaExporter *mediaExporter;
    HTSVideoData *_videoData;
    AVMutableComposition *_mixComposition;
    id <HTSMediaMixPlayerDelegate> _delegate;
    CDUnknownBlockType _playerCompleteBlock;
    CDUnknownBlockType _playerTimerBlock;
    AVMutableAudioMix *_audioMix;
    NSMutableDictionary *_playerTimeObserverDict;
}

+ (id)audioPlayerWithVideoData:(id)arg1;
+ (id)mixPlayerWithVideoData:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *playerTimeObserverDict; // @synthesize playerTimeObserverDict=_playerTimeObserverDict;
@property(nonatomic) float previousRate; // @synthesize previousRate=_previousRate;
@property(retain, nonatomic) AVMutableAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(copy, nonatomic) CDUnknownBlockType playerTimerBlock; // @synthesize playerTimerBlock=_playerTimerBlock;
@property(copy, nonatomic) CDUnknownBlockType playerCompleteBlock; // @synthesize playerCompleteBlock=_playerCompleteBlock;
@property(nonatomic) __weak id <HTSMediaMixPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool noneedProcessAudio; // @synthesize noneedProcessAudio=_noneedProcessAudio;
@property(retain, nonatomic) AVMutableComposition *mixComposition; // @synthesize mixComposition=_mixComposition;
@property(nonatomic) __weak HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool autoRepeat; // @synthesize autoRepeat=_autoRepeat;
@property(retain, nonatomic) HTSMediaExporter *mediaExporter; // @synthesize mediaExporter;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetItem;
- (void)removeTimeObserverForAsset:(id)arg1;
- (void)addPeriodicTimeObserverForAsset:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (double)currentTimeForAsset:(id)arg1;
- (void)reloadData;
- (void)setRate:(float)arg1;
- (void)stop;
- (void)replay;
@property(readonly, nonatomic) NSArray *assets; // @dynamic assets;
- (void)setVolume:(float)arg1 forAudioAtIndex:(unsigned long long)arg2;
- (void)setVolume:(float)arg1 forVideoAtIndex:(unsigned long long)arg2;
- (void)setVolumeForAudio:(float)arg1;
- (void)setVolumeForVideo:(float)arg1;
- (void)setTimeClipRange:(id)arg1 toAudioAtIndex:(unsigned long long)arg2;
- (void)setTimeClipRange:(id)arg1 toVideoAtIndex:(unsigned long long)arg2;
- (void)removeAudioAtIndex:(unsigned long long)arg1;
- (void)replaceAudioAtIndex:(unsigned long long)arg1 withAudioAsset:(id)arg2;
- (id)replaceAudioAtIndex:(unsigned long long)arg1 withAudioUrl:(id)arg2;
- (void)addAudioWithAsset:(id)arg1;
- (id)addAudioWithUrl:(id)arg1;
- (void)addVideoWithAsset:(id)arg1;
- (id)addVideoWithUrl:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)exportAudio:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
