//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HTSGLFramebufferCache : NSObject
{
    NSMutableDictionary *framebufferCache;
    NSMutableDictionary *frametextureCache;
    NSMutableDictionary *framebufferTypeCounts;
    NSMutableArray *activeImageCaptureList;
    id memoryWarningObserver;
    NSObject<OS_dispatch_queue> *framebufferCacheQueue;
    _Bool _reloadTextureFlag;
}

@property(nonatomic) _Bool reloadTextureFlag; // @synthesize reloadTextureFlag=_reloadTextureFlag;
- (void).cxx_destruct;
- (void)removeFramebufferFromActiveImageCaptureList:(id)arg1;
- (void)addFramebufferToActiveImageCaptureList:(id)arg1;
- (void)purgeAllUnassignedFramebuffers;
- (void)returnFramebufferToCache:(id)arg1;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 onlyTexture:(_Bool)arg2;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 textureOptions:(struct HTSGPUTextureOptions)arg2 onlyTexture:(_Bool)arg3;
- (id)hashForSize:(struct CGSize)arg1 textureOptions:(struct HTSGPUTextureOptions)arg2 onlyTexture:(_Bool)arg3;
- (id)init;

@end

