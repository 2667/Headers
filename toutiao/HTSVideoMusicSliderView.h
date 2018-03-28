//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSThemedImageView, SSThemedLabel, SSThemedView, UIScrollView;

@interface HTSVideoMusicSliderView : UIView
{
    _Bool _hasSlidered;
    double _timePercent;
    double _resultLength;
    SSThemedView *_sliderLine;
    SSThemedView *_innerSliderLine;
    SSThemedView *_sliderBar;
    SSThemedImageView *_sliderBarImageView;
    SSThemedLabel *_leftTimeLabel;
    SSThemedLabel *_rightTimeLabel;
    UIScrollView *_scrollView;
    SSThemedLabel *_hintLabel;
    double _duration;
    double _oneSecondPercent;
}

@property(nonatomic) double oneSecondPercent; // @synthesize oneSecondPercent=_oneSecondPercent;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) SSThemedLabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SSThemedLabel *rightTimeLabel; // @synthesize rightTimeLabel=_rightTimeLabel;
@property(retain, nonatomic) SSThemedLabel *leftTimeLabel; // @synthesize leftTimeLabel=_leftTimeLabel;
@property(retain, nonatomic) SSThemedImageView *sliderBarImageView; // @synthesize sliderBarImageView=_sliderBarImageView;
@property(retain, nonatomic) SSThemedView *sliderBar; // @synthesize sliderBar=_sliderBar;
@property(retain, nonatomic) SSThemedView *innerSliderLine; // @synthesize innerSliderLine=_innerSliderLine;
@property(retain, nonatomic) SSThemedView *sliderLine; // @synthesize sliderLine=_sliderLine;
@property(nonatomic) double resultLength; // @synthesize resultLength=_resultLength;
@property(nonatomic) double timePercent; // @synthesize timePercent=_timePercent;
@property(nonatomic) _Bool hasSlidered; // @synthesize hasSlidered=_hasSlidered;
- (void).cxx_destruct;
- (id)timeStringWithOrigin:(id)arg1 AndDuration:(double)arg2;
- (void)shrinkSliderBar;
- (void)expandSliderBar;
- (void)handlePan:(id)arg1;
- (void)resetDuration:(double)arg1;
- (id)initWithDuration:(double)arg1;

@end
