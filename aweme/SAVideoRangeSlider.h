//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAssetImageGenerator, NSURL, SAResizibleBubble, SASliderLeft, SASliderRight, UIImageView, UILabel;
@protocol SAVideoRangeSliderDelegate;

@interface SAVideoRangeSlider : UIView
{
    id <SAVideoRangeSliderDelegate> _delegate;
    double _leftPosition;
    double _rightPosition;
    UILabel *_bubleText;
    UIView *_topBorder;
    UIView *_bottomBorder;
    double _maxGap;
    double _minGap;
    double _scale;
    AVAssetImageGenerator *_imageGenerator;
    UIView *_bgView;
    UIView *_centerView;
    NSURL *_videoUrl;
    SASliderLeft *_leftThumb;
    SASliderRight *_rightThumb;
    double _frame_width;
    double _durationSeconds;
    SAResizibleBubble *_popoverBubble;
    UIImageView *_playingIndicatorImageView;
}

@property(retain, nonatomic) UIImageView *playingIndicatorImageView; // @synthesize playingIndicatorImageView=_playingIndicatorImageView;
@property(retain, nonatomic) SAResizibleBubble *popoverBubble; // @synthesize popoverBubble=_popoverBubble;
@property(nonatomic) double durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) double frame_width; // @synthesize frame_width=_frame_width;
@property(retain, nonatomic) SASliderRight *rightThumb; // @synthesize rightThumb=_rightThumb;
@property(retain, nonatomic) SASliderLeft *leftThumb; // @synthesize leftThumb=_leftThumb;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double minGap; // @synthesize minGap=_minGap;
@property(nonatomic) double maxGap; // @synthesize maxGap=_maxGap;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(retain, nonatomic) UILabel *bubleText; // @synthesize bubleText=_bubleText;
@property(nonatomic) double rightPosition; // @synthesize rightPosition=_rightPosition;
@property(nonatomic) double leftPosition; // @synthesize leftPosition=_leftPosition;
@property(nonatomic) __weak id <SAVideoRangeSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isRetina;
- (id)timeToStr:(double)arg1;
- (_Bool)isPlayingIndicatorShown;
- (void)hidePlayingIndicator;
- (void)showPlayingIndicatorAt:(double)arg1 animated:(_Bool)arg2;
- (id)trimIntervalStr;
- (long long)delta;
- (id)trimDurationStr;
- (void)updateTimeLabel;
- (void)setTimeLabel:(_Bool)arg1;
- (void)hideBubble:(id)arg1 isLeft:(_Bool)arg2;
- (void)getMovieFrame;
- (void)getMovieDuration;
- (void)layoutSubviews;
- (void)handleCenterPan:(id)arg1;
- (void)handleRightPan:(id)arg1;
- (void)handleLeftPan:(id)arg1;
- (void)delegateNotification:(_Bool)arg1;
- (double)bodyWidth;
- (void)setPopoverBubbleSize:(double)arg1 height:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTintColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 videoUrl:(id)arg2 slideWidth:(double)arg3 frameWidth:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 videoUrl:(id)arg2 slideWidth:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 videoUrl:(id)arg2;

@end
