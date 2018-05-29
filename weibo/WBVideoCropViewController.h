//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UINavigationControllerDelegate-Protocol.h"
#import "WBVideoScrollPlayerDelegate-Protocol.h"
#import "WBVideoTrimSliderDelegate-Protocol.h"

@class AVAssetExportSession, GPUImageMovie, GPUImageMovieWriter, NSString, UIButton, WBVideoEditorCache, WBVideoScrollPlayer, WBVideoTrimSlider;
@protocol WBVideoCropViewControllerDelegate;

@interface WBVideoCropViewController : WBViewController <UINavigationControllerDelegate, WBVideoTrimSliderDelegate, WBVideoScrollPlayerDelegate>
{
    UIButton *_cancelButton;
    UIButton *_nextButton;
    _Bool _isWriting;
    id <WBVideoCropViewControllerDelegate> _delegate;
    UIButton *_confirmButton;
    WBVideoEditorCache *_videoCache;
    WBVideoScrollPlayer *_player;
    WBVideoTrimSlider *_trimSlider;
    double _startTime;
    double _stopTime;
    GPUImageMovie *_movie;
    GPUImageMovieWriter *_movieWriter;
    AVAssetExportSession *_assetExport;
    id _audioSessionHandler;
}

@property(retain, nonatomic) id audioSessionHandler; // @synthesize audioSessionHandler=_audioSessionHandler;
@property(nonatomic) _Bool isWriting; // @synthesize isWriting=_isWriting;
@property(retain, nonatomic) AVAssetExportSession *assetExport; // @synthesize assetExport=_assetExport;
@property(retain, nonatomic) GPUImageMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) GPUImageMovie *movie; // @synthesize movie=_movie;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) WBVideoTrimSlider *trimSlider; // @synthesize trimSlider=_trimSlider;
@property(retain, nonatomic) WBVideoScrollPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) WBVideoEditorCache *videoCache; // @synthesize videoCache=_videoCache;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <WBVideoCropViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didCompletePlayingMovie;
- (void)cancelWriting;
- (void)finishedWriting;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)videoTrimSliderDidRepostionSubviews:(id)arg1;
- (void)videoRange:(id)arg1 didChangeLeftPosition:(double)arg2 rightPosition:(double)arg3;
- (void)stopPlaying;
- (void)currentPlayingTime:(CDStruct_1b6d18a9)arg1;
- (void)initPlayer;
- (void)cropVideoWithAsset:(id)arg1 audioMix:(id)arg2;
- (void)mixVideoTrack:(id)arg1 audioTrack:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)confirmAction;
- (void)cancelAction:(id)arg1;
- (void)showErrorHud;
- (void)hideLoadingHud;
- (void)showLoadingHud;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoCache:(id)arg1;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

