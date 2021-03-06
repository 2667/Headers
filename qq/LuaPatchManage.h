//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LuaPatchRuntime, NSMutableArray;

@interface LuaPatchManage : NSObject
{
    NSMutableArray *_patchs;
    LuaPatchRuntime *_luaPatchRuntime;
    NSMutableArray *_observers;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)onPatchBatchConfigComplete;
- (int)patchConfigVersion;
- (id)patchedIDs;
- (void)downloadPatch:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)updatePatches:(id)arg1 phase:(long long)arg2;
- (void)patchConfigFeatched:(id)arg1 updated:(_Bool)arg2 nezVersion:(int)arg3 phase:(long long)arg4;
- (void)patchBatchConfigFeatched:(id)arg1 updated:(_Bool)arg2 nezVersion:(int)arg3 phase:(long long)arg4;
- (void)patchBatchConfigFeatched:(id)arg1 updated:(_Bool)arg2 nezVersion:(int)arg3;
- (id)combilePatchConfig:(id)arg1;
- (id)patchsPolicyApply:(id)arg1;
- (void)doPatch:(unsigned long long)arg1;
- (void)doInit;
- (void)notifcationHandle:(id)arg1;
- (void)start;
- (id)init;
- (id)getPatches;
- (long long)getPatchesCount;

@end

