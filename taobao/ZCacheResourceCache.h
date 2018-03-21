//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSCache, NSString;

@interface ZCacheResourceCache : NSObject <NSCacheDelegate>
{
    NSCache *_resCache;
    unsigned long long _size;
    unsigned long long _maxSize;
    unsigned long long _sumSize;
}

+ (void)removeCache:(id)arg1;
+ (id)getResource:(id)arg1 timeCost:(double *)arg2;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long sumSize; // @synthesize sumSize=_sumSize;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSCache *resCache; // @synthesize resCache=_resCache;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)increaseSize:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
