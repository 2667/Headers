//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBImageWeight;
@protocol WBCachedObject;

@protocol WBCachedObject <NSObject>
+ (id)cachedObjectWithObject:(id)arg1 configuration:(void (^)(WBImageWeight *))arg2;
@property(readonly, nonatomic) WBImageWeight *weight;
- (_Bool)purgeTo:(double *)arg1 forced:(_Bool)arg2;
- (void)hitObjectInCache;
- (_Bool)isPriorTo:(id <WBCachedObject>)arg1;
@end

