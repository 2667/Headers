//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCachedObject.h"

#import "WBIndexCachedCollectionDeleage-Protocol.h"
#import "WBUIImageCacheDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WBImageWeight, _WBCacheStoreWrapper;
@protocol WBIndexCachedCollectionDeleage><WBUIImageCacheDelegate;

@interface WBIndexeCachedCollection : WBCachedObject <WBIndexCachedCollectionDeleage, WBUIImageCacheDelegate>
{
    struct {
        unsigned int hasNotifyUpdated:1;
        unsigned int hasWillBeginPurge:1;
        unsigned int hasDidEndPurge:1;
        unsigned int hasDidRemoveImageForKey:1;
    } _flags;
    NSMutableDictionary *cacheCollection;
    WBImageWeight *_weight;
    double _totalCount;
    _WBCacheStoreWrapper *_storeWrapper;
    id <WBIndexCachedCollectionDeleage><WBUIImageCacheDelegate> _delegate;
    unsigned long long _purgePolicy;
    unsigned long long _maxLimitedSize;
    unsigned long long _targetPurgedSize;
}

+ (id)cachedObjectWithObject:(id)arg1 configuration:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long targetPurgedSize; // @synthesize targetPurgedSize=_targetPurgedSize;
@property(nonatomic) unsigned long long maxLimitedSize; // @synthesize maxLimitedSize=_maxLimitedSize;
@property(nonatomic) unsigned long long purgePolicy; // @synthesize purgePolicy=_purgePolicy;
@property(nonatomic) id <WBIndexCachedCollectionDeleage><WBUIImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _WBCacheStoreWrapper *storeWrapper; // @synthesize storeWrapper=_storeWrapper;
@property(nonatomic) double totalCount; // @synthesize totalCount=_totalCount;
- (id)weight;
@property(retain, nonatomic) NSMutableDictionary *cacheCollection; // @synthesize cacheCollection;
- (void).cxx_destruct;
- (void)setMaxLimitedSize:(unsigned long long)arg1 andTargetSize:(unsigned long long)arg2;
- (void)resetStoreWrapper;
- (void)notifyUpdated:(id)arg1 isAdd:(_Bool)arg2;
- (void)removeCacheObjectForKey:(id)arg1;
- (void)removeAllCachedObjects;
- (void)removeCacheObjectsForKeys:(id)arg1;
- (id)cachedObjectForKey:(id)arg1;
- (void)addCachedObject:(id)arg1 forKey:(id)arg2;
- (_Bool)purgeTo:(double *)arg1;
- (_Bool)purgeTo:(double *)arg1 forced:(_Bool)arg2;
- (_Bool)purgeFrom:(double *)arg1 to:(double *)arg2 forced:(_Bool)arg3;
- (_Bool)_purgeWithOrderedArray:(id)arg1 from:(double *)arg2 to:(double *)arg3 forced:(_Bool)arg4;
- (double)_tryPurgeCacheObject:(id)arg1 to:(double)arg2 forced:(_Bool)arg3;
- (double)_purgeAllInCache:(_Bool)arg1;
- (void)imageCache:(id)arg1 willBeginPurgeWithSize:(unsigned long long)arg2;
- (void)imageCache:(id)arg1 didEndPurgeWithSize:(unsigned long long)arg2;
- (void)imageCache:(id)arg1 didRemoveImageForKey:(id)arg2;
- (void)_updateSelfWith:(id)arg1 isAdd:(_Bool)arg2;
- (void)hitObjectInCache;
- (_Bool)isPriorTo:(id)arg1;
- (void)_initialize;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

