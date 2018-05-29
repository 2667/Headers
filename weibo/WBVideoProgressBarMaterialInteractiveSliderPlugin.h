//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoProgressBarInteractiveSliderBasePlugin.h"

@class WBVideoMaterialProgressSlider;

@interface WBVideoProgressBarMaterialInteractiveSliderPlugin : WBVideoProgressBarInteractiveSliderBasePlugin
{
    WBVideoMaterialProgressSlider *_progressSlider;
}

+ (_Bool)needsTimeUpdates;
@property(retain, nonatomic) WBVideoMaterialProgressSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
- (void).cxx_destruct;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)sliderTouchUp:(id)arg1;
- (void)sliderMove:(id)arg1;
- (void)sliderTouchDown:(id)arg1;
- (void)prepareForDisplay;
- (void)updateTrackColor:(id)arg1;
- (void)updateCacheFillColor:(id)arg1;
- (void)updateFillColor:(id)arg1;
- (void)timeUpdater:(id)arg1 didUpdateCacheProgress:(double)arg2;
- (void)timeUpdater:(id)arg1 didUpdateProgress:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

