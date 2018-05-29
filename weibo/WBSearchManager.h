//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WBSearchManager : NSObject
{
    NSMutableDictionary *_searchHistoryWithTypes;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)saveAllSearchHistories;
- (void)saveSearchHistoriesForType:(id)arg1;
- (void)clearAllHistories;
- (void)clearHistoryForType:(id)arg1;
- (id)_searchHistoriesForType:(id)arg1;
- (id)searchHistoriesForType:(id)arg1;
- (id)searchHistoryWithTypes;
- (void)removeHistory:(id)arg1 forType:(id)arg2;
- (void)addHistory:(id)arg1 forType:(id)arg2;
- (void)accountDidRemove:(id)arg1;
- (void)currentAccountDidChange:(id)arg1;
- (id)cachedSearchTypes:(unsigned long long)arg1;
- (void)setCachedSearchTypes:(id)arg1;
- (id)init;
- (void)dealloc;

@end

