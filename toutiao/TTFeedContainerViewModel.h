//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSNumber, NSOperationQueue, NSString, UIViewController;
@protocol TTFeedContainerViewModelDelegate;

@interface TTFeedContainerViewModel : NSObject
{
    _Bool _loadMore;
    _Bool _canLoadMore;
    _Bool _hasNew;
    int _reloadType;
    id <TTFeedContainerViewModelDelegate> _delegate;
    UIViewController *_targetVC;
    NSString *_categoryID;
    unsigned long long _listType;
    unsigned long long _refer;
    NSNumber *_rankKey;
    NSArray *_allItems;
    NSDictionary *_remoteDict;
    NSArray *_flattenList;
    NSArray *_ignoreList;
    NSArray *_increaseItems;
    unsigned long long _newNumber;
    NSError *_error;
    NSOperationQueue *_queue;
    unsigned long long _startTime;
}

@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long newNumber; // @synthesize newNumber=_newNumber;
@property(copy, nonatomic) NSArray *increaseItems; // @synthesize increaseItems=_increaseItems;
@property(copy, nonatomic) NSArray *ignoreList; // @synthesize ignoreList=_ignoreList;
@property(copy, nonatomic) NSArray *flattenList; // @synthesize flattenList=_flattenList;
@property(copy, nonatomic) NSDictionary *remoteDict; // @synthesize remoteDict=_remoteDict;
@property(copy, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
@property(retain, nonatomic) NSNumber *rankKey; // @synthesize rankKey=_rankKey;
@property(nonatomic) _Bool hasNew; // @synthesize hasNew=_hasNew;
@property(nonatomic) _Bool canLoadMore; // @synthesize canLoadMore=_canLoadMore;
@property(nonatomic) _Bool loadMore; // @synthesize loadMore=_loadMore;
@property(nonatomic) int reloadType; // @synthesize reloadType=_reloadType;
@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) __weak UIViewController *targetVC; // @synthesize targetVC=_targetVC;
@property(nonatomic) __weak id <TTFeedContainerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)insertDataSourceItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)cleanupDataSource;
- (_Bool)removeDataSourceItemIfNeeded:(id)arg1;
- (_Bool)removeDataSourceArrayIfNeeded:(id)arg1;
- (void)startFetchDataLoadMore:(_Bool)arg1 fromLocal:(_Bool)arg2 fromRemote:(_Bool)arg3 reloadType:(int)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

