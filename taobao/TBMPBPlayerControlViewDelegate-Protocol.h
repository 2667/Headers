//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBMPBPlayerControlView;

@protocol TBMPBPlayerControlViewDelegate <NSObject>
- (void)controlViewDidTwiceTapped:(TBMPBPlayerControlView *)arg1;
- (void)controlViewDidTapped:(TBMPBPlayerControlView *)arg1;
- (void)progressSliderDidDragToTime:(double)arg1 inControlView:(TBMPBPlayerControlView *)arg2;
- (void)progressSliderBeginToDragInControlView:(TBMPBPlayerControlView *)arg1;
- (void)miniScreenButtonDidClickedInControlView:(TBMPBPlayerControlView *)arg1;
- (void)fullScreenButtonDidClickedInControlView:(TBMPBPlayerControlView *)arg1;
- (void)pauseButtonDidClickedInControlView:(TBMPBPlayerControlView *)arg1;
- (void)playButtonDidClickedInControlView:(TBMPBPlayerControlView *)arg1;
@end
