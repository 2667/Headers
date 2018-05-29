//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBGPUImageBaseFilter.h"

@class NSDictionary;

@interface WBGPUImageLookupFilter : WBGPUImageBaseFilter
{
    struct WBGPUImageTwoInputFilter *_overlayFilter;
    struct WBGPUImageFilter *_outputFilter;
    struct tmat4x4<float, glm::precision::highp> _modelMatrix;
    struct __CFDictionary *_filterDic;
    unsigned int *_textureIdList;
    long long _leftLookupIndex;
    long long _rightLookupIndex;
    long long _currentLookupIndex;
    double _divide;
    NSDictionary *_imageDicPaths;
}

@property(retain, nonatomic) NSDictionary *imageDicPaths; // @synthesize imageDicPaths=_imageDicPaths;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)processTextureId:(unsigned int)arg1 time:(CDStruct_1b6d18a9)arg2 inputSize:(struct CGSize)arg3;
- (void)removeFilterTargets;
- (void)updateFilter:(struct WBGPUImageInput *)arg1 time:(CDStruct_1b6d18a9)arg2 textureId:(unsigned int)arg3 size:(struct CGSize)arg4;
- (struct WBGPUImageFilter *)filterByLookupType:(long long)arg1;
- (void)setGLKMatrix4:(union _GLKMatrix4)arg1;
- (id)getImageFilterEffect:(id)arg1;
- (void)updateRenderPercent:(double)arg1 leftLookupIndex:(long long)arg2 rightLookupIndex:(long long)arg3;
- (void)setInputTextureId:(int)arg1 inputSize:(struct CGSize)arg2 time:(CDStruct_1b6d18a9)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithContext:(id)arg1 queue:(id)arg2;

@end

