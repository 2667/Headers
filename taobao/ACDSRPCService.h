//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ACDSRPCService : NSObject
{
}

+ (void)removeFromAntiReplayCache:(id)arg1;
+ (void)increaseInAntiReplayCache:(id)arg1 delta:(int)arg2;
+ (int)countInAntiReplayCache:(id)arg1;
+ (_Bool)hitAntiReplay:(id)arg1;
+ (id)rpcDictWithRequest:(id)arg1;
+ (id)changeSerilizeCacheKey:(id)arg1 action:(id)arg2;
+ (void)rpcSuccessProcess:(id)arg1 response:(id)arg2 withRequest:(id)arg3;
+ (void)rpcErrorProcess:(id)arg1 response:(id)arg2 withRequest:(id)arg3;
+ (_Bool)isRpcAccsDegrade;
+ (void)rpcWithRequest:(id)arg1;
+ (void)initStaticCacheOnce;

@end

