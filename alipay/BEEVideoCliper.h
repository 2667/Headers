//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BEEVideoTrimmerDelegate-Protocol.h"

@class AVAsset, AVPlayer, BEEVideoPlayerView, BEEVideoTrimmerView, NSString, NSURL, UIButton;
@protocol BEEAssetProtocol;

@interface BEEVideoCliper : DTViewController <BEEVideoTrimmerDelegate>
{
    _Bool _shouldAutoPlay;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    BEEVideoTrimmerView *_trimmerView;
    BEEVideoPlayerView *_playerView;
    AVPlayer *_videoPlayer;
    id _playerObserver;
    AVAsset *_videoAsset;
    NSURL *_videoUrl;
    id <BEEAssetProtocol> _beeAsset;
    double _startTime;
    double _stopTime;
    double _maxLength;
    double _minLength;
    NSString *_confirmButtonTitle;
    CDUnknownBlockType _canceledBlcok;
    CDUnknownBlockType _finishedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(copy, nonatomic) CDUnknownBlockType canceledBlcok; // @synthesize canceledBlcok=_canceledBlcok;
@property(retain, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(nonatomic) _Bool shouldAutoPlay; // @synthesize shouldAutoPlay=_shouldAutoPlay;
@property(nonatomic) double minLength; // @synthesize minLength=_minLength;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id <BEEAssetProtocol> beeAsset; // @synthesize beeAsset=_beeAsset;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) id playerObserver; // @synthesize playerObserver=_playerObserver;
@property(retain, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) BEEVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) BEEVideoTrimmerView *trimmerView; // @synthesize trimmerView=_trimmerView;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)autoPlayVideo;
- (void)seekVideoToPosition:(double)arg1;
- (void)trimmerViewDidChangeLeftPosition:(double)arg1 rightPosition:(double)arg2;
- (void)trimmerViewDoingChangeLeftPosition:(double)arg1 rightPosition:(double)arg2;
- (void)trimmerViewWillChangeLeftPosition:(double)arg1 rightPosition:(double)arg2;
- (void)didClickDoneButton;
- (void)didClickCancelButton;
- (void)setupBottomButton;
- (void)setupVideoTrimmer;
- (void)setupVideoPlayer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)autohideNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

