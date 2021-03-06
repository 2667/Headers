//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface KSVideoAdvanceFrameOperations : NSObject
{
    NSMutableArray *_indexMap;
    NSMutableArray *_framesOperationsMap;
    NSMutableArray *_framesLineStackMap;
}

@property(retain, nonatomic) NSMutableArray *framesLineStackMap; // @synthesize framesLineStackMap=_framesLineStackMap;
@property(retain, nonatomic) NSMutableArray *framesOperationsMap; // @synthesize framesOperationsMap=_framesOperationsMap;
@property(retain, nonatomic) NSMutableArray *indexMap; // @synthesize indexMap=_indexMap;
- (void).cxx_destruct;
- (unsigned long long)totalFrames;
- (id)chartletWithFrameIndex:(unsigned long long)arg1 chartletView:(id)arg2;
- (long long)mapIndex:(long long)arg1;
- (id)subtitleArray;
- (id)bubblesInfoWithCanvasSize:(struct CGSize)arg1;
- (id)firstFrameInput;
- (void)copyToAllFrameWithFrameIndex:(unsigned long long)arg1 targetView:(id)arg2;
- (void)copyToNextFiveFrameWithFrameIndex:(unsigned long long)arg1 targetView:(id)arg2;
- (void)copyToNextFrameWithFrameIndex:(unsigned long long)arg1 targetView:(id)arg2;
- (id)targetChartletsAtFrameIndex:(unsigned long long)arg1 targetView:(id)arg2;
- (void)removeChartletView:(id)arg1 onFrameIndex:(unsigned long long)arg2;
- (id)chartletsAtFrameIndex:(unsigned long long)arg1;
- (id)lineStackAtFrameIndex:(unsigned long long)arg1;
- (void)addLineStack:(id)arg1 onFrameIndex:(unsigned long long)arg2;
- (void)addChartlet:(id)arg1 onFrameIndex:(unsigned long long)arg2;
- (id)initWithFrameCapacity:(unsigned long long)arg1;

@end

