//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ExploreMixedListBaseView, NSIndexPath;

@protocol ExploreMixedListBaseViewDelegate <NSObject>

@optional
- (void)mixListViewDidSelectLastReadCellDidBeginRefresh:(ExploreMixedListBaseView *)arg1;
- (void)mixListViewDidSelectLastReadCellWillBeginRefresh:(ExploreMixedListBaseView *)arg1;
- (void)mixListViewWillScrollToTop:(ExploreMixedListBaseView *)arg1;
- (void)mixListViewCancelRequest:(ExploreMixedListBaseView *)arg1;
- (void)mixListViewFinishLoad:(ExploreMixedListBaseView *)arg1 isFinish:(_Bool)arg2 isUserPull:(_Bool)arg3;
- (void)mixListViewDidStartLoad:(ExploreMixedListBaseView *)arg1;
- (void)mixListView:(ExploreMixedListBaseView *)arg1 didSelectRowAtIndex:(NSIndexPath *)arg2;
@end

