//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKBaseTableViewCell.h"

@class NSIndexPath, UIView, WBExtPageHedlineCard, WBHLExtBasePageCard, WKFeedViewControllerState, WKNotInterestedWindow, WKProfileMoreView;
@protocol HeadlineWbTableViewCellDelegate;

@interface HeadlineWbTableViewCell : WKBaseTableViewCell
{
    WKNotInterestedWindow *_notInterWindow;
    WKProfileMoreView *_profileMoreWindow;
    _Bool _isExpanded;
    _Bool _isNotGray;
    _Bool _shearStatus;
    _Bool _titleLabelShouldDraw;
    _Bool _activeDisikeButton;
    WBHLExtBasePageCard *_baseView;
    WBExtPageHedlineCard *_feed;
    id <HeadlineWbTableViewCellDelegate> _baseDelegate;
    double _subLayerHeight;
    double _originCenter;
    NSIndexPath *_panIndex;
    WKFeedViewControllerState *_firstState;
    double _cellHeight;
    UIView *_splitLine;
}

+ (void)renderDrawingContext:(id)arg1;
+ (id)cellForTableView:(id)arg1 indexPath:(id)arg2 target:(id)arg3 state:(id)arg4 subLayerHeight:(double)arg5 cellHeight:(double)arg6;
@property(nonatomic, getter=isActiveDislikeButton) _Bool activeDisikeButton; // @synthesize activeDisikeButton=_activeDisikeButton;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(nonatomic, getter=isTitleLabelShouldDraw) _Bool titleLabelShouldDraw; // @synthesize titleLabelShouldDraw=_titleLabelShouldDraw;
@property(nonatomic) _Bool shearStatus; // @synthesize shearStatus=_shearStatus;
@property(nonatomic) _Bool isNotGray; // @synthesize isNotGray=_isNotGray;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) WKFeedViewControllerState *firstState; // @synthesize firstState=_firstState;
@property(retain, nonatomic) NSIndexPath *panIndex; // @synthesize panIndex=_panIndex;
@property(nonatomic) double originCenter; // @synthesize originCenter=_originCenter;
@property(nonatomic) double subLayerHeight; // @synthesize subLayerHeight=_subLayerHeight;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) id <HeadlineWbTableViewCellDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
@property(retain, nonatomic) WBExtPageHedlineCard *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) WBHLExtBasePageCard *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)hotImageClick:(id)arg1 currentView:(id)arg2;
- (void)unInterestItemClick:(id)arg1 withReasonDict:(id)arg2;
- (void)relayoutTimeLabel;
- (void)relayoutSubViews;
- (void)reloadUIElements;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)getCurrentSubLayerHeight:(double)arg1;
- (void)setItemData:(id)arg1 panTip:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setForState:(id)arg1;
- (void)dealloc;

@end

