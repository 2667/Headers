//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSearchableItemCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)clearCache;
- (void)updateSearchableItemCacheWithURLStr:(id)arg1;
- (void)updateSearchableItemCacheWithNotify:(id)arg1;
- (void)updateSearchableItemCache:(id)arg1;
- (void)clearSeachableItemCacheWithURLStr:(id)arg1;
- (void)clearSeachableItemCache:(id)arg1;
- (void)addSeachableItemCache:(id)arg1;
- (id)init;

@end

