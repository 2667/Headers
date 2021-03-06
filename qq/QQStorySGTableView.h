//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class CAShapeLayer, QQStoryEmptyView, UILabel;

@interface QQStorySGTableView : UITableView
{
    CAShapeLayer *_timeLineLayer;
    QQStoryEmptyView *_emptyView;
    UILabel *_loadingLabel;
}

@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) QQStoryEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) CAShapeLayer *timeLineLayer; // @synthesize timeLineLayer=_timeLineLayer;
- (void)showLoadingLabel;
- (void)hideLoadingLabel;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)refreshTimeLineLayerWithList:(id)arg1;
- (void)refreshBackgroundWithList:(id)arg1 isHotMode:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setHeight:(double)arg1;
- (void)dealloc;
- (id)initWithGroupID:(id)arg1 pageType:(unsigned long long)arg2;

@end

