//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimeLineFeedGroup.h"

@interface WBMainFeedGroup : WBTimeLineFeedGroup
{
    _Bool isUseUnreadPool;
    long long unreadNoniusIndex;
    long long _unreadMinIndex;
    long long _unreadPositionIndex;
}

+ (id)group;
@property(nonatomic) long long unreadPositionIndex; // @synthesize unreadPositionIndex=_unreadPositionIndex;
@property(nonatomic) long long unreadMinIndex; // @synthesize unreadMinIndex=_unreadMinIndex;
@property(nonatomic) _Bool isUseUnreadPool; // @synthesize isUseUnreadPool;
@property(nonatomic) long long unreadNoniusIndex; // @synthesize unreadNoniusIndex;
- (void)handleFeedSourceTpyeChange:(id)arg1;
- (long long)feedUpdateType;
- (void)applicationBecomeActive;
- (void)loadMoreStatusFromNetWorkWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 isLoadedLocal:(_Bool)arg3;
- (void)loadMoreStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cleanSectionsOverflow;
- (void)setNeedCheckCacheCount;
- (_Bool)shouldRemoveLocalStatusFromResultSet:(id)arg1;
- (_Bool)shouldInsertLocalStatusToResultSet:(id)arg1;
- (id)statusLoadRequest;
- (id)unreadStatusLoadRequest:(_Bool)arg1;
- (id)statusReloadRequest;
- (id)statusLoadMoreRequest;
- (_Bool)isDisableAutoLoadMore;
- (void)checkInsertIndex;
- (void)initStatusResultSet;
- (id)statusInsertRequest;
- (void)resetParam;

@end

