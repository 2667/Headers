//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPublishGuideView.h"

@class UIImageView, UIView, WBMovieGuideHeaderModel, WBStarRatingView;

@interface WBMovieGuideView : WBPublishGuideView
{
    UIImageView *movieImgView;
    UIView *lineView;
    WBStarRatingView *starRatingView;
    WBMovieGuideHeaderModel *headerModel;
}

- (void).cxx_destruct;
- (void)uploadScore:(id)arg1;
- (void)starRatingView:(id)arg1 didClearRatingFrom:(double)arg2;
- (void)starRatingView:(id)arg1 didChangeRatingTo:(double)arg2;
- (void)appLanguageDidChangedNotification:(id)arg1;
- (void)avatarViewPressed:(id)arg1;
- (void)setupModel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

