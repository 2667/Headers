//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBSlideShowThemeManagerDelegate-Protocol.h"

@class NSString, UIView, WBSlideShowAssetPickerContextSetting, WBSlideShowBottomProgressView, WBSlideShowPlaybackStateAnnouncer, WBSlideShowThemeManager;

@interface WBSlideShowPlayerController : NSObject <WBSlideShowThemeManagerDelegate>
{
    struct {
        unsigned int shouldCancleCurrentImageRequest:1;
        unsigned int movieWriterDidStartExporting:1;
    } _flags;
    WBSlideShowAssetPickerContextSetting *_contextSetting;
    NSString *_currentTitle;
    unsigned long long _currentTheme;
    unsigned long long _currentState;
    UIView *_playerView;
    WBSlideShowThemeManager *_themeManager;
    WBSlideShowBottomProgressView *_bottomProgressView;
    WBSlideShowPlaybackStateAnnouncer *_stateAnnouncer;
    struct CGSize _videoSize;
}

@property(retain, nonatomic) WBSlideShowPlaybackStateAnnouncer *stateAnnouncer; // @synthesize stateAnnouncer=_stateAnnouncer;
@property(retain, nonatomic) WBSlideShowBottomProgressView *bottomProgressView; // @synthesize bottomProgressView=_bottomProgressView;
@property(retain, nonatomic) WBSlideShowThemeManager *themeManager; // @synthesize themeManager=_themeManager;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) unsigned long long currentTheme; // @synthesize currentTheme=_currentTheme;
@property(copy, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(nonatomic) __weak WBSlideShowAssetPickerContextSetting *contextSetting; // @synthesize contextSetting=_contextSetting;
- (void).cxx_destruct;
- (id)slideShowThemeManager:(id)arg1 themeIDWithType:(unsigned long long)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)showErrorWithText:(id)arg1 duration:(double)arg2;
- (void)showCombineError;
- (void)showPlaybackError;
- (void)exportMovieWithProgressCallback:(CDUnknownBlockType)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)beginEditing;
- (_Bool)stopCrrentActionAndTransferToState:(unsigned long long)arg1;
- (_Bool)stopCrrentAction;
- (void)pause;
- (void)resume;
- (void)startPlay;
- (void)play;
- (void)requestFullScreenImagesShouldChangeState:(_Bool)arg1 Compeletion:(CDUnknownBlockType)arg2;
- (void)requestFullScreenImagesCompeletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldDisableIdleTimerForState:(unsigned long long)arg1;
- (_Bool)shouldPerformUserInteractionNow;
- (void)resetCancleCurrentImageLoadingFlag;
- (_Bool)shouldCancleCurrentImageLoading;
- (_Bool)shouldCancleCurrentExporting;
- (void)themeManagerDidStartExporting;
- (void)themeManagerDidFinishExporting;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)removeStateListener:(id)arg1;
- (void)addStateListener:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

