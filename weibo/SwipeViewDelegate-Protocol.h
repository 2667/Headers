//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBSegmentSwipeView;

@protocol SwipeViewDelegate <NSObject>

@optional
- (void)swipeView:(WBSegmentSwipeView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)swipeView:(WBSegmentSwipeView *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)swipeViewDidEndScrollingAnimation:(WBSegmentSwipeView *)arg1;
- (void)swipeViewDidEndDecelerating:(WBSegmentSwipeView *)arg1;
- (void)swipeViewWillBeginDecelerating:(WBSegmentSwipeView *)arg1;
- (void)swipeViewDidEndDragging:(WBSegmentSwipeView *)arg1 willDecelerate:(_Bool)arg2;
- (void)swipeViewWillBeginDragging:(WBSegmentSwipeView *)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(WBSegmentSwipeView *)arg1;
- (void)swipeViewDidScroll:(WBSegmentSwipeView *)arg1;
- (struct CGSize)swipeViewItemSize:(WBSegmentSwipeView *)arg1;
@end

