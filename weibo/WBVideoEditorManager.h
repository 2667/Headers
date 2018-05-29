//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBCameraVideoFilterDelegate-Protocol.h"
#import "WBVideoEditorEngineDelegate-Protocol.h"
#import "WBVideoEditorPlayerDelegate-Protocol.h"

@class AVAsset, NSArray, NSDictionary, NSString, UIView, WBVideoEditorEngine, WBVideoEditorPlayer, WBVideoExportTool, WBVideoMixAudioEngine;
@protocol WBCameraVideoFilterProtocol><WBCameraVideoLookupFilterProtocol, WBVideoEditorManagerDelegate;

@interface WBVideoEditorManager : NSObject <WBVideoEditorEngineDelegate, WBVideoEditorPlayerDelegate, WBCameraVideoFilterDelegate>
{
    AVAsset *_videoAsset;
    NSString *_musicPath;
    _Bool _generatedFirstFrame;
    _Bool _renderByGPUImage;
    id <WBVideoEditorManagerDelegate> _delegate;
    NSArray *_filterList;
    unsigned long long _currentFilter;
    double _videoVolume;
    double _musicVolume;
    UIView *_showView;
    WBVideoEditorPlayer *_videoPlayer;
    WBVideoEditorEngine *_videoEngine;
    id <WBCameraVideoFilterProtocol><WBCameraVideoLookupFilterProtocol> _videoLookupFilter;
    WBVideoMixAudioEngine *_mixEngine;
    CDUnknownBlockType _framebufferChangedBlock;
    WBVideoExportTool *_exportTool;
    NSDictionary *_currentRenderLog;
}

@property(retain, nonatomic) NSDictionary *currentRenderLog; // @synthesize currentRenderLog=_currentRenderLog;
@property(nonatomic) _Bool renderByGPUImage; // @synthesize renderByGPUImage=_renderByGPUImage;
@property(retain, nonatomic) WBVideoExportTool *exportTool; // @synthesize exportTool=_exportTool;
@property(copy, nonatomic) CDUnknownBlockType framebufferChangedBlock; // @synthesize framebufferChangedBlock=_framebufferChangedBlock;
@property(retain, nonatomic) WBVideoMixAudioEngine *mixEngine; // @synthesize mixEngine=_mixEngine;
@property(retain, nonatomic) id <WBCameraVideoFilterProtocol><WBCameraVideoLookupFilterProtocol> videoLookupFilter; // @synthesize videoLookupFilter=_videoLookupFilter;
@property(retain, nonatomic) WBVideoEditorEngine *videoEngine; // @synthesize videoEngine=_videoEngine;
@property(retain, nonatomic) WBVideoEditorPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
@property _Bool generatedFirstFrame; // @synthesize generatedFirstFrame=_generatedFirstFrame;
@property(nonatomic) double musicVolume; // @synthesize musicVolume=_musicVolume;
@property(nonatomic) double videoVolume; // @synthesize videoVolume=_videoVolume;
@property(nonatomic) unsigned long long currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) NSArray *filterList; // @synthesize filterList=_filterList;
@property(nonatomic) __weak id <WBVideoEditorManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveRenderLog;
- (void)cleanRenderLog;
- (id)getStatistics;
- (_Bool)fileExistAtPath:(id)arg1;
- (void)wbVideoEditorEngineDidGenerateFramebuffer:(id)arg1;
- (void)videoEditorPlayerDidPlayToEnd:(id)arg1;
- (void)setFilter:(unsigned long long)arg1;
- (void)wbCameraVideoFilter:(id)arg1 outTexture:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)cancelExport;
- (void)exportVideoBitrate:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)play;
- (void)setMusicPath:(id)arg1 anchorPoint:(long long)arg2 isFullMusic:(_Bool)arg3;
- (void)setMusicPath:(id)arg1;
- (void)setVideoAsset:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) double videoDuration;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

