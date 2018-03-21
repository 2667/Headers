//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshFooter.h"

@interface MJRefreshBackFooter : MJRefreshFooter
{
    long long _lastRefreshCount;
    double _lastBottomDelta;
}

@property(nonatomic) double lastBottomDelta; // @synthesize lastBottomDelta=_lastBottomDelta;
@property(nonatomic) long long lastRefreshCount; // @synthesize lastRefreshCount=_lastRefreshCount;
- (double)happenOffsetY;
- (double)heightForContentBreakView;
- (void)endRefreshingWithNoMoreData;
- (void)endRefreshing;
- (void)setState:(long long)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
