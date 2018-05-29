//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineTableViewCell.h"

@class TTTAttributedLabel, UIActivityIndicatorView, UIImageView, UIView, WBTimelineOccupiedItem;

@interface WBTimelineOccupiedCell : WBTimelineTableViewCell
{
    long long occType;
    UIView *occContentView;
    TTTAttributedLabel *centerLabel;
    UIView *leftLine;
    UIView *rightLine;
    UIActivityIndicatorView *activityIndicatorView;
    UIImageView *imageView;
    UIImageView *btnImageView;
    WBTimelineOccupiedItem *_occupiedItem;
    UIImageView *_divideLine;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
+ (double)rowHeightOfDataObject:(id)arg1;
@property(retain, nonatomic) UIImageView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) WBTimelineOccupiedItem *occupiedItem; // @synthesize occupiedItem=_occupiedItem;
- (void).cxx_destruct;
- (void)switchLineStyle:(_Bool)arg1;
- (void)dottedLine:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)changeLanguage;
- (void)changeOptionViewSize;
- (void)changeCellStyleOption:(long long)arg1;
- (void)setTimelineItem:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareBackgroundViewWithType:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

