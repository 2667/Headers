//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, UIGestureRecognizer, UISlider, YXLiveReplaySliderView;

@protocol YXLiveReplaySliderViewDelegate <NSObject>
- (void)replaySliderView:(YXLiveReplaySliderView *)arg1 playButtonDidClick:(UIButton *)arg2;
- (void)replaySliderView:(YXLiveReplaySliderView *)arg1 sliderTapped:(UIGestureRecognizer *)arg2;
- (void)replaySliderView:(YXLiveReplaySliderView *)arg1 sliderValueChanged:(UISlider *)arg2;
- (void)replaySliderView:(YXLiveReplaySliderView *)arg1 sliderTouchDownEnd:(UISlider *)arg2;
- (void)replaySliderView:(YXLiveReplaySliderView *)arg1 sliderTouchDownBegin:(UISlider *)arg2;
@end

