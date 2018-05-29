//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHLExtBasePageCard.h"

@class UIImageView, WBHeadlineAttributedTextView;

@interface WBHLExtSinglePicPageCard : WBHLExtBasePageCard
{
    WBHeadlineAttributedTextView *_summaryLabel;
    UIImageView *_newsImage;
    UIImageView *_gifIcon;
}

+ (void)load;
@property(retain, nonatomic) UIImageView *gifIcon; // @synthesize gifIcon=_gifIcon;
@property(retain, nonatomic) UIImageView *newsImage; // @synthesize newsImage=_newsImage;
@property(retain, nonatomic) WBHeadlineAttributedTextView *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
- (void).cxx_destruct;
- (void)fitPublicBar:(double)arg1;
- (void)fitSummaryLabel:(double)arg1 titleLineCount:(long long)arg2;
- (void)fitSinglePicture:(double)arg1;
- (void)relayoutSubViews;
- (void)setItemData:(id)arg1 panTip:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

