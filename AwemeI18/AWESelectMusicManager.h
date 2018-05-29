//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

@interface AWESelectMusicManager : NSObject
{
    NSObject<OS_dispatch_queue> *_executeDataQueue;
    _Bool _hasMoreHot;
    _Bool _hasMoreCollection;
    _Bool _hasMoreBodydance;
    _Bool _isRequestingHot;
    _Bool _isRequestingCollection;
    _Bool _isRequestingBodydance;
    NSMutableArray *_hotList;
    NSMutableArray *_collectionList;
    NSMutableArray *_bodydanceList;
    NSNumber *_hotCursor;
    NSNumber *_collectionCursor;
    NSNumber *_bodydanceCursor;
}

@property(retain, nonatomic) NSNumber *bodydanceCursor; // @synthesize bodydanceCursor=_bodydanceCursor;
@property(retain, nonatomic) NSNumber *collectionCursor; // @synthesize collectionCursor=_collectionCursor;
@property(retain, nonatomic) NSNumber *hotCursor; // @synthesize hotCursor=_hotCursor;
@property(nonatomic) _Bool isRequestingBodydance; // @synthesize isRequestingBodydance=_isRequestingBodydance;
@property(nonatomic) _Bool isRequestingCollection; // @synthesize isRequestingCollection=_isRequestingCollection;
@property(nonatomic) _Bool isRequestingHot; // @synthesize isRequestingHot=_isRequestingHot;
@property(nonatomic) _Bool hasMoreBodydance; // @synthesize hasMoreBodydance=_hasMoreBodydance;
@property(retain, nonatomic) NSMutableArray *bodydanceList; // @synthesize bodydanceList=_bodydanceList;
@property(retain, nonatomic) NSMutableArray *collectionList; // @synthesize collectionList=_collectionList;
@property(retain, nonatomic) NSMutableArray *hotList; // @synthesize hotList=_hotList;
@property(nonatomic) _Bool hasMoreCollection; // @synthesize hasMoreCollection=_hasMoreCollection;
@property(nonatomic) _Bool hasMoreHot; // @synthesize hasMoreHot=_hasMoreHot;
- (void).cxx_destruct;
- (void)_loadBodydanceWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadCollectionWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadHotWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

