//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSEPreviewPlayer.h"

#import "KSAdvanceEditPreviewPlayer-Protocol.h"
#import "KSEExportTaskDelegate-Protocol.h"
#import "KSEPreviewPlayerDelegate-Protocol.h"

@class KSEThumbnailGenerator, KSMMediaProject, NSString;
@protocol KSEExportTask;

@interface KSMPreviewPlayer : KSEPreviewPlayer <KSAdvanceEditPreviewPlayer, KSEPreviewPlayerDelegate, KSEExportTaskDelegate>
{
    _Bool _mute;
    int _state;
    unsigned int _previousMuteFlags;
    KSMMediaProject *_mediaProject;
    CDUnknownBlockType _willStartPreparingReverse;
    CDUnknownBlockType _didFinishPreparingReverse;
    CDUnknownBlockType _actionAtPlaybackEnd;
    KSEThumbnailGenerator *_thumbnailGenerator;
    id <KSEExportTask> _exportTask;
    CDUnknownBlockType _onProgress;
    CDUnknownBlockType _onSuccess;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onCancelled;
}

+ (id)keyPathsForValuesAffectingPlaying;
@property(nonatomic) unsigned int previousMuteFlags; // @synthesize previousMuteFlags=_previousMuteFlags;
@property(copy, nonatomic) CDUnknownBlockType onCancelled; // @synthesize onCancelled=_onCancelled;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onSuccess; // @synthesize onSuccess=_onSuccess;
@property(copy, nonatomic) CDUnknownBlockType onProgress; // @synthesize onProgress=_onProgress;
@property(retain, nonatomic) id <KSEExportTask> exportTask; // @synthesize exportTask=_exportTask;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) KSEThumbnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
@property(copy, nonatomic) CDUnknownBlockType actionAtPlaybackEnd; // @synthesize actionAtPlaybackEnd=_actionAtPlaybackEnd;
@property(copy, nonatomic) CDUnknownBlockType didFinishPreparingReverse; // @synthesize didFinishPreparingReverse=_didFinishPreparingReverse;
@property(copy, nonatomic) CDUnknownBlockType willStartPreparingReverse; // @synthesize willStartPreparingReverse=_willStartPreparingReverse;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) KSMMediaProject *mediaProject; // @synthesize mediaProject=_mediaProject;
- (void).cxx_destruct;
- (void)player:(id)arg1 timeUpdate:(double)arg2;
- (void)playerError:(id)arg1;
- (void)playerSeeked:(id)arg1;
- (void)playerSeeking:(id)arg1;
- (void)playerPlaying:(id)arg1;
- (void)playerWaiting:(id)arg1;
- (void)playerPause:(id)arg1;
- (void)playerPlay:(id)arg1;
- (void)playerEnded:(id)arg1;
- (void)playerLoadedData:(id)arg1;
- (void)player:(id)arg1 didRenderFrame:(double)arg2 withAssets:(id)arg3;
- (void)exportTaskDidCancelled:(id)arg1;
- (void)exportTask:(id)arg1 updateProgress:(double)arg2;
- (void)exportTask:(id)arg1 didFailWithError:(id)arg2;
- (void)exportTaskDidFinish:(id)arg1 assetRenderRanges:(id)arg2;
- (void)cancelExportOnFinish:(CDUnknownBlockType)arg1;
- (void)exportWithPath:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 onSuccess:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)playUntilEffectFinishes:(_Bool)arg1;
- (void)play;
- (void)loadTextureDataWithItem:(id)arg1 onFinish:(CDUnknownBlockType)arg2;
- (void)updateProject;
- (id)init;
- (id)initWithMediaProject:(id)arg1;
- (id)_currentTimeRangeItems:(id)arg1;
- (struct CGSize)resolution;
- (id)currentCutItems;
- (id)currentTextures;
@property(readonly, nonatomic) _Bool playing;
@property(readonly, nonatomic) _Bool reversed;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double frameDuration;
- (void)seekToNextFrameOfTime:(double)arg1;
- (void)seekToPreviousFrameOfTime:(double)arg1;
- (void)seekToTime:(double)arg1;

// Remaining properties
@property(readonly, nonatomic) double currentTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

